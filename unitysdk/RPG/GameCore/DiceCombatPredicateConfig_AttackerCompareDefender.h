#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatPredicateConfig.h"
#include "unitysdk/RPG/GameCore/DiceCombatValueCompare.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ATTACKERCOMPAREDEFENDER_METHOD_4_B6B68D30C5219CBC_OFFSET UNITYSDK_OFFSET(0x17163140)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ATTACKERCOMPAREDEFENDER_METHOD_4_F1F11E97F3CD50FA_OFFSET UNITYSDK_OFFSET(0x17166910)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ATTACKERCOMPAREDEFENDER__CTOR_OFFSET UNITYSDK_OFFSET(0x171630F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPredicateConfig_AttackerCompareDefender_TypeDefinitionIndex = 14798;

	class DiceCombatPredicateConfig_AttackerCompareDefender : public ::RPG::GameCore::DiceCombatPredicateConfig
	{
	public:
		::RPG::GameCore::DiceCombatValueCompare Compare; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ATTACKERCOMPAREDEFENDER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_F1F11E97F3CD50FA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_AttackerCompareDefender*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_AttackerCompareDefender*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ATTACKERCOMPAREDEFENDER_METHOD_4_F1F11E97F3CD50FA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B6B68D30C5219CBC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_AttackerCompareDefender* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_AttackerCompareDefender*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ATTACKERCOMPAREDEFENDER_METHOD_4_B6B68D30C5219CBC_OFFSET))(a1, a2);
		}
	};
}
