#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChimeraDuelShopViewEffectBase.h"
#include "unitysdk/System/Nullable_1.h"

namespace RPG::Client { class ChimeraDuelGameSessionChimera; }
namespace RPG::Client::Prop { class ChimeraDuelShopViewJumpTextEffect_UpgradeBuilder; }
namespace RPG::Client::Prop { class ChimeraDuelShopViewJumpTextEffect_UpgradeEffect; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWJUMPTEXTEFFECT_GET_DELTAATTACK_OFFSET UNITYSDK_OFFSET(0xC51D780)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWJUMPTEXTEFFECT_GET_DELTAHEALTH_OFFSET UNITYSDK_OFFSET(0xC51D7A0)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWJUMPTEXTEFFECT_GET_UPGRADE_OFFSET UNITYSDK_OFFSET(0xC51D7C0)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWJUMPTEXTEFFECT_PREPAREUPGRADE_OFFSET UNITYSDK_OFFSET(0xC51DE50)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWJUMPTEXTEFFECT_SET_DELTAATTACK_OFFSET UNITYSDK_OFFSET(0xC51D790)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWJUMPTEXTEFFECT_SET_DELTAHEALTH_OFFSET UNITYSDK_OFFSET(0xC51D7B0)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWJUMPTEXTEFFECT_SET_UPGRADE_OFFSET UNITYSDK_OFFSET(0xC51D7D0)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWJUMPTEXTEFFECT_TRYCREATEFORCOREFLAME_OFFSET UNITYSDK_OFFSET(0xC51DBE0)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWJUMPTEXTEFFECT_TRYCREATE_OFFSET UNITYSDK_OFFSET(0xC51D850)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWJUMPTEXTEFFECT_VISITTARGETS_OFFSET UNITYSDK_OFFSET(0xC51D7F0)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWJUMPTEXTEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0xC51D7E0)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWJUMPTEXTEFFECT__IGNOREZERO_OFFSET UNITYSDK_OFFSET(0xC51DB70)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelShopViewJumpTextEffect_TypeDefinitionIndex = 72882;

	class ChimeraDuelShopViewJumpTextEffect : public ::RPG::Client::Prop::ChimeraDuelShopViewEffectBase
	{
	public:
		::RPG::Client::Prop::ChimeraDuelShopViewJumpTextEffect_UpgradeEffect* _Upgrade_k__BackingField; // 0x10
		::System::Nullable_1<::System::Int32> _DeltaHealth_k__BackingField; // 0x18
		::System::UInt32 _TargetUniqueID; // 0x20
		::System::Nullable_1<::System::Int32> _DeltaAttack_k__BackingField; // 0x24

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWJUMPTEXTEFFECT__CTOR_OFFSET))(this, a1);
		}

		::System::Nullable_1<::System::Int32> get_DeltaAttack()
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWJUMPTEXTEFFECT_GET_DELTAATTACK_OFFSET))(this);
		}

		::System::Void set_DeltaAttack(::System::Nullable_1<::System::Int32> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWJUMPTEXTEFFECT_SET_DELTAATTACK_OFFSET))(this, a1);
		}

		::System::Nullable_1<::System::Int32> get_DeltaHealth()
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWJUMPTEXTEFFECT_GET_DELTAHEALTH_OFFSET))(this);
		}

		::System::Void set_DeltaHealth(::System::Nullable_1<::System::Int32> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWJUMPTEXTEFFECT_SET_DELTAHEALTH_OFFSET))(this, a1);
		}

		::RPG::Client::Prop::ChimeraDuelShopViewJumpTextEffect_UpgradeEffect* get_Upgrade()
		{
			return ((::RPG::Client::Prop::ChimeraDuelShopViewJumpTextEffect_UpgradeEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWJUMPTEXTEFFECT_GET_UPGRADE_OFFSET))(this);
		}

		::System::Void set_Upgrade(::RPG::Client::Prop::ChimeraDuelShopViewJumpTextEffect_UpgradeEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelShopViewJumpTextEffect_UpgradeEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWJUMPTEXTEFFECT_SET_UPGRADE_OFFSET))(this, a1);
		}

		::System::Void VisitTargets(::System::Action_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWJUMPTEXTEFFECT_VISITTARGETS_OFFSET))(this, a1);
		}

		static ::RPG::Client::Prop::ChimeraDuelShopViewJumpTextEffect* TryCreate(::RPG::Client::ChimeraDuelGameSessionChimera* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::RPG::Client::Prop::ChimeraDuelShopViewJumpTextEffect*(*)(::RPG::Client::ChimeraDuelGameSessionChimera*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWJUMPTEXTEFFECT_TRYCREATE_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::Client::Prop::ChimeraDuelShopViewJumpTextEffect* TryCreateForCoreflame(::RPG::Client::ChimeraDuelGameSessionChimera* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::RPG::Client::Prop::ChimeraDuelShopViewJumpTextEffect*(*)(::RPG::Client::ChimeraDuelGameSessionChimera*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWJUMPTEXTEFFECT_TRYCREATEFORCOREFLAME_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::Client::Prop::ChimeraDuelShopViewJumpTextEffect_UpgradeBuilder* PrepareUpgrade(::RPG::Client::ChimeraDuelGameSessionChimera* a1, ::RPG::Client::ChimeraDuelGameSessionChimera* a2, ::System::Int32 a3)
		{
			return ((::RPG::Client::Prop::ChimeraDuelShopViewJumpTextEffect_UpgradeBuilder*(*)(::RPG::Client::ChimeraDuelGameSessionChimera*, ::RPG::Client::ChimeraDuelGameSessionChimera*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWJUMPTEXTEFFECT_PREPAREUPGRADE_OFFSET))(a1, a2, a3);
		}

		static ::System::Nullable_1<::System::Int32> _IgnoreZero(::System::Int32 a1)
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWJUMPTEXTEFFECT__IGNOREZERO_OFFSET))(a1);
		}
	};
}
