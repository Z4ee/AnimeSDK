#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTACTIONCOSTCOINCONFIG_METHOD_6_379128C3B0EA6FC2_OFFSET UNITYSDK_OFFSET(0x1C5C1DE0)
#define RPG_GAMECORE_GRIDFIGHTACTIONCOSTCOINCONFIG_METHOD_6_59DB4E21ED2178DE_OFFSET UNITYSDK_OFFSET(0x1C5C1B10)
#define RPG_GAMECORE_GRIDFIGHTACTIONCOSTCOINCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5C1B00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionCostCoinConfig_TypeDefinitionIndex = 18567;

	class GridFightActionCostCoinConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONCOSTCOINCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_379128C3B0EA6FC2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionCostCoinConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionCostCoinConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONCOSTCOINCONFIG_METHOD_6_379128C3B0EA6FC2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_59DB4E21ED2178DE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionCostCoinConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionCostCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONCOSTCOINCONFIG_METHOD_6_59DB4E21ED2178DE_OFFSET))(a1, a2);
		}
	};
}
