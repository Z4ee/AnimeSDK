#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { template <typename T> class Action_1; }

#define RPG_GAMECORE_TURNBASEDABILITYCOMPONENT___C__ADDMODIFIEREXTRAMAXLAYER_B__180_0_OFFSET UNITYSDK_OFFSET(0xAAAF5F0)
#define RPG_GAMECORE_TURNBASEDABILITYCOMPONENT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xAAAF5A0)
#define RPG_GAMECORE_TURNBASEDABILITYCOMPONENT___C__CTOR_OFFSET UNITYSDK_OFFSET(0xAAAF5E0)
#define RPG_GAMECORE_TURNBASEDABILITYCOMPONENT___C__REMOVEMODIFIEREXTRAMAXLAYER_B__181_0_OFFSET UNITYSDK_OFFSET(0xAAAF740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TurnBasedAbilityComponent___c_TypeDefinitionIndex = 46537;

	class TurnBasedAbilityComponent___c : public ::System::Object
	{
	public:
		static ::RPG::GameCore::TurnBasedAbilityComponent___c** StaticGet___9()
		{
			return (::RPG::GameCore::TurnBasedAbilityComponent___c**)Il2CppClass::FromTypeDefinitionIndex(TurnBasedAbilityComponent___c_TypeDefinitionIndex)->GetStaticField(0x461D0);
		}
		static ::System::Action_1<::RPG::GameCore::TurnBasedModifierInstance*>** StaticGet___9__181_0()
		{
			return (::System::Action_1<::RPG::GameCore::TurnBasedModifierInstance*>**)Il2CppClass::FromTypeDefinitionIndex(TurnBasedAbilityComponent___c_TypeDefinitionIndex)->GetStaticField(0x461D8);
		}
		static ::System::Action_1<::RPG::GameCore::TurnBasedModifierInstance*>** StaticGet___9__180_0()
		{
			return (::System::Action_1<::RPG::GameCore::TurnBasedModifierInstance*>**)Il2CppClass::FromTypeDefinitionIndex(TurnBasedAbilityComponent___c_TypeDefinitionIndex)->GetStaticField(0x461E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDABILITYCOMPONENT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDABILITYCOMPONENT___C__CTOR_OFFSET))(this);
		}

		::System::Void _AddModifierExtraMaxLayer_b__180_0(::RPG::GameCore::TurnBasedModifierInstance* pModifier)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDABILITYCOMPONENT___C__ADDMODIFIEREXTRAMAXLAYER_B__180_0_OFFSET))(this, pModifier);
		}

		::System::Void _RemoveModifierExtraMaxLayer_b__181_0(::RPG::GameCore::TurnBasedModifierInstance* pModifier)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDABILITYCOMPONENT___C__REMOVEMODIFIEREXTRAMAXLAYER_B__181_0_OFFSET))(this, pModifier);
		}
	};
}
