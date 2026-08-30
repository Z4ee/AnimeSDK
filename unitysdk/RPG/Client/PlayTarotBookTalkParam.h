#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TarotBookTalkInfo; }

#define RPG_CLIENT_PLAYTAROTBOOKTALKPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xDB95BC0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayTarotBookTalkParam_TypeDefinitionIndex = 68044;

	class PlayTarotBookTalkParam : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::TarotBookTalkInfo*>* TalkInfos; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYTAROTBOOKTALKPARAM__CTOR_OFFSET))(this);
		}
	};
}
