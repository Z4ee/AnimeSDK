#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMGETMAXROLENUMCONFIG_METHOD_6_2338B16E4D9B0DF3_OFFSET UNITYSDK_OFFSET(0x197F9810)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETMAXROLENUMCONFIG_METHOD_6_C7E69584065174DD_OFFSET UNITYSDK_OFFSET(0x197F9AC0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETMAXROLENUMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x197F9990)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetMaxRoleNumConfig_TypeDefinitionIndex = 18495;

	class GridFightParamGetMaxRoleNumConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETMAXROLENUMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_2338B16E4D9B0DF3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetMaxRoleNumConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetMaxRoleNumConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETMAXROLENUMCONFIG_METHOD_6_2338B16E4D9B0DF3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_C7E69584065174DD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetMaxRoleNumConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetMaxRoleNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETMAXROLENUMCONFIG_METHOD_6_C7E69584065174DD_OFFSET))(a1, a2);
		}
	};
}
