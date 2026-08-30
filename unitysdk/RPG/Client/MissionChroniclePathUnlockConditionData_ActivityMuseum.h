#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IMissionChroniclePathUnlockConditionData; }
namespace System { class String; }

#define RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONDATA_ACTIVITYMUSEUM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1696FD00)
#define RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONDATA_ACTIVITYMUSEUM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1696FC50)
#define RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONDATA_ACTIVITYMUSEUM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1696FE30)
#define RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONDATA_ACTIVITYMUSEUM_GET_CONDITIONTEXT_OFFSET UNITYSDK_OFFSET(0x1696FE80)
#define RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONDATA_ACTIVITYMUSEUM__CTOR_OFFSET UNITYSDK_OFFSET(0x1696FC40)

namespace RPG::Client
{
	inline static constexpr unsigned int MissionChroniclePathUnlockConditionData_ActivityMuseum_TypeDefinitionIndex = 66162;

	class MissionChroniclePathUnlockConditionData_ActivityMuseum : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONDATA_ACTIVITYMUSEUM__CTOR_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::Client::IMissionChroniclePathUnlockConditionData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IMissionChroniclePathUnlockConditionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONDATA_ACTIVITYMUSEUM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONDATA_ACTIVITYMUSEUM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONDATA_ACTIVITYMUSEUM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* get_ConditionText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONDATA_ACTIVITYMUSEUM_GET_CONDITIONTEXT_OFFSET))(this);
		}
	};
}
