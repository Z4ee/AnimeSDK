#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GridFightDragOpEquipSelector; }
namespace RPG::GameCore { class GridFightDragOpRoleSelector; }
namespace RPG::GameCore { class GridFightDragOpgConsumableSelector; }

#define RPG_GAMECORE_GRIDFIGHTWAITDRAGCONSUMABLE_METHOD_3_AE0D6320120CA57B_OFFSET UNITYSDK_OFFSET(0x189DF110)
#define RPG_GAMECORE_GRIDFIGHTWAITDRAGCONSUMABLE_METHOD_3_DAB03EB361ACDF14_OFFSET UNITYSDK_OFFSET(0x189DF190)
#define RPG_GAMECORE_GRIDFIGHTWAITDRAGCONSUMABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x189DF160)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightWaitDragConsumable_TypeDefinitionIndex = 18879;

	class GridFightWaitDragConsumable : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::GridFightDragOpgConsumableSelector* Consumable; // 0x18
		::RPG::GameCore::GridFightDragOpRoleSelector* TargetRole; // 0x20
		::RPG::GameCore::GridFightDragOpEquipSelector* TargetEquip; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTWAITDRAGCONSUMABLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_AE0D6320120CA57B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightWaitDragConsumable*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightWaitDragConsumable*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTWAITDRAGCONSUMABLE_METHOD_3_AE0D6320120CA57B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DAB03EB361ACDF14(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightWaitDragConsumable* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightWaitDragConsumable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTWAITDRAGCONSUMABLE_METHOD_3_DAB03EB361ACDF14_OFFSET))(a1, a2);
		}
	};
}
