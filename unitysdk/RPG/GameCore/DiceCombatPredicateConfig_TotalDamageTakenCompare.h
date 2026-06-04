#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatPredicateConfig.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"
#include "unitysdk/RPG/GameCore/DiceCombatValueCompare.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_TOTALDAMAGETAKENCOMPARE_METHOD_4_A907AF9C2A7BE06B_OFFSET UNITYSDK_OFFSET(0x196AF4F0)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_TOTALDAMAGETAKENCOMPARE_METHOD_4_BAFAFE0E4B5AE26E_OFFSET UNITYSDK_OFFSET(0x196AE090)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_TOTALDAMAGETAKENCOMPARE__CTOR_OFFSET UNITYSDK_OFFSET(0x196AE040)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPredicateConfig_TotalDamageTakenCompare_TypeDefinitionIndex = 15342;

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

		static ::System::Void Method_4_A907AF9C2A7BE06B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_TotalDamageTakenCompare*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_TotalDamageTakenCompare*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_TOTALDAMAGETAKENCOMPARE_METHOD_4_A907AF9C2A7BE06B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BAFAFE0E4B5AE26E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_TotalDamageTakenCompare* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_TotalDamageTakenCompare*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_TOTALDAMAGETAKENCOMPARE_METHOD_4_BAFAFE0E4B5AE26E_OFFSET))(a1, a2);
		}
	};
}
