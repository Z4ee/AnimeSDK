#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class GiftSenderUiData; }
namespace RPG::GameCore { class IdleLiveQuestionRow; }
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_QUESTIONUIDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1BA65E60)
#define RPG_CLIENT_ACTIVITYIDLELIVE_QUESTIONUIDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1BA65E50)
#define RPG_CLIENT_ACTIVITYIDLELIVE_QUESTIONUIDATA_GET_UID_OFFSET UNITYSDK_OFFSET(0x1BA65E40)
#define RPG_CLIENT_ACTIVITYIDLELIVE_QUESTIONUIDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA65F20)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int QuestionUiData_TypeDefinitionIndex = 75131;

	class QuestionUiData : public ::System::Object
	{
	public:
		::System::String* Option1Icon; // 0x10
		::System::String* Option2Icon; // 0x18
		::RPG::Client::ActivityIdleLive::GiftSenderUiData* SenderUiData; // 0x20
		::System::String* SenderIcon; // 0x28
		::RPG::Client::TextID Content; // 0x30
		::System::UInt32 _Id_k__BackingField; // 0x40
		::System::UInt32 Option1Id; // 0x44
		::System::UInt32 Option2Id; // 0x48
		::System::Single Duration; // 0x4C
		::System::Boolean IsShow; // 0x50
		::System::UInt32 _Uid_k__BackingField; // 0x54

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
