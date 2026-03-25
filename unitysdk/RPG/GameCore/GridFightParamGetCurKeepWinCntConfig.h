#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMGETCURKEEPWINCNTCONFIG_METHOD_6_37E41C1CB77E0F9B_OFFSET UNITYSDK_OFFSET(0x1726F720)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETCURKEEPWINCNTCONFIG_METHOD_6_59E2218F8EF86FB5_OFFSET UNITYSDK_OFFSET(0x1726F470)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETCURKEEPWINCNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1726F5F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetCurKeepWinCntConfig_TypeDefinitionIndex = 17900;

	class GridFightParamGetCurKeepWinCntConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETCURKEEPWINCNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_59E2218F8EF86FB5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetCurKeepWinCntConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetCurKeepWinCntConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETCURKEEPWINCNTCONFIG_METHOD_6_59E2218F8EF86FB5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_37E41C1CB77E0F9B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetCurKeepWinCntConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetCurKeepWinCntConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETCURKEEPWINCNTCONFIG_METHOD_6_37E41C1CB77E0F9B_OFFSET))(a1, a2);
		}
	};
}
