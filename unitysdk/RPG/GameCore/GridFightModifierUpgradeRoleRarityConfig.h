#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERUPGRADEROLERARITYCONFIG_METHOD_3_1C880226EFB34F27_OFFSET UNITYSDK_OFFSET(0x197F4D80)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERUPGRADEROLERARITYCONFIG_METHOD_3_56738BACB782E5AE_OFFSET UNITYSDK_OFFSET(0x197F4CB0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERUPGRADEROLERARITYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x197F4D30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierUpgradeRoleRarityConfig_TypeDefinitionIndex = 18472;

	class GridFightModifierUpgradeRoleRarityConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERUPGRADEROLERARITYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_56738BACB782E5AE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierUpgradeRoleRarityConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierUpgradeRoleRarityConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERUPGRADEROLERARITYCONFIG_METHOD_3_56738BACB782E5AE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1C880226EFB34F27(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierUpgradeRoleRarityConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierUpgradeRoleRarityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERUPGRADEROLERARITYCONFIG_METHOD_3_1C880226EFB34F27_OFFSET))(a1, a2);
		}
	};
}
