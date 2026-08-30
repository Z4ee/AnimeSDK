#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMGETCURDIVISIONLEVELCONFIG_METHOD_6_6124356266CCB0D2_OFFSET UNITYSDK_OFFSET(0x1EE71410)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETCURDIVISIONLEVELCONFIG_METHOD_6_85608540D486286E_OFFSET UNITYSDK_OFFSET(0x1EE71460)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETCURDIVISIONLEVELCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE71450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetCurDivisionLevelConfig_TypeDefinitionIndex = 19310;

	class GridFightParamGetCurDivisionLevelConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETCURDIVISIONLEVELCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_6124356266CCB0D2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetCurDivisionLevelConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetCurDivisionLevelConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETCURDIVISIONLEVELCONFIG_METHOD_6_6124356266CCB0D2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_85608540D486286E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetCurDivisionLevelConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetCurDivisionLevelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETCURDIVISIONLEVELCONFIG_METHOD_6_85608540D486286E_OFFSET))(a1, a2);
		}
	};
}
