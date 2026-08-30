#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DiceCombatAttackConfig; }

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_ATTACKDAMAGE_METHOD_3_3C8C7FC597D5EB8B_OFFSET UNITYSDK_OFFSET(0x1DB04800)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_ATTACKDAMAGE_METHOD_3_6B63F2AEB0090AFF_OFFSET UNITYSDK_OFFSET(0x1DB048D0)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_ATTACKDAMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB048C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_AttackDamage_TypeDefinitionIndex = 15875;

	class DiceCombatTaskConfig_AttackDamage : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::RPG::GameCore::DiceCombatAttackConfig* AttackConfig; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_ATTACKDAMAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3C8C7FC597D5EB8B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_AttackDamage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_AttackDamage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_ATTACKDAMAGE_METHOD_3_3C8C7FC597D5EB8B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6B63F2AEB0090AFF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_AttackDamage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_AttackDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_ATTACKDAMAGE_METHOD_3_6B63F2AEB0090AFF_OFFSET))(a1, a2);
		}
	};
}
