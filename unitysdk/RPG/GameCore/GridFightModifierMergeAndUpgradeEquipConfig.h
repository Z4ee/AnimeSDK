#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERMERGEANDUPGRADEEQUIPCONFIG_METHOD_3_8679C7EB9C11DDF6_OFFSET UNITYSDK_OFFSET(0x1726B640)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERMERGEANDUPGRADEEQUIPCONFIG_METHOD_3_ABE77358871980AF_OFFSET UNITYSDK_OFFSET(0x172681A0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERMERGEANDUPGRADEEQUIPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17268150)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierMergeAndUpgradeEquipConfig_TypeDefinitionIndex = 17835;

	class GridFightModifierMergeAndUpgradeEquipConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERMERGEANDUPGRADEEQUIPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8679C7EB9C11DDF6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierMergeAndUpgradeEquipConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierMergeAndUpgradeEquipConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERMERGEANDUPGRADEEQUIPCONFIG_METHOD_3_8679C7EB9C11DDF6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_ABE77358871980AF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierMergeAndUpgradeEquipConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierMergeAndUpgradeEquipConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERMERGEANDUPGRADEEQUIPCONFIG_METHOD_3_ABE77358871980AF_OFFSET))(a1, a2);
		}
	};
}
