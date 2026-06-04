#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMGETPARAMFROMMAPBYKEYCONFIG_METHOD_6_44964828CCFEABE6_OFFSET UNITYSDK_OFFSET(0x197FA300)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETPARAMFROMMAPBYKEYCONFIG_METHOD_6_52142AAE8EF1DC90_OFFSET UNITYSDK_OFFSET(0x197FA050)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETPARAMFROMMAPBYKEYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x197FA1D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetParamFromMapByKeyConfig_TypeDefinitionIndex = 18514;

	class GridFightParamGetParamFromMapByKeyConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETPARAMFROMMAPBYKEYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_52142AAE8EF1DC90(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetParamFromMapByKeyConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetParamFromMapByKeyConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETPARAMFROMMAPBYKEYCONFIG_METHOD_6_52142AAE8EF1DC90_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_44964828CCFEABE6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetParamFromMapByKeyConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetParamFromMapByKeyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETPARAMFROMMAPBYKEYCONFIG_METHOD_6_44964828CCFEABE6_OFFSET))(a1, a2);
		}
	};
}
