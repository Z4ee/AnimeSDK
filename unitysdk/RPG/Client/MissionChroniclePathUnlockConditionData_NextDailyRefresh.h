#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DateTimePro.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IMissionChroniclePathUnlockConditionData; }
namespace System { class String; }

#define RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONDATA_NEXTDAILYREFRESH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xD6D6D90)
#define RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONDATA_NEXTDAILYREFRESH_EQUALS_OFFSET UNITYSDK_OFFSET(0xD6D6CC0)
#define RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONDATA_NEXTDAILYREFRESH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xD6D6E40)
#define RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONDATA_NEXTDAILYREFRESH_GET_CONDITIONTEXT_OFFSET UNITYSDK_OFFSET(0xD6D6ED0)
#define RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONDATA_NEXTDAILYREFRESH_GET_TIME_OFFSET UNITYSDK_OFFSET(0xD6D6EC0)
#define RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONDATA_NEXTDAILYREFRESH__CTOR_OFFSET UNITYSDK_OFFSET(0xD6D6CB0)

namespace RPG::Client
{
	inline static constexpr unsigned int MissionChroniclePathUnlockConditionData_NextDailyRefresh_TypeDefinitionIndex = 66169;

	class MissionChroniclePathUnlockConditionData_NextDailyRefresh : public ::System::Object
	{
	public:
		::RPG::Client::DateTimePro _Time_k__BackingField; // 0x10

		::System::Void _ctor(::RPG::Client::DateTimePro a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DateTimePro))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONDATA_NEXTDAILYREFRESH__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::RPG::Client::IMissionChroniclePathUnlockConditionData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IMissionChroniclePathUnlockConditionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONDATA_NEXTDAILYREFRESH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONDATA_NEXTDAILYREFRESH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONDATA_NEXTDAILYREFRESH_GETHASHCODE_OFFSET))(this);
		}

		::RPG::Client::DateTimePro get_Time()
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONDATA_NEXTDAILYREFRESH_GET_TIME_OFFSET))(this);
		}

		::System::String* get_ConditionText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONDATA_NEXTDAILYREFRESH_GET_CONDITIONTEXT_OFFSET))(this);
		}
	};
}
