#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DiceCombatInsertAbilityConfig; }
namespace RPG::GameCore { class DiceCombatModifierConfig; }

#define RPG_GAMECORE_DICECOMBATGLOBALMODIFIERS_METHOD_2_1B15E6170009BECF_OFFSET UNITYSDK_OFFSET(0x17160990)
#define RPG_GAMECORE_DICECOMBATGLOBALMODIFIERS__CTOR_OFFSET UNITYSDK_OFFSET(0x17160B00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatGlobalModifiers_TypeDefinitionIndex = 14837;

	class DiceCombatGlobalModifiers : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::DiceCombatInsertAbilityConfig*>* Abilities; // 0x10
		::Il2CppArray<::RPG::GameCore::DiceCombatModifierConfig*>* Modifiers; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATGLOBALMODIFIERS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_1B15E6170009BECF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatGlobalModifiers*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatGlobalModifiers*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATGLOBALMODIFIERS_METHOD_2_1B15E6170009BECF_OFFSET))(a1, a2);
		}
	};
}
