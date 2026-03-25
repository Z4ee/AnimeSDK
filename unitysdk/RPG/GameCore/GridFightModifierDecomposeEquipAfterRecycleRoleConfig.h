#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERDECOMPOSEEQUIPAFTERRECYCLEROLECONFIG_METHOD_3_5B1AE0A4D110E303_OFFSET UNITYSDK_OFFSET(0x1726A070)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERDECOMPOSEEQUIPAFTERRECYCLEROLECONFIG_METHOD_3_A0FD943351FFAA3A_OFFSET UNITYSDK_OFFSET(0x17265C00)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERDECOMPOSEEQUIPAFTERRECYCLEROLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17265BB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierDecomposeEquipAfterRecycleRoleConfig_TypeDefinitionIndex = 17828;

	class GridFightModifierDecomposeEquipAfterRecycleRoleConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERDECOMPOSEEQUIPAFTERRECYCLEROLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5B1AE0A4D110E303(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierDecomposeEquipAfterRecycleRoleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierDecomposeEquipAfterRecycleRoleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERDECOMPOSEEQUIPAFTERRECYCLEROLECONFIG_METHOD_3_5B1AE0A4D110E303_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A0FD943351FFAA3A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierDecomposeEquipAfterRecycleRoleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierDecomposeEquipAfterRecycleRoleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERDECOMPOSEEQUIPAFTERRECYCLEROLECONFIG_METHOD_3_A0FD943351FFAA3A_OFFSET))(a1, a2);
		}
	};
}
