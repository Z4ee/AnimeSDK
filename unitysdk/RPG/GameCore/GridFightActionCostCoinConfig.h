#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTACTIONCOSTCOINCONFIG_METHOD_6_59DB4E21ED2178DE_OFFSET UNITYSDK_OFFSET(0x1899F8B0)
#define RPG_GAMECORE_GRIDFIGHTACTIONCOSTCOINCONFIG_METHOD_6_E8FC89645529B0ED_OFFSET UNITYSDK_OFFSET(0x189A02E0)
#define RPG_GAMECORE_GRIDFIGHTACTIONCOSTCOINCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1899F810)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionCostCoinConfig_TypeDefinitionIndex = 18356;

	class GridFightActionCostCoinConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONCOSTCOINCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_E8FC89645529B0ED(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionCostCoinConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionCostCoinConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONCOSTCOINCONFIG_METHOD_6_E8FC89645529B0ED_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_59DB4E21ED2178DE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionCostCoinConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionCostCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONCOSTCOINCONFIG_METHOD_6_59DB4E21ED2178DE_OFFSET))(a1, a2);
		}
	};
}
