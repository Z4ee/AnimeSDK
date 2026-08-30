#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERUPGRADEEQUIPCONFIG_METHOD_3_7499F320B2A61B06_OFFSET UNITYSDK_OFFSET(0x1EE6F740)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERUPGRADEEQUIPCONFIG_METHOD_3_ACE8B3F1DCDE87A2_OFFSET UNITYSDK_OFFSET(0x1EE6F790)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERUPGRADEEQUIPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE6F780)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierUpgradeEquipConfig_TypeDefinitionIndex = 19200;

	class GridFightModifierUpgradeEquipConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERUPGRADEEQUIPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7499F320B2A61B06(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierUpgradeEquipConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierUpgradeEquipConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERUPGRADEEQUIPCONFIG_METHOD_3_7499F320B2A61B06_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_ACE8B3F1DCDE87A2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierUpgradeEquipConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierUpgradeEquipConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERUPGRADEEQUIPCONFIG_METHOD_3_ACE8B3F1DCDE87A2_OFFSET))(a1, a2);
		}
	};
}
