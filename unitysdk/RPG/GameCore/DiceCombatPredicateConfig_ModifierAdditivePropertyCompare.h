#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatAdditivePropertyType.h"
#include "unitysdk/RPG/GameCore/DiceCombatPredicateConfig.h"
#include "unitysdk/RPG/GameCore/DiceCombatValueCompare.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_MODIFIERADDITIVEPROPERTYCOMPARE_METHOD_4_3824D7D4B2389D2B_OFFSET UNITYSDK_OFFSET(0x17165FF0)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_MODIFIERADDITIVEPROPERTYCOMPARE_METHOD_4_7A5E65F7BF5CFFA9_OFFSET UNITYSDK_OFFSET(0x171674A0)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_MODIFIERADDITIVEPROPERTYCOMPARE__CTOR_OFFSET UNITYSDK_OFFSET(0x17165FA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPredicateConfig_ModifierAdditivePropertyCompare_TypeDefinitionIndex = 14775;

	class DiceCombatPredicateConfig_ModifierAdditivePropertyCompare : public ::RPG::GameCore::DiceCombatPredicateConfig
	{
	public:
		::RPG::GameCore::DiceCombatAdditivePropertyType AdditiveProperty; // 0x20
		::RPG::GameCore::DiceCombatValueCompare Logic; // 0x24
		::RPG::GameCore::DynamicFloat* Value; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_MODIFIERADDITIVEPROPERTYCOMPARE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_7A5E65F7BF5CFFA9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_ModifierAdditivePropertyCompare*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_ModifierAdditivePropertyCompare*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_MODIFIERADDITIVEPROPERTYCOMPARE_METHOD_4_7A5E65F7BF5CFFA9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3824D7D4B2389D2B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_ModifierAdditivePropertyCompare* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_ModifierAdditivePropertyCompare*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_MODIFIERADDITIVEPROPERTYCOMPARE_METHOD_4_3824D7D4B2389D2B_OFFSET))(a1, a2);
		}
	};
}
