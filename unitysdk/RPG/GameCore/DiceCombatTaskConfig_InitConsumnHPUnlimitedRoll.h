#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_INITCONSUMNHPUNLIMITEDROLL_METHOD_3_68A5FAE4BA36052A_OFFSET UNITYSDK_OFFSET(0x1887C2E0)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_INITCONSUMNHPUNLIMITEDROLL_METHOD_3_F365269EB204F283_OFFSET UNITYSDK_OFFSET(0x18876E80)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_INITCONSUMNHPUNLIMITEDROLL__CTOR_OFFSET UNITYSDK_OFFSET(0x18876DE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_InitConsumnHPUnlimitedRoll_TypeDefinitionIndex = 15221;

	class DiceCombatTaskConfig_InitConsumnHPUnlimitedRoll : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* ConsumeHP; // 0x10
		::RPG::GameCore::DynamicFloat* ConsumeHPReRollCountLimitPerTurn; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_INITCONSUMNHPUNLIMITEDROLL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_68A5FAE4BA36052A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_InitConsumnHPUnlimitedRoll*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_InitConsumnHPUnlimitedRoll*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_INITCONSUMNHPUNLIMITEDROLL_METHOD_3_68A5FAE4BA36052A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F365269EB204F283(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_InitConsumnHPUnlimitedRoll* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_InitConsumnHPUnlimitedRoll*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_INITCONSUMNHPUNLIMITEDROLL_METHOD_3_F365269EB204F283_OFFSET))(a1, a2);
		}
	};
}
