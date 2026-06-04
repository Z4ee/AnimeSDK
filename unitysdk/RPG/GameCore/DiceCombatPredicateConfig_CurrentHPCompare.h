#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatPredicateConfig.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"
#include "unitysdk/RPG/GameCore/DiceCombatValueCompare.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_CURRENTHPCOMPARE_METHOD_4_5CC23F3E8BB7A426_OFFSET UNITYSDK_OFFSET(0x196AE640)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_CURRENTHPCOMPARE_METHOD_4_DEC687516B81238B_OFFSET UNITYSDK_OFFSET(0x196AA650)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_CURRENTHPCOMPARE__CTOR_OFFSET UNITYSDK_OFFSET(0x196AA600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPredicateConfig_CurrentHPCompare_TypeDefinitionIndex = 15340;

	class DiceCombatPredicateConfig_CurrentHPCompare : public ::RPG::GameCore::DiceCombatPredicateConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget Target; // 0x20
		::RPG::GameCore::DiceCombatValueCompare Compare; // 0x24
		::RPG::GameCore::DynamicFloat* Value; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_CURRENTHPCOMPARE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_5CC23F3E8BB7A426(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_CurrentHPCompare*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_CurrentHPCompare*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_CURRENTHPCOMPARE_METHOD_4_5CC23F3E8BB7A426_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_DEC687516B81238B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_CurrentHPCompare* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_CurrentHPCompare*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_CURRENTHPCOMPARE_METHOD_4_DEC687516B81238B_OFFSET))(a1, a2);
		}
	};
}
