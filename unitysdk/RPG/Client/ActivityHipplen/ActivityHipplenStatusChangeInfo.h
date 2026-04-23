#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HipplenStatType.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_468;
namespace RPG::GameCore { class ActivityHipplenStatConfigRow; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSTATUSCHANGEINFO_GETSTATCONFIG_OFFSET UNITYSDK_OFFSET(0x9B00520)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSTATUSCHANGEINFO_GET_CHANGEVALUE_OFFSET UNITYSDK_OFFSET(0x9B00580)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSTATUSCHANGEINFO_GET_STATTYPE_OFFSET UNITYSDK_OFFSET(0x9B005A0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSTATUSCHANGEINFO_SET_CHANGEVALUE_OFFSET UNITYSDK_OFFSET(0x9B00590)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSTATUSCHANGEINFO_SET_STATTYPE_OFFSET UNITYSDK_OFFSET(0x9B005B0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSTATUSCHANGEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9B004F0)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenStatusChangeInfo_TypeDefinitionIndex = 69538;

	class ActivityHipplenStatusChangeInfo : public ::System::Object
	{
	public:
		::RPG::GameCore::HipplenStatType _StatType_k__BackingField; // 0x10
		::System::Int32 _ChangeValue_k__BackingField; // 0x14

		::System::Void _ctor(::Class_1_D17272E82AE804C2_468* delta)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_468*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSTATUSCHANGEINFO__CTOR_OFFSET))(this, delta);
		}

		::RPG::GameCore::ActivityHipplenStatConfigRow* GetStatConfig()
		{
			return ((::RPG::GameCore::ActivityHipplenStatConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSTATUSCHANGEINFO_GETSTATCONFIG_OFFSET))(this);
		}

		::System::Int32 get_ChangeValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSTATUSCHANGEINFO_GET_CHANGEVALUE_OFFSET))(this);
		}

		::System::Void set_ChangeValue(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSTATUSCHANGEINFO_SET_CHANGEVALUE_OFFSET))(this, value);
		}

		::RPG::GameCore::HipplenStatType get_StatType()
		{
			return ((::RPG::GameCore::HipplenStatType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSTATUSCHANGEINFO_GET_STATTYPE_OFFSET))(this);
		}

		::System::Void set_StatType(::RPG::GameCore::HipplenStatType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::HipplenStatType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSTATUSCHANGEINFO_SET_STATTYPE_OFFSET))(this, value);
		}
	};
}
