#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDBATTLEMONSTERCONFIG_METHOD_3_79684773B0F7069B_OFFSET UNITYSDK_OFFSET(0x1EE6BF70)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDBATTLEMONSTERCONFIG_METHOD_3_9FB32B9523E9C81F_OFFSET UNITYSDK_OFFSET(0x1EE6BFC0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDBATTLEMONSTERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE6BFB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAddBattleMonsterConfig_TypeDefinitionIndex = 19171;

	class GridFightModifierAddBattleMonsterConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDBATTLEMONSTERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_79684773B0F7069B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAddBattleMonsterConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAddBattleMonsterConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDBATTLEMONSTERCONFIG_METHOD_3_79684773B0F7069B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9FB32B9523E9C81F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAddBattleMonsterConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAddBattleMonsterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDBATTLEMONSTERCONFIG_METHOD_3_9FB32B9523E9C81F_OFFSET))(a1, a2);
		}
	};
}
