#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMGETCURSECTIONCONFIG_METHOD_6_E98D60DE952FCC7E_OFFSET UNITYSDK_OFFSET(0x1D06D490)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETCURSECTIONCONFIG_METHOD_6_F09536C93376603A_OFFSET UNITYSDK_OFFSET(0x1D06D4E0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETCURSECTIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D06D4D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetCurSectionConfig_TypeDefinitionIndex = 18783;

	class GridFightParamGetCurSectionConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETCURSECTIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_E98D60DE952FCC7E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetCurSectionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetCurSectionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETCURSECTIONCONFIG_METHOD_6_E98D60DE952FCC7E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_F09536C93376603A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetCurSectionConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetCurSectionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETCURSECTIONCONFIG_METHOD_6_F09536C93376603A_OFFSET))(a1, a2);
		}
	};
}
