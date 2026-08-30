#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IMissionChroniclePathUnlockConditionData; }
namespace System { class String; }

#define RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONDATA_ACTIVITYHELIOBUS_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1696F9F0)
#define RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONDATA_ACTIVITYHELIOBUS_EQUALS_OFFSET UNITYSDK_OFFSET(0x1696F940)
#define RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONDATA_ACTIVITYHELIOBUS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1696FB20)
#define RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONDATA_ACTIVITYHELIOBUS_GET_CONDITIONTEXT_OFFSET UNITYSDK_OFFSET(0x1696FB70)
#define RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONDATA_ACTIVITYHELIOBUS__CTOR_OFFSET UNITYSDK_OFFSET(0x1696F930)

namespace RPG::Client
{
	inline static constexpr unsigned int MissionChroniclePathUnlockConditionData_ActivityHeliobus_TypeDefinitionIndex = 66161;

	class MissionChroniclePathUnlockConditionData_ActivityHeliobus : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONDATA_ACTIVITYHELIOBUS__CTOR_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::Client::IMissionChroniclePathUnlockConditionData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IMissionChroniclePathUnlockConditionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONDATA_ACTIVITYHELIOBUS_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONDATA_ACTIVITYHELIOBUS_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONDATA_ACTIVITYHELIOBUS_GETHASHCODE_OFFSET))(this);
		}

		::System::String* get_ConditionText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONDATA_ACTIVITYHELIOBUS_GET_CONDITIONTEXT_OFFSET))(this);
		}
	};
}
