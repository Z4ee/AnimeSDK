#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IMissionChroniclePathUnlockConditionData; }
namespace System { class String; }

#define RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONDATA_MESSAGE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x16970ED0)
#define RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONDATA_MESSAGE_EQUALS_OFFSET UNITYSDK_OFFSET(0x16970E20)
#define RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONDATA_MESSAGE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x16970FF0)
#define RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONDATA_MESSAGE_GET_CONDITIONTEXT_OFFSET UNITYSDK_OFFSET(0x16971070)
#define RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONDATA_MESSAGE_GET_MESSAGEGROUPID_OFFSET UNITYSDK_OFFSET(0x16971060)
#define RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONDATA_MESSAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x16970E10)

namespace RPG::Client
{
	inline static constexpr unsigned int MissionChroniclePathUnlockConditionData_Message_TypeDefinitionIndex = 66166;

	class MissionChroniclePathUnlockConditionData_Message : public ::System::Object
	{
	public:
		::System::UInt32 _MessageGroupID_k__BackingField; // 0x10

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONDATA_MESSAGE__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::RPG::Client::IMissionChroniclePathUnlockConditionData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IMissionChroniclePathUnlockConditionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONDATA_MESSAGE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONDATA_MESSAGE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONDATA_MESSAGE_GETHASHCODE_OFFSET))(this);
		}

		::System::UInt32 get_MessageGroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONDATA_MESSAGE_GET_MESSAGEGROUPID_OFFSET))(this);
		}

		::System::String* get_ConditionText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONDATA_MESSAGE_GET_CONDITIONTEXT_OFFSET))(this);
		}
	};
}
