#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveAvatarPromotionBaseData.h"
#include "unitysdk/RPG/GameCore/IdleLiveAvatarPropertyTargetType.h"

class Class_1_6990FC326F6BA919;
namespace RPG::Client::ActivityIdleLive { class IdleLiveAvatarPropertyItem; }
namespace RPG::GameCore { class ILBattleAvatarPromotionConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARPROMOTIONPROPERTYDATA_GETDESC_OFFSET UNITYSDK_OFFSET(0x19D2A6A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARPROMOTIONPROPERTYDATA_GET_EFFECTCHECKER_OFFSET UNITYSDK_OFFSET(0x19D2A840)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARPROMOTIONPROPERTYDATA_GET_EFFECTTYPE_OFFSET UNITYSDK_OFFSET(0x19D2A820)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARPROMOTIONPROPERTYDATA_GET_PROPERTYITEM_OFFSET UNITYSDK_OFFSET(0x19D2A800)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARPROMOTIONPROPERTYDATA_SET_EFFECTCHECKER_OFFSET UNITYSDK_OFFSET(0x19D2A850)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARPROMOTIONPROPERTYDATA_SET_EFFECTTYPE_OFFSET UNITYSDK_OFFSET(0x19D2A830)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARPROMOTIONPROPERTYDATA_SET_PROPERTYITEM_OFFSET UNITYSDK_OFFSET(0x19D2A810)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARPROMOTIONPROPERTYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19D29CF0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveAvatarPromotionPropertyData_TypeDefinitionIndex = 71505;

	class IdleLiveAvatarPromotionPropertyData : public ::RPG::Client::ActivityIdleLive::IdleLiveAvatarPromotionBaseData
	{
	public:
		::Class_1_6990FC326F6BA919* _EffectChecker_k__BackingField; // 0x38
		::RPG::Client::ActivityIdleLive::IdleLiveAvatarPropertyItem* _PropertyItem_k__BackingField; // 0x40
		::RPG::GameCore::IdleLiveAvatarPropertyTargetType _EffectType_k__BackingField; // 0x48

		::System::Void _ctor(::RPG::GameCore::ILBattleAvatarPromotionConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ILBattleAvatarPromotionConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARPROMOTIONPROPERTYDATA__CTOR_OFFSET))(this, a1);
		}

		::System::String* GetDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARPROMOTIONPROPERTYDATA_GETDESC_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveAvatarPropertyItem* get_PropertyItem()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveAvatarPropertyItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARPROMOTIONPROPERTYDATA_GET_PROPERTYITEM_OFFSET))(this);
		}

		::System::Void set_PropertyItem(::RPG::Client::ActivityIdleLive::IdleLiveAvatarPropertyItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveAvatarPropertyItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARPROMOTIONPROPERTYDATA_SET_PROPERTYITEM_OFFSET))(this, a1);
		}

		::RPG::GameCore::IdleLiveAvatarPropertyTargetType get_EffectType()
		{
			return ((::RPG::GameCore::IdleLiveAvatarPropertyTargetType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARPROMOTIONPROPERTYDATA_GET_EFFECTTYPE_OFFSET))(this);
		}

		::System::Void set_EffectType(::RPG::GameCore::IdleLiveAvatarPropertyTargetType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveAvatarPropertyTargetType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARPROMOTIONPROPERTYDATA_SET_EFFECTTYPE_OFFSET))(this, a1);
		}

		::Class_1_6990FC326F6BA919* get_EffectChecker()
		{
			return ((::Class_1_6990FC326F6BA919*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARPROMOTIONPROPERTYDATA_GET_EFFECTCHECKER_OFFSET))(this);
		}

		::System::Void set_EffectChecker(::Class_1_6990FC326F6BA919* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6990FC326F6BA919*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARPROMOTIONPROPERTYDATA_SET_EFFECTCHECKER_OFFSET))(this, a1);
		}
	};
}
