#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActivityRebateTriggerType.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_86;

#define RPG_CLIENT_ACTIVITYREBATETRIGGERDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xC59F880)
#define RPG_CLIENT_ACTIVITYREBATETRIGGERDATA_GET_PARAM1_OFFSET UNITYSDK_OFFSET(0xC59F990)
#define RPG_CLIENT_ACTIVITYREBATETRIGGERDATA_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0xC59F9B0)
#define RPG_CLIENT_ACTIVITYREBATETRIGGERDATA_GET_TRIGGERID_OFFSET UNITYSDK_OFFSET(0xC59F950)
#define RPG_CLIENT_ACTIVITYREBATETRIGGERDATA_GET_TRIGGERTYPE_OFFSET UNITYSDK_OFFSET(0xC59F970)
#define RPG_CLIENT_ACTIVITYREBATETRIGGERDATA_SET_PARAM1_OFFSET UNITYSDK_OFFSET(0xC59F9A0)
#define RPG_CLIENT_ACTIVITYREBATETRIGGERDATA_SET_PROGRESS_OFFSET UNITYSDK_OFFSET(0xC59F9C0)
#define RPG_CLIENT_ACTIVITYREBATETRIGGERDATA_SET_TRIGGERID_OFFSET UNITYSDK_OFFSET(0xC59F960)
#define RPG_CLIENT_ACTIVITYREBATETRIGGERDATA_SET_TRIGGERTYPE_OFFSET UNITYSDK_OFFSET(0xC59F980)
#define RPG_CLIENT_ACTIVITYREBATETRIGGERDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xC59F4D0)
#define RPG_CLIENT_ACTIVITYREBATETRIGGERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC59F940)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityRebateTriggerData_TypeDefinitionIndex = 61902;

	class ActivityRebateTriggerData : public ::System::Object
	{
	public:
		::System::UInt32 _Progress_k__BackingField; // 0x10
		::System::UInt32 _Param1_k__BackingField; // 0x14
		::RPG::GameCore::ActivityRebateTriggerType _TriggerType_k__BackingField; // 0x18
		::System::UInt32 _TriggerID_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREBATETRIGGERDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ActivityRebateTriggerData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityRebateTriggerData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREBATETRIGGERDATA_CREATE_OFFSET))(a1);
		}

		::System::Void Sync(::Class_1_D17272E82AE804C2_86* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_86*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREBATETRIGGERDATA_SYNC_OFFSET))(this, a1);
		}

		::System::UInt32 get_TriggerID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREBATETRIGGERDATA_GET_TRIGGERID_OFFSET))(this);
		}

		::System::Void set_TriggerID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREBATETRIGGERDATA_SET_TRIGGERID_OFFSET))(this, a1);
		}

		::RPG::GameCore::ActivityRebateTriggerType get_TriggerType()
		{
			return ((::RPG::GameCore::ActivityRebateTriggerType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREBATETRIGGERDATA_GET_TRIGGERTYPE_OFFSET))(this);
		}

		::System::Void set_TriggerType(::RPG::GameCore::ActivityRebateTriggerType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ActivityRebateTriggerType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREBATETRIGGERDATA_SET_TRIGGERTYPE_OFFSET))(this, a1);
		}

		::System::UInt32 get_Param1()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREBATETRIGGERDATA_GET_PARAM1_OFFSET))(this);
		}

		::System::Void set_Param1(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREBATETRIGGERDATA_SET_PARAM1_OFFSET))(this, a1);
		}

		::System::UInt32 get_Progress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREBATETRIGGERDATA_GET_PROGRESS_OFFSET))(this);
		}

		::System::Void set_Progress(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREBATETRIGGERDATA_SET_PROGRESS_OFFSET))(this, a1);
		}
	};
}
