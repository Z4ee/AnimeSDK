#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIEREQUIPUPGRADEBEFOREBATTLECONFIG_METHOD_3_31256A1571DA5F96_OFFSET UNITYSDK_OFFSET(0x197F1620)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREQUIPUPGRADEBEFOREBATTLECONFIG_METHOD_3_4B64C6F62DFF4ECF_OFFSET UNITYSDK_OFFSET(0x197EB690)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREQUIPUPGRADEBEFOREBATTLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x197EB640)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierEquipUpgradeBeforeBattleConfig_TypeDefinitionIndex = 18460;

	class GridFightModifierEquipUpgradeBeforeBattleConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREQUIPUPGRADEBEFOREBATTLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_31256A1571DA5F96(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierEquipUpgradeBeforeBattleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierEquipUpgradeBeforeBattleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREQUIPUPGRADEBEFOREBATTLECONFIG_METHOD_3_31256A1571DA5F96_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4B64C6F62DFF4ECF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierEquipUpgradeBeforeBattleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierEquipUpgradeBeforeBattleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREQUIPUPGRADEBEFOREBATTLECONFIG_METHOD_3_4B64C6F62DFF4ECF_OFFSET))(a1, a2);
		}
	};
}
