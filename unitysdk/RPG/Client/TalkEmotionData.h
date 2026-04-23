#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TalkEmotionPoseData; }
namespace System { class String; }

#define RPG_CLIENT_TALKEMOTIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB278EB0)

namespace RPG::Client
{
	inline static constexpr unsigned int TalkEmotionData_TypeDefinitionIndex = 65554;

	class TalkEmotionData : public ::System::Object
	{
	public:
		::System::String* Name; // 0x10
		::Il2CppArray<::RPG::Client::TalkEmotionPoseData*>* Brow; // 0x18
		::Il2CppArray<::RPG::Client::TalkEmotionPoseData*>* Eye; // 0x20
		::Il2CppArray<::RPG::Client::TalkEmotionPoseData*>* Mouth; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKEMOTIONDATA__CTOR_OFFSET))(this);
		}
	};
}
