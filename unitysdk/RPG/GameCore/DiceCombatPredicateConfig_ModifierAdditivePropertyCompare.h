#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatAdditivePropertyType.h"
#include "unitysdk/RPG/GameCore/DiceCombatPredicateConfig.h"
#include "unitysdk/RPG/GameCore/DiceCombatValueCompare.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_MODIFIERADDITIVEPROPERTYCOMPARE_METHOD_4_D791F9D29A3E9400_OFFSET UNITYSDK_OFFSET(0x1C116930)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_MODIFIERADDITIVEPROPERTYCOMPARE_METHOD_4_DF2635F350763040_OFFSET UNITYSDK_OFFSET(0x1C1158A0)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_MODIFIERADDITIVEPROPERTYCOMPARE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C115890)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPredicateConfig_ModifierAdditivePropertyCompare_TypeDefinitionIndex = 15480;

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

		static ::System::Void Method_4_D791F9D29A3E9400(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_ModifierAdditivePropertyCompare*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_ModifierAdditivePropertyCompare*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_MODIFIERADDITIVEPROPERTYCOMPARE_METHOD_4_D791F9D29A3E9400_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_DF2635F350763040(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_ModifierAdditivePropertyCompare* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_ModifierAdditivePropertyCompare*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_MODIFIERADDITIVEPROPERTYCOMPARE_METHOD_4_DF2635F350763040_OFFSET))(a1, a2);
		}
	};
}
