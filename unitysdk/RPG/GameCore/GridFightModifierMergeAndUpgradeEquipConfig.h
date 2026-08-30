#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERMERGEANDUPGRADEEQUIPCONFIG_METHOD_3_8357A8FF2CAF2FAB_OFFSET UNITYSDK_OFFSET(0x1D15A0B0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERMERGEANDUPGRADEEQUIPCONFIG_METHOD_3_ABE77358871980AF_OFFSET UNITYSDK_OFFSET(0x1D15A100)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERMERGEANDUPGRADEEQUIPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D15A0F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierMergeAndUpgradeEquipConfig_TypeDefinitionIndex = 19202;

	class GridFightModifierMergeAndUpgradeEquipConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERMERGEANDUPGRADEEQUIPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8357A8FF2CAF2FAB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierMergeAndUpgradeEquipConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierMergeAndUpgradeEquipConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERMERGEANDUPGRADEEQUIPCONFIG_METHOD_3_8357A8FF2CAF2FAB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_ABE77358871980AF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierMergeAndUpgradeEquipConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierMergeAndUpgradeEquipConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERMERGEANDUPGRADEEQUIPCONFIG_METHOD_3_ABE77358871980AF_OFFSET))(a1, a2);
		}
	};
}
