#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace RPG::Client { class TalkEmotionData; }

#define RPG_CLIENT_CHARACTERTALKEMOTION__CTOR_OFFSET UNITYSDK_OFFSET(0x19623D30)

namespace RPG::Client
{
	inline static constexpr unsigned int CharacterTalkEmotion_TypeDefinitionIndex = 67919;

	class CharacterTalkEmotion : public ::UnityEngine::ScriptableObject
	{
	public:
		::Il2CppArray<::RPG::Client::TalkEmotionData*>* Emotions; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERTALKEMOTION__CTOR_OFFSET))(this);
		}
	};
}
