#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERREPLACESUPPLYMAXEQUIPNUMCONFIG_METHOD_3_8209DA4C3636F179_OFFSET UNITYSDK_OFFSET(0x1D06A9E0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERREPLACESUPPLYMAXEQUIPNUMCONFIG_METHOD_3_D25F6FBAD0612BBD_OFFSET UNITYSDK_OFFSET(0x1D06AA30)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERREPLACESUPPLYMAXEQUIPNUMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D06AA20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierReplaceSupplyMaxEquipNumConfig_TypeDefinitionIndex = 18681;

	class GridFightModifierReplaceSupplyMaxEquipNumConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERREPLACESUPPLYMAXEQUIPNUMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8209DA4C3636F179(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierReplaceSupplyMaxEquipNumConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierReplaceSupplyMaxEquipNumConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERREPLACESUPPLYMAXEQUIPNUMCONFIG_METHOD_3_8209DA4C3636F179_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D25F6FBAD0612BBD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierReplaceSupplyMaxEquipNumConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierReplaceSupplyMaxEquipNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERREPLACESUPPLYMAXEQUIPNUMCONFIG_METHOD_3_D25F6FBAD0612BBD_OFFSET))(a1, a2);
		}
	};
}
