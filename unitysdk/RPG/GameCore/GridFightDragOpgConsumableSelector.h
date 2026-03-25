#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightDragOpParamBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTDRAGOPGCONSUMABLESELECTOR_METHOD_3_C5BCBAE1CD2436B7_OFFSET UNITYSDK_OFFSET(0x17259160)
#define RPG_GAMECORE_GRIDFIGHTDRAGOPGCONSUMABLESELECTOR_METHOD_3_F4F7405CC63BE4BB_OFFSET UNITYSDK_OFFSET(0x172592A0)
#define RPG_GAMECORE_GRIDFIGHTDRAGOPGCONSUMABLESELECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x17259150)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightDragOpgConsumableSelector_TypeDefinitionIndex = 18229;

	class GridFightDragOpgConsumableSelector : public ::RPG::GameCore::GridFightDragOpParamBase
	{
	public:
		::System::UInt32 ConsumableID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTDRAGOPGCONSUMABLESELECTOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F4F7405CC63BE4BB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightDragOpgConsumableSelector*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightDragOpgConsumableSelector*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTDRAGOPGCONSUMABLESELECTOR_METHOD_3_F4F7405CC63BE4BB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C5BCBAE1CD2436B7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightDragOpgConsumableSelector* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightDragOpgConsumableSelector*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTDRAGOPGCONSUMABLESELECTOR_METHOD_3_C5BCBAE1CD2436B7_OFFSET))(a1, a2);
		}
	};
}
