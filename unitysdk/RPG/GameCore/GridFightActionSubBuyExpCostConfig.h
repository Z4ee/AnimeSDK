#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTACTIONSUBBUYEXPCOSTCONFIG_METHOD_6_62ED55FE6DCB3432_OFFSET UNITYSDK_OFFSET(0x1D14A4A0)
#define RPG_GAMECORE_GRIDFIGHTACTIONSUBBUYEXPCOSTCONFIG_METHOD_6_6B4516EAE87FF84E_OFFSET UNITYSDK_OFFSET(0x1D14A000)
#define RPG_GAMECORE_GRIDFIGHTACTIONSUBBUYEXPCOSTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D149FF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionSubBuyExpCostConfig_TypeDefinitionIndex = 19073;

	class GridFightActionSubBuyExpCostConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONSUBBUYEXPCOSTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_62ED55FE6DCB3432(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionSubBuyExpCostConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionSubBuyExpCostConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONSUBBUYEXPCOSTCONFIG_METHOD_6_62ED55FE6DCB3432_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_6B4516EAE87FF84E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionSubBuyExpCostConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionSubBuyExpCostConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONSUBBUYEXPCOSTCONFIG_METHOD_6_6B4516EAE87FF84E_OFFSET))(a1, a2);
		}
	};
}
