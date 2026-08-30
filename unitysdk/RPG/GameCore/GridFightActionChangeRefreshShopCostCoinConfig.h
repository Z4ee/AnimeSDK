#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTACTIONCHANGEREFRESHSHOPCOSTCOINCONFIG_METHOD_6_174000A583AD68F1_OFFSET UNITYSDK_OFFSET(0x1D1497D0)
#define RPG_GAMECORE_GRIDFIGHTACTIONCHANGEREFRESHSHOPCOSTCOINCONFIG_METHOD_6_B8DD494837D25C0D_OFFSET UNITYSDK_OFFSET(0x1D149780)
#define RPG_GAMECORE_GRIDFIGHTACTIONCHANGEREFRESHSHOPCOSTCOINCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1497C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionChangeRefreshShopCostCoinConfig_TypeDefinitionIndex = 19078;

	class GridFightActionChangeRefreshShopCostCoinConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONCHANGEREFRESHSHOPCOSTCOINCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_B8DD494837D25C0D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionChangeRefreshShopCostCoinConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionChangeRefreshShopCostCoinConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONCHANGEREFRESHSHOPCOSTCOINCONFIG_METHOD_6_B8DD494837D25C0D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_174000A583AD68F1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionChangeRefreshShopCostCoinConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionChangeRefreshShopCostCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONCHANGEREFRESHSHOPCOSTCOINCONFIG_METHOD_6_174000A583AD68F1_OFFSET))(a1, a2);
		}
	};
}
