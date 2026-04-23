#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatPredicateConfig.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"
#include "unitysdk/RPG/GameCore/DiceCombatValueCompare.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_TOTALDAMAGETAKENCOMPARE_METHOD_4_76D96167B5009CE9_OFFSET UNITYSDK_OFFSET(0x1886F2B0)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_TOTALDAMAGETAKENCOMPARE_METHOD_4_AF1A34E71384D60F_OFFSET UNITYSDK_OFFSET(0x18870710)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_TOTALDAMAGETAKENCOMPARE__CTOR_OFFSET UNITYSDK_OFFSET(0x1886F260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPredicateConfig_TotalDamageTakenCompare_TypeDefinitionIndex = 15283;

	class DiceCombatPredicateConfig_TotalDamageTakenCompare : public ::RPG::GameCore::DiceCombatPredicateConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget Target; // 0x20
		::RPG::GameCore::DiceCombatValueCompare Compare; // 0x24
		::RPG::GameCore::DynamicFloat* Value; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_TOTALDAMAGETAKENCOMPARE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_AF1A34E71384D60F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_TotalDamageTakenCompare*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_TotalDamageTakenCompare*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_TOTALDAMAGETAKENCOMPARE_METHOD_4_AF1A34E71384D60F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_76D96167B5009CE9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_TotalDamageTakenCompare* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_TotalDamageTakenCompare*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_TOTALDAMAGETAKENCOMPARE_METHOD_4_76D96167B5009CE9_OFFSET))(a1, a2);
		}
	};
}
