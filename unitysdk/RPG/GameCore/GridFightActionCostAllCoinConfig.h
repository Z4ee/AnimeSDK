#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTACTIONCOSTALLCOINCONFIG_METHOD_6_98958E9606773E04_OFFSET UNITYSDK_OFFSET(0x197D83D0)
#define RPG_GAMECORE_GRIDFIGHTACTIONCOSTALLCOINCONFIG_METHOD_6_DF889E79224DA957_OFFSET UNITYSDK_OFFSET(0x197D79E0)
#define RPG_GAMECORE_GRIDFIGHTACTIONCOSTALLCOINCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x197D7940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionCostAllCoinConfig_TypeDefinitionIndex = 18327;

	class GridFightActionCostAllCoinConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONCOSTALLCOINCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_98958E9606773E04(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionCostAllCoinConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionCostAllCoinConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONCOSTALLCOINCONFIG_METHOD_6_98958E9606773E04_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_DF889E79224DA957(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionCostAllCoinConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionCostAllCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONCOSTALLCOINCONFIG_METHOD_6_DF889E79224DA957_OFFSET))(a1, a2);
		}
	};
}
