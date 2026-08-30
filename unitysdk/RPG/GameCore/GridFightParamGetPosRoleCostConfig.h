#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMGETPOSROLECOSTCONFIG_METHOD_6_5C6447E7A9EE0FD2_OFFSET UNITYSDK_OFFSET(0x1D15D940)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETPOSROLECOSTCONFIG_METHOD_6_80A097C617A7876E_OFFSET UNITYSDK_OFFSET(0x1D15D990)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETPOSROLECOSTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D15D980)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetPosRoleCostConfig_TypeDefinitionIndex = 19279;

	class GridFightParamGetPosRoleCostConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETPOSROLECOSTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_5C6447E7A9EE0FD2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetPosRoleCostConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetPosRoleCostConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETPOSROLECOSTCONFIG_METHOD_6_5C6447E7A9EE0FD2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_80A097C617A7876E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetPosRoleCostConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetPosRoleCostConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETPOSROLECOSTCONFIG_METHOD_6_80A097C617A7876E_OFFSET))(a1, a2);
		}
	};
}
