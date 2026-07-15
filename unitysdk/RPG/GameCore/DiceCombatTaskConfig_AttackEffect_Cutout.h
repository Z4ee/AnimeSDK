#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_ATTACKEFFECT_CUTOUT_METHOD_3_880E6B95B1387A7C_OFFSET UNITYSDK_OFFSET(0x1C117FA0)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_ATTACKEFFECT_CUTOUT_METHOD_3_E773E58F074B8D51_OFFSET UNITYSDK_OFFSET(0x1C118040)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_ATTACKEFFECT_CUTOUT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C118030)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_AttackEffect_Cutout_TypeDefinitionIndex = 15443;

	class DiceCombatTaskConfig_AttackEffect_Cutout : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_ATTACKEFFECT_CUTOUT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_880E6B95B1387A7C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_AttackEffect_Cutout*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_AttackEffect_Cutout*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_ATTACKEFFECT_CUTOUT_METHOD_3_880E6B95B1387A7C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E773E58F074B8D51(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_AttackEffect_Cutout* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_AttackEffect_Cutout*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_ATTACKEFFECT_CUTOUT_METHOD_3_E773E58F074B8D51_OFFSET))(a1, a2);
		}
	};
}
