#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ElectricChainV2/Effect_ElectricChainV2Behavior_SubChainCollection.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18E166F0)
#define RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18E16730)
#define RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR___C___INITIALIZESUBCHAINS_B__11_0_OFFSET UNITYSDK_OFFSET(0x18E16740)

namespace RPG::Client::ElectricChainV2
{
	inline static constexpr unsigned int Effect_ElectricChainV2Behavior___c_TypeDefinitionIndex = 70179;

	class Effect_ElectricChainV2Behavior___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::ElectricChainV2::Effect_ElectricChainV2Behavior_SubChainCollection, ::System::Int32>** StaticGet___9__11_0()
		{
			return (::System::Func_2<::RPG::Client::ElectricChainV2::Effect_ElectricChainV2Behavior_SubChainCollection, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Effect_ElectricChainV2Behavior___c_TypeDefinitionIndex)->GetStaticField(0x6BBD0);
		}
		static ::RPG::Client::ElectricChainV2::Effect_ElectricChainV2Behavior___c** StaticGet___9()
		{
			return (::RPG::Client::ElectricChainV2::Effect_ElectricChainV2Behavior___c**)Il2CppClass::FromTypeDefinitionIndex(Effect_ElectricChainV2Behavior___c_TypeDefinitionIndex)->GetStaticField(0x6BBD8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __InitializeSubChains_b__11_0(::RPG::Client::ElectricChainV2::Effect_ElectricChainV2Behavior_SubChainCollection a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ElectricChainV2::Effect_ElectricChainV2Behavior_SubChainCollection))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR___C___INITIALIZESUBCHAINS_B__11_0_OFFSET))(this, a1);
		}
	};
}
