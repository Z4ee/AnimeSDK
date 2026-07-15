#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GridFightDragOpEquipSelector; }
namespace RPG::GameCore { class GridFightDragOpRoleSelector; }

#define RPG_GAMECORE_GRIDFIGHTWAITDRAGEQUIP_METHOD_3_1AEA5F294596E65B_OFFSET UNITYSDK_OFFSET(0x1D07EE50)
#define RPG_GAMECORE_GRIDFIGHTWAITDRAGEQUIP_METHOD_3_20AE246A6B389530_OFFSET UNITYSDK_OFFSET(0x1D07EE10)
#define RPG_GAMECORE_GRIDFIGHTWAITDRAGEQUIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1D07EE40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightWaitDragEquip_TypeDefinitionIndex = 19190;

	class GridFightWaitDragEquip : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::GridFightDragOpEquipSelector* Equip; // 0x18
		::RPG::GameCore::GridFightDragOpRoleSelector* TargetRole; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTWAITDRAGEQUIP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_20AE246A6B389530(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightWaitDragEquip*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightWaitDragEquip*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTWAITDRAGEQUIP_METHOD_3_20AE246A6B389530_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1AEA5F294596E65B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightWaitDragEquip* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightWaitDragEquip*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTWAITDRAGEQUIP_METHOD_3_1AEA5F294596E65B_OFFSET))(a1, a2);
		}
	};
}
