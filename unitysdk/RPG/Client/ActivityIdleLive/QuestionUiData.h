#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class GiftSenderUiData; }
namespace RPG::GameCore { class IdleLiveQuestionRow; }
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_QUESTIONUIDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xC512790)
#define RPG_CLIENT_ACTIVITYIDLELIVE_QUESTIONUIDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xC512780)
#define RPG_CLIENT_ACTIVITYIDLELIVE_QUESTIONUIDATA_GET_UID_OFFSET UNITYSDK_OFFSET(0xC512770)
#define RPG_CLIENT_ACTIVITYIDLELIVE_QUESTIONUIDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC512850)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int QuestionUiData_TypeDefinitionIndex = 75432;

	class QuestionUiData : public ::System::Object
	{
	public:
		::RPG::Client::ActivityIdleLive::GiftSenderUiData* SenderUiData; // 0x10
		::System::String* SenderIcon; // 0x18
		::System::String* Option1Icon; // 0x20
		::System::String* Option2Icon; // 0x28
		::System::Single Duration; // 0x30
		::System::UInt32 Option2Id; // 0x34
		::System::UInt32 _Uid_k__BackingField; // 0x38
		::System::Boolean IsShow; // 0x3C
		::RPG::Client::TextID Content; // 0x40
		::System::UInt32 Option1Id; // 0x50
		::System::UInt32 _Id_k__BackingField; // 0x54

		::System::Void _ctor(::RPG::GameCore::IdleLiveQuestionRow* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveQuestionRow*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_QUESTIONUIDATA__CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_Uid()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_QUESTIONUIDATA_GET_UID_OFFSET))(this);
		}

		::System::UInt32 get_Id()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_QUESTIONUIDATA_GET_ID_OFFSET))(this);
		}

		static ::RPG::Client::ActivityIdleLive::QuestionUiData* Create(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::ActivityIdleLive::QuestionUiData*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_QUESTIONUIDATA_CREATE_OFFSET))(a1, a2);
		}
	};
}
