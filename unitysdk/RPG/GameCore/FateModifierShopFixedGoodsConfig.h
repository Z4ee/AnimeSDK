#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEMODIFIERSHOPFIXEDGOODSCONFIG_METHOD_3_9B09B3BE8EAA3D86_OFFSET UNITYSDK_OFFSET(0x1D08DB80)
#define RPG_GAMECORE_FATEMODIFIERSHOPFIXEDGOODSCONFIG_METHOD_3_D358748FB8E2AA22_OFFSET UNITYSDK_OFFSET(0x1D08DBD0)
#define RPG_GAMECORE_FATEMODIFIERSHOPFIXEDGOODSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D08DBC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateModifierShopFixedGoodsConfig_TypeDefinitionIndex = 19033;

	class FateModifierShopFixedGoodsConfig : public ::RPG::GameCore::FateModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERSHOPFIXEDGOODSCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9B09B3BE8EAA3D86(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierShopFixedGoodsConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierShopFixedGoodsConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERSHOPFIXEDGOODSCONFIG_METHOD_3_9B09B3BE8EAA3D86_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D358748FB8E2AA22(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierShopFixedGoodsConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierShopFixedGoodsConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERSHOPFIXEDGOODSCONFIG_METHOD_3_D358748FB8E2AA22_OFFSET))(a1, a2);
		}
	};
}
