#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTACTIONUPGRADEROLERARITYCONFIG_METHOD_6_5DD1B06529FDA721_OFFSET UNITYSDK_OFFSET(0x1D14A520)
#define RPG_GAMECORE_GRIDFIGHTACTIONUPGRADEROLERARITYCONFIG_METHOD_6_8345D30E76545885_OFFSET UNITYSDK_OFFSET(0x1D14A040)
#define RPG_GAMECORE_GRIDFIGHTACTIONUPGRADEROLERARITYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D14A030)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionUpgradeRoleRarityConfig_TypeDefinitionIndex = 19083;

	class GridFightActionUpgradeRoleRarityConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONUPGRADEROLERARITYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_5DD1B06529FDA721(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionUpgradeRoleRarityConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionUpgradeRoleRarityConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONUPGRADEROLERARITYCONFIG_METHOD_6_5DD1B06529FDA721_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_8345D30E76545885(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionUpgradeRoleRarityConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionUpgradeRoleRarityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONUPGRADEROLERARITYCONFIG_METHOD_6_8345D30E76545885_OFFSET))(a1, a2);
		}
	};
}
