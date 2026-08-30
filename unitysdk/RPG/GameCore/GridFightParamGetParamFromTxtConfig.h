#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMGETPARAMFROMTXTCONFIG_METHOD_6_16093488904625F4_OFFSET UNITYSDK_OFFSET(0x1EE71C50)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETPARAMFROMTXTCONFIG_METHOD_6_214CF6A1FD07AFF0_OFFSET UNITYSDK_OFFSET(0x1EE71CA0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETPARAMFROMTXTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE71C90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetParamFromTxtConfig_TypeDefinitionIndex = 19275;

	class GridFightParamGetParamFromTxtConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETPARAMFROMTXTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_16093488904625F4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetParamFromTxtConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetParamFromTxtConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETPARAMFROMTXTCONFIG_METHOD_6_16093488904625F4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_214CF6A1FD07AFF0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetParamFromTxtConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetParamFromTxtConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETPARAMFROMTXTCONFIG_METHOD_6_214CF6A1FD07AFF0_OFFSET))(a1, a2);
		}
	};
}
