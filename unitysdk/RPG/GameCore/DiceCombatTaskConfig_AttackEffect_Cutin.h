#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_ATTACKEFFECT_CUTIN_METHOD_3_6F9DC9B909719923_OFFSET UNITYSDK_OFFSET(0x1D034B00)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_ATTACKEFFECT_CUTIN_METHOD_3_B46AAAF70C6E31A2_OFFSET UNITYSDK_OFFSET(0x1D034BA0)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_ATTACKEFFECT_CUTIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1D034B90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_AttackEffect_Cutin_TypeDefinitionIndex = 15864;

	class DiceCombatTaskConfig_AttackEffect_Cutin : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_ATTACKEFFECT_CUTIN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6F9DC9B909719923(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_AttackEffect_Cutin*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_AttackEffect_Cutin*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_ATTACKEFFECT_CUTIN_METHOD_3_6F9DC9B909719923_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B46AAAF70C6E31A2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_AttackEffect_Cutin* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_AttackEffect_Cutin*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_ATTACKEFFECT_CUTIN_METHOD_3_B46AAAF70C6E31A2_OFFSET))(a1, a2);
		}
	};
}
