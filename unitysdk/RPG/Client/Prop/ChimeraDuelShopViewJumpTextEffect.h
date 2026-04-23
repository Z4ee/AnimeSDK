#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChimeraDuelShopViewEffectBase.h"
#include "unitysdk/System/Nullable_1.h"

namespace RPG::Client { class ChimeraDuelGameSessionChimera; }
namespace RPG::Client::Prop { class ChimeraDuelShopViewJumpTextEffect_UpgradeBuilder; }
namespace RPG::Client::Prop { class ChimeraDuelShopViewJumpTextEffect_UpgradeEffect; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWJUMPTEXTEFFECT_GET_DELTAATTACK_OFFSET UNITYSDK_OFFSET(0xADD94E0)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWJUMPTEXTEFFECT_GET_DELTAHEALTH_OFFSET UNITYSDK_OFFSET(0xADD9500)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWJUMPTEXTEFFECT_GET_UPGRADE_OFFSET UNITYSDK_OFFSET(0xADD9520)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWJUMPTEXTEFFECT_PREPAREUPGRADE_OFFSET UNITYSDK_OFFSET(0xADD9BB0)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWJUMPTEXTEFFECT_SET_DELTAATTACK_OFFSET UNITYSDK_OFFSET(0xADD94F0)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWJUMPTEXTEFFECT_SET_DELTAHEALTH_OFFSET UNITYSDK_OFFSET(0xADD9510)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWJUMPTEXTEFFECT_SET_UPGRADE_OFFSET UNITYSDK_OFFSET(0xADD9530)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWJUMPTEXTEFFECT_TRYCREATEFORCOREFLAME_OFFSET UNITYSDK_OFFSET(0xADD9940)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWJUMPTEXTEFFECT_TRYCREATE_OFFSET UNITYSDK_OFFSET(0xADD95B0)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWJUMPTEXTEFFECT_VISITTARGETS_OFFSET UNITYSDK_OFFSET(0xADD9550)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWJUMPTEXTEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0xADD9540)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWJUMPTEXTEFFECT__IGNOREZERO_OFFSET UNITYSDK_OFFSET(0xADD98D0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelShopViewJumpTextEffect_TypeDefinitionIndex = 71860;

	class ChimeraDuelShopViewJumpTextEffect : public ::RPG::Client::Prop::ChimeraDuelShopViewEffectBase
	{
	public:
		::RPG::Client::Prop::ChimeraDuelShopViewJumpTextEffect_UpgradeEffect* _Upgrade_k__BackingField; // 0x10
		::System::UInt32 _TargetUniqueID; // 0x18
		::System::Nullable_1<::System::Int32> _DeltaHealth_k__BackingField; // 0x1C
		::System::Nullable_1<::System::Int32> _DeltaAttack_k__BackingField; // 0x24

		::System::Void _ctor(::System::UInt32 targetUniqueID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWJUMPTEXTEFFECT__CTOR_OFFSET))(this, targetUniqueID);
		}

		::System::Nullable_1<::System::Int32> get_DeltaAttack()
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWJUMPTEXTEFFECT_GET_DELTAATTACK_OFFSET))(this);
		}

		::System::Void set_DeltaAttack(::System::Nullable_1<::System::Int32> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWJUMPTEXTEFFECT_SET_DELTAATTACK_OFFSET))(this, value);
		}

		::System::Nullable_1<::System::Int32> get_DeltaHealth()
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWJUMPTEXTEFFECT_GET_DELTAHEALTH_OFFSET))(this);
		}

		::System::Void set_DeltaHealth(::System::Nullable_1<::System::Int32> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWJUMPTEXTEFFECT_SET_DELTAHEALTH_OFFSET))(this, value);
		}

		::RPG::Client::Prop::ChimeraDuelShopViewJumpTextEffect_UpgradeEffect* get_Upgrade()
		{
			return ((::RPG::Client::Prop::ChimeraDuelShopViewJumpTextEffect_UpgradeEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWJUMPTEXTEFFECT_GET_UPGRADE_OFFSET))(this);
		}

		::System::Void set_Upgrade(::RPG::Client::Prop::ChimeraDuelShopViewJumpTextEffect_UpgradeEffect* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelShopViewJumpTextEffect_UpgradeEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWJUMPTEXTEFFECT_SET_UPGRADE_OFFSET))(this, value);
		}

		::System::Void VisitTargets(::System::Action_1<::System::UInt32>* visit)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWJUMPTEXTEFFECT_VISITTARGETS_OFFSET))(this, visit);
		}

		static ::RPG::Client::Prop::ChimeraDuelShopViewJumpTextEffect* TryCreate(::RPG::Client::ChimeraDuelGameSessionChimera* target, ::System::Int32 effectAtk, ::System::Int32 effectHp, ::System::Int32 effectExp)
		{
			return ((::RPG::Client::Prop::ChimeraDuelShopViewJumpTextEffect*(*)(::RPG::Client::ChimeraDuelGameSessionChimera*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWJUMPTEXTEFFECT_TRYCREATE_OFFSET))(target, effectAtk, effectHp, effectExp);
		}

		static ::RPG::Client::Prop::ChimeraDuelShopViewJumpTextEffect* TryCreateForCoreflame(::RPG::Client::ChimeraDuelGameSessionChimera* target, ::System::Int32 effectAtk, ::System::Int32 effectHp, ::System::Int32 effectCoreflame)
		{
			return ((::RPG::Client::Prop::ChimeraDuelShopViewJumpTextEffect*(*)(::RPG::Client::ChimeraDuelGameSessionChimera*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWJUMPTEXTEFFECT_TRYCREATEFORCOREFLAME_OFFSET))(target, effectAtk, effectHp, effectCoreflame);
		}

		static ::RPG::Client::Prop::ChimeraDuelShopViewJumpTextEffect_UpgradeBuilder* PrepareUpgrade(::RPG::Client::ChimeraDuelGameSessionChimera* a, ::RPG::Client::ChimeraDuelGameSessionChimera* b, ::System::Int32 targetSlotIndex)
		{
			return ((::RPG::Client::Prop::ChimeraDuelShopViewJumpTextEffect_UpgradeBuilder*(*)(::RPG::Client::ChimeraDuelGameSessionChimera*, ::RPG::Client::ChimeraDuelGameSessionChimera*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWJUMPTEXTEFFECT_PREPAREUPGRADE_OFFSET))(a, b, targetSlotIndex);
		}

		static ::System::Nullable_1<::System::Int32> _IgnoreZero(::System::Int32 value)
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWJUMPTEXTEFFECT__IGNOREZERO_OFFSET))(value);
		}
	};
}
