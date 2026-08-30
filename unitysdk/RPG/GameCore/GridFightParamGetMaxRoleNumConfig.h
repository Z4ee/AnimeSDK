#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMGETMAXROLENUMCONFIG_METHOD_6_611299850CA08519_OFFSET UNITYSDK_OFFSET(0x1EE71A70)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETMAXROLENUMCONFIG_METHOD_6_C7E69584065174DD_OFFSET UNITYSDK_OFFSET(0x1EE71AC0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETMAXROLENUMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE71AB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetMaxRoleNumConfig_TypeDefinitionIndex = 19280;

	class GridFightParamGetMaxRoleNumConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETMAXROLENUMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_611299850CA08519(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetMaxRoleNumConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetMaxRoleNumConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETMAXROLENUMCONFIG_METHOD_6_611299850CA08519_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_C7E69584065174DD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetMaxRoleNumConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetMaxRoleNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETMAXROLENUMCONFIG_METHOD_6_C7E69584065174DD_OFFSET))(a1, a2);
		}
	};
}
