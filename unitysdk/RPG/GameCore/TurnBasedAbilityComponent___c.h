#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { template <typename T> class Action_1; }

#define RPG_GAMECORE_TURNBASEDABILITYCOMPONENT___C__ADDMODIFIEREXTRAMAXLAYER_B__158_0_OFFSET UNITYSDK_OFFSET(0xCF5E910)
#define RPG_GAMECORE_TURNBASEDABILITYCOMPONENT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCF5E8C0)
#define RPG_GAMECORE_TURNBASEDABILITYCOMPONENT___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCF5E900)
#define RPG_GAMECORE_TURNBASEDABILITYCOMPONENT___C__REMOVEMODIFIEREXTRAMAXLAYER_B__159_0_OFFSET UNITYSDK_OFFSET(0xCF5EA60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TurnBasedAbilityComponent___c_TypeDefinitionIndex = 53939;

	class TurnBasedAbilityComponent___c : public ::System::Object
	{
	public:
		static ::RPG::GameCore::TurnBasedAbilityComponent___c** StaticGet___9()
		{
			return (::RPG::GameCore::TurnBasedAbilityComponent___c**)Il2CppClass::FromTypeDefinitionIndex(TurnBasedAbilityComponent___c_TypeDefinitionIndex)->GetStaticField(0x22E0);
		}
		static ::System::Action_1<::RPG::GameCore::TurnBasedModifierInstance*>** StaticGet___9__158_0()
		{
			return (::System::Action_1<::RPG::GameCore::TurnBasedModifierInstance*>**)Il2CppClass::FromTypeDefinitionIndex(TurnBasedAbilityComponent___c_TypeDefinitionIndex)->GetStaticField(0x22E8);
		}
		static ::System::Action_1<::RPG::GameCore::TurnBasedModifierInstance*>** StaticGet___9__159_0()
		{
			return (::System::Action_1<::RPG::GameCore::TurnBasedModifierInstance*>**)Il2CppClass::FromTypeDefinitionIndex(TurnBasedAbilityComponent___c_TypeDefinitionIndex)->GetStaticField(0x22F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDABILITYCOMPONENT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDABILITYCOMPONENT___C__CTOR_OFFSET))(this);
		}

		::System::Void _AddModifierExtraMaxLayer_b__158_0(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDABILITYCOMPONENT___C__ADDMODIFIEREXTRAMAXLAYER_B__158_0_OFFSET))(this, a1);
		}

		::System::Void _RemoveModifierExtraMaxLayer_b__159_0(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDABILITYCOMPONENT___C__REMOVEMODIFIEREXTRAMAXLAYER_B__159_0_OFFSET))(this, a1);
		}
	};
}
