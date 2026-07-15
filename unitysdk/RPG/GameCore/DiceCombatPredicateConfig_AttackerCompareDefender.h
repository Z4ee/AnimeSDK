#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatPredicateConfig.h"
#include "unitysdk/RPG/GameCore/DiceCombatValueCompare.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ATTACKERCOMPAREDEFENDER_METHOD_4_31ABDD56A5992356_OFFSET UNITYSDK_OFFSET(0x1C112590)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ATTACKERCOMPAREDEFENDER_METHOD_4_CA2213C8D799751F_OFFSET UNITYSDK_OFFSET(0x1C1160C0)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ATTACKERCOMPAREDEFENDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C112580)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPredicateConfig_AttackerCompareDefender_TypeDefinitionIndex = 15507;

	class DiceCombatPredicateConfig_AttackerCompareDefender : public ::RPG::GameCore::DiceCombatPredicateConfig
	{
	public:
		::RPG::GameCore::DiceCombatValueCompare Compare; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ATTACKERCOMPAREDEFENDER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_CA2213C8D799751F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_AttackerCompareDefender*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_AttackerCompareDefender*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ATTACKERCOMPAREDEFENDER_METHOD_4_CA2213C8D799751F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_31ABDD56A5992356(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_AttackerCompareDefender* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_AttackerCompareDefender*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ATTACKERCOMPAREDEFENDER_METHOD_4_31ABDD56A5992356_OFFSET))(a1, a2);
		}
	};
}
