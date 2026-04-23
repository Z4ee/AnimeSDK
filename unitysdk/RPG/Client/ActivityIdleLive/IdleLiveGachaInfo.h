#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7F6A638FBAAEC90B_3;
class Class_1_D17272E82AE804C2_482;
namespace RPG::Client::ActivityIdleLive { class IdleLiveGachaPoolData; }
namespace RPG::Client::ActivityIdleLive { class IdlePowerChangeContext; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAINFO_DOGACHA_OFFSET UNITYSDK_OFFSET(0x9B57740)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAINFO_GET_CURGACHADATA_OFFSET UNITYSDK_OFFSET(0x9B58B90)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAINFO_GET_GACHAPOWERCHANGECONTEXT_OFFSET UNITYSDK_OFFSET(0x9B58BB0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAINFO_INIT_OFFSET UNITYSDK_OFFSET(0x9B57270)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAINFO_SET_CURGACHADATA_OFFSET UNITYSDK_OFFSET(0x9B58BA0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAINFO_SET_GACHAPOWERCHANGECONTEXT_OFFSET UNITYSDK_OFFSET(0x9B58BC0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAINFO_UPDATE_1_OFFSET UNITYSDK_OFFSET(0x9B58B20)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAINFO_UPDATE_OFFSET UNITYSDK_OFFSET(0x9B577D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9B58BD0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveGachaInfo_TypeDefinitionIndex = 69309;

	class IdleLiveGachaInfo : public ::System::Object
	{
	public:
		::RPG::Client::ActivityIdleLive::IdleLiveGachaPoolData* _CurGachaData_k__BackingField; // 0x10
		::RPG::Client::ActivityIdleLive::IdlePowerChangeContext* _GachaPowerChangeContext_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAINFO_INIT_OFFSET))(this);
		}

		::System::Void DoGacha(::System::UInt32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAINFO_DOGACHA_OFFSET))(this, count);
		}

		::System::Void Update(::Class_1_7F6A638FBAAEC90B_3* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7F6A638FBAAEC90B_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAINFO_UPDATE_OFFSET))(this, rsp);
		}

		::System::Void Update_1(::Class_1_D17272E82AE804C2_482* mgrInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_482*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAINFO_UPDATE_1_OFFSET))(this, mgrInfo);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveGachaPoolData* get_CurGachaData()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveGachaPoolData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAINFO_GET_CURGACHADATA_OFFSET))(this);
		}

		::System::Void set_CurGachaData(::RPG::Client::ActivityIdleLive::IdleLiveGachaPoolData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveGachaPoolData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAINFO_SET_CURGACHADATA_OFFSET))(this, value);
		}

		::RPG::Client::ActivityIdleLive::IdlePowerChangeContext* get_GachaPowerChangeContext()
		{
			return ((::RPG::Client::ActivityIdleLive::IdlePowerChangeContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAINFO_GET_GACHAPOWERCHANGECONTEXT_OFFSET))(this);
		}

		::System::Void set_GachaPowerChangeContext(::RPG::Client::ActivityIdleLive::IdlePowerChangeContext* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdlePowerChangeContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAINFO_SET_GACHAPOWERCHANGECONTEXT_OFFSET))(this, value);
		}
	};
}
