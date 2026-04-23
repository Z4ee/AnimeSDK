#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERDICEUPGRADE_METHOD_3_797DE8ABA062A3AA_OFFSET UNITYSDK_OFFSET(0x18879900)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERDICEUPGRADE_METHOD_3_DAB5CD1770683181_OFFSET UNITYSDK_OFFSET(0x1887D4D0)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERDICEUPGRADE__CTOR_OFFSET UNITYSDK_OFFSET(0x188798B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_TriggerDiceUpgrade_TypeDefinitionIndex = 15224;

	class DiceCombatTaskConfig_TriggerDiceUpgrade : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget Target; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERDICEUPGRADE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DAB5CD1770683181(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_TriggerDiceUpgrade*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_TriggerDiceUpgrade*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERDICEUPGRADE_METHOD_3_DAB5CD1770683181_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_797DE8ABA062A3AA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_TriggerDiceUpgrade* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_TriggerDiceUpgrade*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERDICEUPGRADE_METHOD_3_797DE8ABA062A3AA_OFFSET))(a1, a2);
		}
	};
}
