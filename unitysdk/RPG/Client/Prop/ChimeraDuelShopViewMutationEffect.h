#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChimeraDuelShopViewEffectBase.h"
#include "unitysdk/System/Nullable_1.h"

namespace RPG::Client { class ChimeraDuelGameSessionChimera; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWMUTATIONEFFECT_GET_DELTAATTACK_OFFSET UNITYSDK_OFFSET(0xA05B9A0)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWMUTATIONEFFECT_GET_DELTAHEALTH_OFFSET UNITYSDK_OFFSET(0xA05B9B0)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWMUTATIONEFFECT_GET_MUTATED_OFFSET UNITYSDK_OFFSET(0xA05B990)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWMUTATIONEFFECT_VISITTARGETS_OFFSET UNITYSDK_OFFSET(0xA05BB30)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWMUTATIONEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0xA05B9C0)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWMUTATIONEFFECT__IGNOREZERO_OFFSET UNITYSDK_OFFSET(0xA05BAD0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelShopViewMutationEffect_TypeDefinitionIndex = 63816;

	class ChimeraDuelShopViewMutationEffect : public ::RPG::Client::Prop::ChimeraDuelShopViewEffectBase
	{
	public:
		::RPG::Client::ChimeraDuelGameSessionChimera* _Mutated_k__BackingField; // 0x10
		::System::Nullable_1<::System::Int32> _DeltaHealth_k__BackingField; // 0x18
		::System::Nullable_1<::System::Int32> _DeltaAttack_k__BackingField; // 0x20

		::System::Void _ctor(::RPG::Client::ChimeraDuelGameSessionChimera* target, ::System::UInt32 newChimeraID, ::System::Int32 deltaAtk, ::System::Int32 deltaHp)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelGameSessionChimera*, ::System::UInt32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWMUTATIONEFFECT__CTOR_OFFSET))(this, target, newChimeraID, deltaAtk, deltaHp);
		}

		::RPG::Client::ChimeraDuelGameSessionChimera* get_Mutated()
		{
			return ((::RPG::Client::ChimeraDuelGameSessionChimera*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWMUTATIONEFFECT_GET_MUTATED_OFFSET))(this);
		}

		::System::Nullable_1<::System::Int32> get_DeltaAttack()
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWMUTATIONEFFECT_GET_DELTAATTACK_OFFSET))(this);
		}

		::System::Nullable_1<::System::Int32> get_DeltaHealth()
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWMUTATIONEFFECT_GET_DELTAHEALTH_OFFSET))(this);
		}

		::System::Void VisitTargets(::System::Action_1<::System::UInt32>* visit)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWMUTATIONEFFECT_VISITTARGETS_OFFSET))(this, visit);
		}

		static ::System::Nullable_1<::System::Int32> _IgnoreZero(::System::Int32 value)
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWMUTATIONEFFECT__IGNOREZERO_OFFSET))(value);
		}
	};
}
