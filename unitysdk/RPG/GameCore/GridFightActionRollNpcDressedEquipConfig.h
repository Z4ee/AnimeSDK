#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTACTIONROLLNPCDRESSEDEQUIPCONFIG_METHOD_6_1452E3AAB6AA8E12_OFFSET UNITYSDK_OFFSET(0x1D149F40)
#define RPG_GAMECORE_GRIDFIGHTACTIONROLLNPCDRESSEDEQUIPCONFIG_METHOD_6_DAB7E5A7839347B6_OFFSET UNITYSDK_OFFSET(0x1D14A320)
#define RPG_GAMECORE_GRIDFIGHTACTIONROLLNPCDRESSEDEQUIPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D149F30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionRollNpcDressedEquipConfig_TypeDefinitionIndex = 19087;

	class GridFightActionRollNpcDressedEquipConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONROLLNPCDRESSEDEQUIPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_DAB7E5A7839347B6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionRollNpcDressedEquipConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionRollNpcDressedEquipConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONROLLNPCDRESSEDEQUIPCONFIG_METHOD_6_DAB7E5A7839347B6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_1452E3AAB6AA8E12(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionRollNpcDressedEquipConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionRollNpcDressedEquipConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONROLLNPCDRESSEDEQUIPCONFIG_METHOD_6_1452E3AAB6AA8E12_OFFSET))(a1, a2);
		}
	};
}
