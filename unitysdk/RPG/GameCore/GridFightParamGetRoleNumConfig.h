#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMGETROLENUMCONFIG_METHOD_6_0CE86A9D2BB58A95_OFFSET UNITYSDK_OFFSET(0x197FB640)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETROLENUMCONFIG_METHOD_6_2F705BE95693E65B_OFFSET UNITYSDK_OFFSET(0x197FB390)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETROLENUMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x197FB510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetRoleNumConfig_TypeDefinitionIndex = 18502;

	class GridFightParamGetRoleNumConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETROLENUMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_2F705BE95693E65B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetRoleNumConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetRoleNumConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETROLENUMCONFIG_METHOD_6_2F705BE95693E65B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_0CE86A9D2BB58A95(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetRoleNumConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetRoleNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETROLENUMCONFIG_METHOD_6_0CE86A9D2BB58A95_OFFSET))(a1, a2);
		}
	};
}
