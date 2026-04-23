#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveAvatarPromotionBaseData.h"
#include "unitysdk/RPG/GameCore/IdleLiveAvatarPropertyTargetType.h"

class Class_1_6990FC326F6BA919;
namespace RPG::Client::ActivityIdleLive { class IdleLiveAvatarPropertyItem; }
namespace RPG::GameCore { class ILBattleAvatarPromotionConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARPROMOTIONPROPERTYDATA_GETDESC_OFFSET UNITYSDK_OFFSET(0x9B2F9F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARPROMOTIONPROPERTYDATA_GET_EFFECTCHECKER_OFFSET UNITYSDK_OFFSET(0x9B2FBB0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARPROMOTIONPROPERTYDATA_GET_EFFECTTYPE_OFFSET UNITYSDK_OFFSET(0x9B2FB90)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARPROMOTIONPROPERTYDATA_GET_PROPERTYITEM_OFFSET UNITYSDK_OFFSET(0x9B2FB70)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARPROMOTIONPROPERTYDATA_SET_EFFECTCHECKER_OFFSET UNITYSDK_OFFSET(0x9B2FBC0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARPROMOTIONPROPERTYDATA_SET_EFFECTTYPE_OFFSET UNITYSDK_OFFSET(0x9B2FBA0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARPROMOTIONPROPERTYDATA_SET_PROPERTYITEM_OFFSET UNITYSDK_OFFSET(0x9B2FB80)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARPROMOTIONPROPERTYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9B2ED40)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARPROMOTIONPROPERTYDATA___IFIXBASEPROXY_GETDESC_OFFSET UNITYSDK_OFFSET(0x9B2FBD0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveAvatarPromotionPropertyData_TypeDefinitionIndex = 69170;

	class IdleLiveAvatarPromotionPropertyData : public ::RPG::Client::ActivityIdleLive::IdleLiveAvatarPromotionBaseData
	{
	public:
		::RPG::Client::ActivityIdleLive::IdleLiveAvatarPropertyItem* _PropertyItem_k__BackingField; // 0x38
		::Class_1_6990FC326F6BA919* _EffectChecker_k__BackingField; // 0x40
		::RPG::GameCore::IdleLiveAvatarPropertyTargetType _EffectType_k__BackingField; // 0x48

		::System::Void _ctor(::RPG::GameCore::ILBattleAvatarPromotionConfigRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ILBattleAvatarPromotionConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARPROMOTIONPROPERTYDATA__CTOR_OFFSET))(this, row);
		}

		::System::String* GetDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARPROMOTIONPROPERTYDATA_GETDESC_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveAvatarPropertyItem* get_PropertyItem()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveAvatarPropertyItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARPROMOTIONPROPERTYDATA_GET_PROPERTYITEM_OFFSET))(this);
		}

		::System::Void set_PropertyItem(::RPG::Client::ActivityIdleLive::IdleLiveAvatarPropertyItem* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveAvatarPropertyItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARPROMOTIONPROPERTYDATA_SET_PROPERTYITEM_OFFSET))(this, value);
		}

		::RPG::GameCore::IdleLiveAvatarPropertyTargetType get_EffectType()
		{
			return ((::RPG::GameCore::IdleLiveAvatarPropertyTargetType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARPROMOTIONPROPERTYDATA_GET_EFFECTTYPE_OFFSET))(this);
		}

		::System::Void set_EffectType(::RPG::GameCore::IdleLiveAvatarPropertyTargetType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveAvatarPropertyTargetType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARPROMOTIONPROPERTYDATA_SET_EFFECTTYPE_OFFSET))(this, value);
		}

		::Class_1_6990FC326F6BA919* get_EffectChecker()
		{
			return ((::Class_1_6990FC326F6BA919*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARPROMOTIONPROPERTYDATA_GET_EFFECTCHECKER_OFFSET))(this);
		}

		::System::Void set_EffectChecker(::Class_1_6990FC326F6BA919* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6990FC326F6BA919*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARPROMOTIONPROPERTYDATA_SET_EFFECTCHECKER_OFFSET))(this, value);
		}

		::System::String* __iFixBaseProxy_GetDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARPROMOTIONPROPERTYDATA___IFIXBASEPROXY_GETDESC_OFFSET))(this);
		}
	};
}
