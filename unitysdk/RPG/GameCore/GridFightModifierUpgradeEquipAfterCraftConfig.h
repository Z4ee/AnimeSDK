#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERUPGRADEEQUIPAFTERCRAFTCONFIG_METHOD_3_E2CC398CCF16807E_OFFSET UNITYSDK_OFFSET(0x1EE6F6E0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERUPGRADEEQUIPAFTERCRAFTCONFIG_METHOD_3_E9D40F776D5D143A_OFFSET UNITYSDK_OFFSET(0x1EE6F730)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERUPGRADEEQUIPAFTERCRAFTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE6F720)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierUpgradeEquipAfterCraftConfig_TypeDefinitionIndex = 19167;

	class GridFightModifierUpgradeEquipAfterCraftConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERUPGRADEEQUIPAFTERCRAFTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E2CC398CCF16807E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierUpgradeEquipAfterCraftConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierUpgradeEquipAfterCraftConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERUPGRADEEQUIPAFTERCRAFTCONFIG_METHOD_3_E2CC398CCF16807E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E9D40F776D5D143A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierUpgradeEquipAfterCraftConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierUpgradeEquipAfterCraftConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERUPGRADEEQUIPAFTERCRAFTCONFIG_METHOD_3_E9D40F776D5D143A_OFFSET))(a1, a2);
		}
	};
}
