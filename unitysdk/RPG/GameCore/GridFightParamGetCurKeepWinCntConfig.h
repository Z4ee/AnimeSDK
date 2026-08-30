#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMGETCURKEEPWINCNTCONFIG_METHOD_6_37E41C1CB77E0F9B_OFFSET UNITYSDK_OFFSET(0x1EE71520)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETCURKEEPWINCNTCONFIG_METHOD_6_BD6FFD0B56252237_OFFSET UNITYSDK_OFFSET(0x1EE714D0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETCURKEEPWINCNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE71510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetCurKeepWinCntConfig_TypeDefinitionIndex = 19304;

	class GridFightParamGetCurKeepWinCntConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETCURKEEPWINCNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_BD6FFD0B56252237(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetCurKeepWinCntConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetCurKeepWinCntConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETCURKEEPWINCNTCONFIG_METHOD_6_BD6FFD0B56252237_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_37E41C1CB77E0F9B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetCurKeepWinCntConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetCurKeepWinCntConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETCURKEEPWINCNTCONFIG_METHOD_6_37E41C1CB77E0F9B_OFFSET))(a1, a2);
		}
	};
}
