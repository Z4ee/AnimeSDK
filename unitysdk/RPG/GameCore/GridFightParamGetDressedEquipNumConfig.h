#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMGETDRESSEDEQUIPNUMCONFIG_METHOD_6_1394B34365BF0FB3_OFFSET UNITYSDK_OFFSET(0x1D15D220)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETDRESSEDEQUIPNUMCONFIG_METHOD_6_927CC49D028571F7_OFFSET UNITYSDK_OFFSET(0x1D15D270)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETDRESSEDEQUIPNUMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D15D260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetDressedEquipNumConfig_TypeDefinitionIndex = 19294;

	class GridFightParamGetDressedEquipNumConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETDRESSEDEQUIPNUMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_1394B34365BF0FB3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetDressedEquipNumConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetDressedEquipNumConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETDRESSEDEQUIPNUMCONFIG_METHOD_6_1394B34365BF0FB3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_927CC49D028571F7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetDressedEquipNumConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetDressedEquipNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETDRESSEDEQUIPNUMCONFIG_METHOD_6_927CC49D028571F7_OFFSET))(a1, a2);
		}
	};
}
