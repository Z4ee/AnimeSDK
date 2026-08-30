#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IMissionChroniclePathUnlockConditionData; }
namespace System { class String; }

#define RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONDATA_PLAYERLEVEL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xD6D7060)
#define RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONDATA_PLAYERLEVEL_EQUALS_OFFSET UNITYSDK_OFFSET(0xD6D6FB0)
#define RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONDATA_PLAYERLEVEL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xD6D7180)
#define RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONDATA_PLAYERLEVEL_GET_CONDITIONTEXT_OFFSET UNITYSDK_OFFSET(0xD6D7200)
#define RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONDATA_PLAYERLEVEL_GET_REQUIREDLEVEL_OFFSET UNITYSDK_OFFSET(0xD6D71F0)
#define RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONDATA_PLAYERLEVEL__CTOR_OFFSET UNITYSDK_OFFSET(0xD6D6FA0)

namespace RPG::Client
{
	inline static constexpr unsigned int MissionChroniclePathUnlockConditionData_PlayerLevel_TypeDefinitionIndex = 66170;

	class MissionChroniclePathUnlockConditionData_PlayerLevel : public ::System::Object
	{
	public:
		::System::UInt32 _RequiredLevel_k__BackingField; // 0x10

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONDATA_PLAYERLEVEL__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::RPG::Client::IMissionChroniclePathUnlockConditionData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IMissionChroniclePathUnlockConditionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONDATA_PLAYERLEVEL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONDATA_PLAYERLEVEL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONDATA_PLAYERLEVEL_GETHASHCODE_OFFSET))(this);
		}

		::System::UInt32 get_RequiredLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONDATA_PLAYERLEVEL_GET_REQUIREDLEVEL_OFFSET))(this);
		}

		::System::String* get_ConditionText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONDATA_PLAYERLEVEL_GET_CONDITIONTEXT_OFFSET))(this);
		}
	};
}
