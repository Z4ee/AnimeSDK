#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLESTARWITHORIGINALCOSTCONFIG_METHOD_3_B11BA75EAD3E6649_OFFSET UNITYSDK_OFFSET(0x189BFE60)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLESTARWITHORIGINALCOSTCONFIG_METHOD_3_DDEE3E5E1D2AED70_OFFSET UNITYSDK_OFFSET(0x189BFD90)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLESTARWITHORIGINALCOSTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x189BFE10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierShopUpRoleStarWithOriginalCostConfig_TypeDefinitionIndex = 18380;

	class GridFightModifierShopUpRoleStarWithOriginalCostConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLESTARWITHORIGINALCOSTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DDEE3E5E1D2AED70(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierShopUpRoleStarWithOriginalCostConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierShopUpRoleStarWithOriginalCostConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLESTARWITHORIGINALCOSTCONFIG_METHOD_3_DDEE3E5E1D2AED70_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B11BA75EAD3E6649(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierShopUpRoleStarWithOriginalCostConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierShopUpRoleStarWithOriginalCostConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLESTARWITHORIGINALCOSTCONFIG_METHOD_3_B11BA75EAD3E6649_OFFSET))(a1, a2);
		}
	};
}
