#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IMissionChroniclePathUnlockConditionData; }
namespace System { class String; }

#define RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONDATA_ACTIVITYSWORDTRAINING_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x16970010)
#define RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONDATA_ACTIVITYSWORDTRAINING_EQUALS_OFFSET UNITYSDK_OFFSET(0x1696FF60)
#define RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONDATA_ACTIVITYSWORDTRAINING_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x16970140)
#define RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONDATA_ACTIVITYSWORDTRAINING_GET_CONDITIONTEXT_OFFSET UNITYSDK_OFFSET(0x16970190)
#define RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONDATA_ACTIVITYSWORDTRAINING__CTOR_OFFSET UNITYSDK_OFFSET(0x1696FF50)

namespace RPG::Client
{
	inline static constexpr unsigned int MissionChroniclePathUnlockConditionData_ActivitySwordTraining_TypeDefinitionIndex = 66163;

	class MissionChroniclePathUnlockConditionData_ActivitySwordTraining : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONDATA_ACTIVITYSWORDTRAINING__CTOR_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::Client::IMissionChroniclePathUnlockConditionData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IMissionChroniclePathUnlockConditionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONDATA_ACTIVITYSWORDTRAINING_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONDATA_ACTIVITYSWORDTRAINING_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONDATA_ACTIVITYSWORDTRAINING_GETHASHCODE_OFFSET))(this);
		}

		::System::String* get_ConditionText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONDATA_ACTIVITYSWORDTRAINING_GET_CONDITIONTEXT_OFFSET))(this);
		}
	};
}
