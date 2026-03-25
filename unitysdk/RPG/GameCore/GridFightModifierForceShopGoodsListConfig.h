#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERFORCESHOPGOODSLISTCONFIG_METHOD_3_5E9B0EC1800506BC_OFFSET UNITYSDK_OFFSET(0x1726B070)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERFORCESHOPGOODSLISTCONFIG_METHOD_3_E1A1240F18F70995_OFFSET UNITYSDK_OFFSET(0x17267800)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERFORCESHOPGOODSLISTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x172677B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierForceShopGoodsListConfig_TypeDefinitionIndex = 17843;

	class GridFightModifierForceShopGoodsListConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERFORCESHOPGOODSLISTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5E9B0EC1800506BC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierForceShopGoodsListConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierForceShopGoodsListConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERFORCESHOPGOODSLISTCONFIG_METHOD_3_5E9B0EC1800506BC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E1A1240F18F70995(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierForceShopGoodsListConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierForceShopGoodsListConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERFORCESHOPGOODSLISTCONFIG_METHOD_3_E1A1240F18F70995_OFFSET))(a1, a2);
		}
	};
}
