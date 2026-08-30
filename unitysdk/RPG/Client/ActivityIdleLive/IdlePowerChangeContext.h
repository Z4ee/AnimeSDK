#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_96F6662CA3713095_20.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDecimal.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/PowerChangeUiData.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLEPOWERCHANGECONTEXT_GETPOWERCHANGEUIDATA_OFFSET UNITYSDK_OFFSET(0x1BA619F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLEPOWERCHANGECONTEXT_GET_CHANGEDPOWERRAW_OFFSET UNITYSDK_OFFSET(0x1BA61C30)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLEPOWERCHANGECONTEXT_GET_CURPOWERRAW_OFFSET UNITYSDK_OFFSET(0x1BA61BD0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLEPOWERCHANGECONTEXT_GET_LASTPOWERRAW_OFFSET UNITYSDK_OFFSET(0x1BA61C00)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLEPOWERCHANGECONTEXT_GET_REASON_OFFSET UNITYSDK_OFFSET(0x1BA61C60)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLEPOWERCHANGECONTEXT_SET_CHANGEDPOWERRAW_OFFSET UNITYSDK_OFFSET(0x1BA61C50)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLEPOWERCHANGECONTEXT_SET_CURPOWERRAW_OFFSET UNITYSDK_OFFSET(0x1BA61BF0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLEPOWERCHANGECONTEXT_SET_LASTPOWERRAW_OFFSET UNITYSDK_OFFSET(0x1BA61C20)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLEPOWERCHANGECONTEXT_SET_REASON_OFFSET UNITYSDK_OFFSET(0x1BA61C70)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLEPOWERCHANGECONTEXT_UPDATE_OFFSET UNITYSDK_OFFSET(0x1BA61820)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLEPOWERCHANGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA61C80)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdlePowerChangeContext_TypeDefinitionIndex = 75037;

	class IdlePowerChangeContext : public ::System::Object
	{
	public:
		::RPG::Client::ActivityIdleLive::IdleLiveDecimal _LastPowerRaw_k__BackingField; // 0x10
		::RPG::Client::ActivityIdleLive::IdleLiveDecimal _CurPowerRaw_k__BackingField; // 0x28
		::RPG::Client::ActivityIdleLive::IdleLiveDecimal _ChangedPowerRaw_k__BackingField; // 0x40
		::Enum_3_96F6662CA3713095_20 _Reason_k__BackingField; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLEPOWERCHANGECONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void Update(::RPG::Client::ActivityIdleLive::IdleLiveDecimal a1, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLEPOWERCHANGECONTEXT_UPDATE_OFFSET))(this, a1, a2);
		}

		::RPG::Client::ActivityIdleLive::PowerChangeUiData GetPowerChangeUiData()
		{
			return ((::RPG::Client::ActivityIdleLive::PowerChangeUiData(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLEPOWERCHANGECONTEXT_GETPOWERCHANGEUIDATA_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveDecimal get_CurPowerRaw()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLEPOWERCHANGECONTEXT_GET_CURPOWERRAW_OFFSET))(this);
		}

		::System::Void set_CurPowerRaw(::RPG::Client::ActivityIdleLive::IdleLiveDecimal a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLEPOWERCHANGECONTEXT_SET_CURPOWERRAW_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveDecimal get_LastPowerRaw()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLEPOWERCHANGECONTEXT_GET_LASTPOWERRAW_OFFSET))(this);
		}

		::System::Void set_LastPowerRaw(::RPG::Client::ActivityIdleLive::IdleLiveDecimal a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLEPOWERCHANGECONTEXT_SET_LASTPOWERRAW_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveDecimal get_ChangedPowerRaw()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLEPOWERCHANGECONTEXT_GET_CHANGEDPOWERRAW_OFFSET))(this);
		}

		::System::Void set_ChangedPowerRaw(::RPG::Client::ActivityIdleLive::IdleLiveDecimal a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLEPOWERCHANGECONTEXT_SET_CHANGEDPOWERRAW_OFFSET))(this, a1);
		}

		::Enum_3_96F6662CA3713095_20 get_Reason()
		{
			return ((::Enum_3_96F6662CA3713095_20(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLEPOWERCHANGECONTEXT_GET_REASON_OFFSET))(this);
		}

		::System::Void set_Reason(::Enum_3_96F6662CA3713095_20 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_96F6662CA3713095_20))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLEPOWERCHANGECONTEXT_SET_REASON_OFFSET))(this, a1);
		}
	};
}
