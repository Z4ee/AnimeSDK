#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { template <typename T> class Action_1; }

#define RPG_GAMECORE_TURNBASEDABILITYCOMPONENT___C__ADDMODIFIEREXTRAMAXLAYER_B__181_0_OFFSET UNITYSDK_OFFSET(0xB81AAB0)
#define RPG_GAMECORE_TURNBASEDABILITYCOMPONENT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB81AA60)
#define RPG_GAMECORE_TURNBASEDABILITYCOMPONENT___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB81AAA0)
#define RPG_GAMECORE_TURNBASEDABILITYCOMPONENT___C__REMOVEMODIFIEREXTRAMAXLAYER_B__182_0_OFFSET UNITYSDK_OFFSET(0xB81AAC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TurnBasedAbilityComponent___c_TypeDefinitionIndex = 53227;

	class TurnBasedAbilityComponent___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::RPG::GameCore::TurnBasedModifierInstance*>** StaticGet___9__182_0()
		{
			return (::System::Action_1<::RPG::GameCore::TurnBasedModifierInstance*>**)Il2CppClass::FromTypeDefinitionIndex(TurnBasedAbilityComponent___c_TypeDefinitionIndex)->GetStaticField(0x62A80);
		}
		static ::RPG::GameCore::TurnBasedAbilityComponent___c** StaticGet___9()
		{
			return (::RPG::GameCore::TurnBasedAbilityComponent___c**)Il2CppClass::FromTypeDefinitionIndex(TurnBasedAbilityComponent___c_TypeDefinitionIndex)->GetStaticField(0x62A88);
		}
		static ::System::Action_1<::RPG::GameCore::TurnBasedModifierInstance*>** StaticGet___9__181_0()
		{
			return (::System::Action_1<::RPG::GameCore::TurnBasedModifierInstance*>**)Il2CppClass::FromTypeDefinitionIndex(TurnBasedAbilityComponent___c_TypeDefinitionIndex)->GetStaticField(0x62A90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDABILITYCOMPONENT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDABILITYCOMPONENT___C__CTOR_OFFSET))(this);
		}

		::System::Void _AddModifierExtraMaxLayer_b__181_0(::RPG::GameCore::TurnBasedModifierInstance* pModifier)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDABILITYCOMPONENT___C__ADDMODIFIEREXTRAMAXLAYER_B__181_0_OFFSET))(this, pModifier);
		}

		::System::Void _RemoveModifierExtraMaxLayer_b__182_0(::RPG::GameCore::TurnBasedModifierInstance* pModifier)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDABILITYCOMPONENT___C__REMOVEMODIFIEREXTRAMAXLAYER_B__182_0_OFFSET))(this, pModifier);
		}
	};
}
