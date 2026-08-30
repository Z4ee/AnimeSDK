#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightDragOpParamBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTDRAGOPEQUIPSELECTOR_METHOD_3_36107C6FE94A4571_OFFSET UNITYSDK_OFFSET(0x1D965BC0)
#define RPG_GAMECORE_GRIDFIGHTDRAGOPEQUIPSELECTOR_METHOD_3_E5EBE060FA70E49D_OFFSET UNITYSDK_OFFSET(0x1D965C90)
#define RPG_GAMECORE_GRIDFIGHTDRAGOPEQUIPSELECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D965C80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightDragOpEquipSelector_TypeDefinitionIndex = 19728;

	class GridFightDragOpEquipSelector : public ::RPG::GameCore::GridFightDragOpParamBase
	{
	public:
		::System::UInt32 EuqipID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTDRAGOPEQUIPSELECTOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_36107C6FE94A4571(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightDragOpEquipSelector*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightDragOpEquipSelector*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTDRAGOPEQUIPSELECTOR_METHOD_3_36107C6FE94A4571_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E5EBE060FA70E49D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightDragOpEquipSelector* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightDragOpEquipSelector*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTDRAGOPEQUIPSELECTOR_METHOD_3_E5EBE060FA70E49D_OFFSET))(a1, a2);
		}
	};
}
