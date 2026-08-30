#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/DanmuType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDANMUCONTENTDATA_GET_FLYSPEED_OFFSET UNITYSDK_OFFSET(0xC5A0290)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDANMUCONTENTDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xC5A0270)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDANMUCONTENTDATA_SETSPEED_OFFSET UNITYSDK_OFFSET(0xC5A02B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDANMUCONTENTDATA_SET_FLYSPEED_OFFSET UNITYSDK_OFFSET(0xC5A02A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDANMUCONTENTDATA_SET_TYPE_OFFSET UNITYSDK_OFFSET(0xC5A0280)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDANMUCONTENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC5A0310)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveDanmuContentData_TypeDefinitionIndex = 75047;

	class IdleLiveDanmuContentData : public ::System::Object
	{
	public:
		::System::Single _FlySpeed_k__BackingField; // 0x10
		::RPG::Client::ActivityIdleLive::DanmuType _Type_k__BackingField; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDANMUCONTENTDATA__CTOR_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::DanmuType get_Type()
		{
			return ((::RPG::Client::ActivityIdleLive::DanmuType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDANMUCONTENTDATA_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::RPG::Client::ActivityIdleLive::DanmuType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::DanmuType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDANMUCONTENTDATA_SET_TYPE_OFFSET))(this, a1);
		}

		::System::Single get_FlySpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDANMUCONTENTDATA_GET_FLYSPEED_OFFSET))(this);
		}

		::System::Void set_FlySpeed(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDANMUCONTENTDATA_SET_FLYSPEED_OFFSET))(this, a1);
		}

		::System::Void SetSpeed(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDANMUCONTENTDATA_SETSPEED_OFFSET))(this, a1);
		}
	};
}
