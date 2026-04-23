#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDBATTLEMONSTERCONFIG_METHOD_3_973585D03D4EB9A6_OFFSET UNITYSDK_OFFSET(0x189B02E0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDBATTLEMONSTERCONFIG_METHOD_3_9FB32B9523E9C81F_OFFSET UNITYSDK_OFFSET(0x189B03B0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDBATTLEMONSTERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x189B0360)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAddBattleMonsterConfig_TypeDefinitionIndex = 18426;

	class GridFightModifierAddBattleMonsterConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDBATTLEMONSTERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_973585D03D4EB9A6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAddBattleMonsterConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAddBattleMonsterConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDBATTLEMONSTERCONFIG_METHOD_3_973585D03D4EB9A6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9FB32B9523E9C81F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAddBattleMonsterConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAddBattleMonsterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDBATTLEMONSTERCONFIG_METHOD_3_9FB32B9523E9C81F_OFFSET))(a1, a2);
		}
	};
}
