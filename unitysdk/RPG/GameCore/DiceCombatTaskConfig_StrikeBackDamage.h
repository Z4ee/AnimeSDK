#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DiceCombatAttackConfig; }

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_STRIKEBACKDAMAGE_METHOD_3_43B981B7F31C2E21_OFFSET UNITYSDK_OFFSET(0x1887D1D0)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_STRIKEBACKDAMAGE_METHOD_3_B4568984BFC4DF08_OFFSET UNITYSDK_OFFSET(0x18879220)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_STRIKEBACKDAMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x188791D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_StrikeBackDamage_TypeDefinitionIndex = 15217;

	class DiceCombatTaskConfig_StrikeBackDamage : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget Target; // 0x10
		::RPG::GameCore::DiceCombatAttackConfig* AttackConfig; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_STRIKEBACKDAMAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_43B981B7F31C2E21(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_StrikeBackDamage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_StrikeBackDamage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_STRIKEBACKDAMAGE_METHOD_3_43B981B7F31C2E21_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B4568984BFC4DF08(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_StrikeBackDamage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_StrikeBackDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_STRIKEBACKDAMAGE_METHOD_3_B4568984BFC4DF08_OFFSET))(a1, a2);
		}
	};
}
