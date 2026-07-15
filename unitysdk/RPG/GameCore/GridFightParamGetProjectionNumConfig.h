#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMGETPROJECTIONNUMCONFIG_METHOD_6_081F47479E2B4EFE_OFFSET UNITYSDK_OFFSET(0x1D06DD80)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETPROJECTIONNUMCONFIG_METHOD_6_CDADAC9028ADEFE2_OFFSET UNITYSDK_OFFSET(0x1D06DD30)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETPROJECTIONNUMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D06DD70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetProjectionNumConfig_TypeDefinitionIndex = 18764;

	class GridFightParamGetProjectionNumConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETPROJECTIONNUMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_CDADAC9028ADEFE2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetProjectionNumConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetProjectionNumConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETPROJECTIONNUMCONFIG_METHOD_6_CDADAC9028ADEFE2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_081F47479E2B4EFE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetProjectionNumConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetProjectionNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETPROJECTIONNUMCONFIG_METHOD_6_081F47479E2B4EFE_OFFSET))(a1, a2);
		}
	};
}
