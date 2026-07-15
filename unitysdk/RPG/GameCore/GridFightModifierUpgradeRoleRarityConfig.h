#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERUPGRADEROLERARITYCONFIG_METHOD_3_1C880226EFB34F27_OFFSET UNITYSDK_OFFSET(0x1D06B810)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERUPGRADEROLERARITYCONFIG_METHOD_3_F7471D8A8A3C58A3_OFFSET UNITYSDK_OFFSET(0x1D06B7C0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERUPGRADEROLERARITYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D06B800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierUpgradeRoleRarityConfig_TypeDefinitionIndex = 18722;

	class GridFightModifierUpgradeRoleRarityConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERUPGRADEROLERARITYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F7471D8A8A3C58A3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierUpgradeRoleRarityConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierUpgradeRoleRarityConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERUPGRADEROLERARITYCONFIG_METHOD_3_F7471D8A8A3C58A3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1C880226EFB34F27(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierUpgradeRoleRarityConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierUpgradeRoleRarityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERUPGRADEROLERARITYCONFIG_METHOD_3_1C880226EFB34F27_OFFSET))(a1, a2);
		}
	};
}
