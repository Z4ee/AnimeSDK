#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HipplenStatType.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_481;
namespace RPG::GameCore { class ActivityHipplenStatConfigRow; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSTATUSCHANGEINFO_GETSTATCONFIG_OFFSET UNITYSDK_OFFSET(0xB0E40A0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSTATUSCHANGEINFO_GET_CHANGEVALUE_OFFSET UNITYSDK_OFFSET(0xB0E4100)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSTATUSCHANGEINFO_GET_STATTYPE_OFFSET UNITYSDK_OFFSET(0xB0E4120)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSTATUSCHANGEINFO_SET_CHANGEVALUE_OFFSET UNITYSDK_OFFSET(0xB0E4110)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSTATUSCHANGEINFO_SET_STATTYPE_OFFSET UNITYSDK_OFFSET(0xB0E4130)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSTATUSCHANGEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB0E4080)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenStatusChangeInfo_TypeDefinitionIndex = 70350;

	class ActivityHipplenStatusChangeInfo : public ::System::Object
	{
	public:
		::System::Int32 _ChangeValue_k__BackingField; // 0x10
		::RPG::GameCore::HipplenStatType _StatType_k__BackingField; // 0x14

		::System::Void _ctor(::Class_1_D17272E82AE804C2_481* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_481*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSTATUSCHANGEINFO__CTOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::ActivityHipplenStatConfigRow* GetStatConfig()
		{
			return ((::RPG::GameCore::ActivityHipplenStatConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSTATUSCHANGEINFO_GETSTATCONFIG_OFFSET))(this);
		}

		::System::Int32 get_ChangeValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSTATUSCHANGEINFO_GET_CHANGEVALUE_OFFSET))(this);
		}

		::System::Void set_ChangeValue(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSTATUSCHANGEINFO_SET_CHANGEVALUE_OFFSET))(this, a1);
		}

		::RPG::GameCore::HipplenStatType get_StatType()
		{
			return ((::RPG::GameCore::HipplenStatType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSTATUSCHANGEINFO_GET_STATTYPE_OFFSET))(this);
		}

		::System::Void set_StatType(::RPG::GameCore::HipplenStatType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::HipplenStatType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSTATUSCHANGEINFO_SET_STATTYPE_OFFSET))(this, a1);
		}
	};
}
