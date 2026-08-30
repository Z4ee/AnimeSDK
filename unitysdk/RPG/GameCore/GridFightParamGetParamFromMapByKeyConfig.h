#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMGETPARAMFROMMAPBYKEYCONFIG_METHOD_6_44964828CCFEABE6_OFFSET UNITYSDK_OFFSET(0x1EE71C40)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETPARAMFROMMAPBYKEYCONFIG_METHOD_6_DE2078639E22D58A_OFFSET UNITYSDK_OFFSET(0x1EE71BF0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETPARAMFROMMAPBYKEYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE71C30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetParamFromMapByKeyConfig_TypeDefinitionIndex = 19303;

	class GridFightParamGetParamFromMapByKeyConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETPARAMFROMMAPBYKEYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_DE2078639E22D58A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetParamFromMapByKeyConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetParamFromMapByKeyConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETPARAMFROMMAPBYKEYCONFIG_METHOD_6_DE2078639E22D58A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_44964828CCFEABE6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetParamFromMapByKeyConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetParamFromMapByKeyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETPARAMFROMMAPBYKEYCONFIG_METHOD_6_44964828CCFEABE6_OFFSET))(a1, a2);
		}
	};
}
