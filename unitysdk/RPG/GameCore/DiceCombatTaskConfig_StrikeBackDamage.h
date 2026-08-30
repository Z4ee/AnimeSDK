#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DiceCombatAttackConfig; }

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_STRIKEBACKDAMAGE_METHOD_3_A0895AC58997B076_OFFSET UNITYSDK_OFFSET(0x1DB072F0)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_STRIKEBACKDAMAGE_METHOD_3_B4568984BFC4DF08_OFFSET UNITYSDK_OFFSET(0x1DB07350)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_STRIKEBACKDAMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB07340)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_StrikeBackDamage_TypeDefinitionIndex = 15878;

	class DiceCombatTaskConfig_StrikeBackDamage : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget Target; // 0x10
		::RPG::GameCore::DiceCombatAttackConfig* AttackConfig; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_STRIKEBACKDAMAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A0895AC58997B076(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_StrikeBackDamage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_StrikeBackDamage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_STRIKEBACKDAMAGE_METHOD_3_A0895AC58997B076_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B4568984BFC4DF08(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_StrikeBackDamage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_StrikeBackDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_STRIKEBACKDAMAGE_METHOD_3_B4568984BFC4DF08_OFFSET))(a1, a2);
		}
	};
}
