#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERFORCESHOPSPECIALGOODSCONFIG_METHOD_3_1227F10946D0B815_OFFSET UNITYSDK_OFFSET(0x1726B170)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERFORCESHOPSPECIALGOODSCONFIG_METHOD_3_CF140744F6A7ACCC_OFFSET UNITYSDK_OFFSET(0x172679C0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERFORCESHOPSPECIALGOODSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17267970)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierForceShopSpecialGoodsConfig_TypeDefinitionIndex = 17818;

	class GridFightModifierForceShopSpecialGoodsConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERFORCESHOPSPECIALGOODSCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1227F10946D0B815(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierForceShopSpecialGoodsConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierForceShopSpecialGoodsConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERFORCESHOPSPECIALGOODSCONFIG_METHOD_3_1227F10946D0B815_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CF140744F6A7ACCC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierForceShopSpecialGoodsConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierForceShopSpecialGoodsConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERFORCESHOPSPECIALGOODSCONFIG_METHOD_3_CF140744F6A7ACCC_OFFSET))(a1, a2);
		}
	};
}
