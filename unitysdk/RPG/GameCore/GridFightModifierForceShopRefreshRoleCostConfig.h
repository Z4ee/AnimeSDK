#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERFORCESHOPREFRESHROLECOSTCONFIG_METHOD_3_72CD4C7045B6B7F9_OFFSET UNITYSDK_OFFSET(0x1D069E50)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERFORCESHOPREFRESHROLECOSTCONFIG_METHOD_3_C322E1DEDFE0F23D_OFFSET UNITYSDK_OFFSET(0x1D069EA0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERFORCESHOPREFRESHROLECOSTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D069E90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierForceShopRefreshRoleCostConfig_TypeDefinitionIndex = 18594;

	class GridFightModifierForceShopRefreshRoleCostConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERFORCESHOPREFRESHROLECOSTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_72CD4C7045B6B7F9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierForceShopRefreshRoleCostConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierForceShopRefreshRoleCostConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERFORCESHOPREFRESHROLECOSTCONFIG_METHOD_3_72CD4C7045B6B7F9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C322E1DEDFE0F23D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierForceShopRefreshRoleCostConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierForceShopRefreshRoleCostConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERFORCESHOPREFRESHROLECOSTCONFIG_METHOD_3_C322E1DEDFE0F23D_OFFSET))(a1, a2);
		}
	};
}
