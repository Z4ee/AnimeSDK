#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLESTARWITHORIGINALCOSTCONFIG_METHOD_3_7260B659164D1DC5_OFFSET UNITYSDK_OFFSET(0x1EE6F320)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLESTARWITHORIGINALCOSTCONFIG_METHOD_3_B11BA75EAD3E6649_OFFSET UNITYSDK_OFFSET(0x1EE6F370)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLESTARWITHORIGINALCOSTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE6F360)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierShopUpRoleStarWithOriginalCostConfig_TypeDefinitionIndex = 19121;

	class GridFightModifierShopUpRoleStarWithOriginalCostConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLESTARWITHORIGINALCOSTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7260B659164D1DC5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierShopUpRoleStarWithOriginalCostConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierShopUpRoleStarWithOriginalCostConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLESTARWITHORIGINALCOSTCONFIG_METHOD_3_7260B659164D1DC5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B11BA75EAD3E6649(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierShopUpRoleStarWithOriginalCostConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierShopUpRoleStarWithOriginalCostConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLESTARWITHORIGINALCOSTCONFIG_METHOD_3_B11BA75EAD3E6649_OFFSET))(a1, a2);
		}
	};
}
