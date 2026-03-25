#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_BOSSCHANGEPHASE_METHOD_3_324F58B889D29C43_OFFSET UNITYSDK_OFFSET(0x1716BEA0)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_BOSSCHANGEPHASE_METHOD_3_5F771EA334D02B2C_OFFSET UNITYSDK_OFFSET(0x171704D0)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_BOSSCHANGEPHASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1716BE50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_BossChangePhase_TypeDefinitionIndex = 14765;

	class DiceCombatTaskConfig_BossChangePhase : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_BOSSCHANGEPHASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5F771EA334D02B2C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_BossChangePhase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_BossChangePhase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_BOSSCHANGEPHASE_METHOD_3_5F771EA334D02B2C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_324F58B889D29C43(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_BossChangePhase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_BossChangePhase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_BOSSCHANGEPHASE_METHOD_3_324F58B889D29C43_OFFSET))(a1, a2);
		}
	};
}
