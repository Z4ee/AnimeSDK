#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTACTIONSETGLOBALSAVEDVALUECONFIG_METHOD_6_1082F46F3B783059_OFFSET UNITYSDK_OFFSET(0x1D95FF50)
#define RPG_GAMECORE_GRIDFIGHTACTIONSETGLOBALSAVEDVALUECONFIG_METHOD_6_D62F4EE26565981D_OFFSET UNITYSDK_OFFSET(0x1D95FB30)
#define RPG_GAMECORE_GRIDFIGHTACTIONSETGLOBALSAVEDVALUECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D95FB20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionSetGlobalSavedValueConfig_TypeDefinitionIndex = 19089;

	class GridFightActionSetGlobalSavedValueConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONSETGLOBALSAVEDVALUECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_1082F46F3B783059(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionSetGlobalSavedValueConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionSetGlobalSavedValueConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONSETGLOBALSAVEDVALUECONFIG_METHOD_6_1082F46F3B783059_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_D62F4EE26565981D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionSetGlobalSavedValueConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionSetGlobalSavedValueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONSETGLOBALSAVEDVALUECONFIG_METHOD_6_D62F4EE26565981D_OFFSET))(a1, a2);
		}
	};
}
