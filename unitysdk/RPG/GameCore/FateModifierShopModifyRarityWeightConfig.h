#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEMODIFIERSHOPMODIFYRARITYWEIGHTCONFIG_METHOD_3_5482A6611930693A_OFFSET UNITYSDK_OFFSET(0x188D6950)
#define RPG_GAMECORE_FATEMODIFIERSHOPMODIFYRARITYWEIGHTCONFIG_METHOD_3_FB2D3CA5151167F3_OFFSET UNITYSDK_OFFSET(0x188D5CD0)
#define RPG_GAMECORE_FATEMODIFIERSHOPMODIFYRARITYWEIGHTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x188D5C80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateModifierShopModifyRarityWeightConfig_TypeDefinitionIndex = 18302;

	class FateModifierShopModifyRarityWeightConfig : public ::RPG::GameCore::FateModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERSHOPMODIFYRARITYWEIGHTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5482A6611930693A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierShopModifyRarityWeightConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierShopModifyRarityWeightConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERSHOPMODIFYRARITYWEIGHTCONFIG_METHOD_3_5482A6611930693A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FB2D3CA5151167F3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierShopModifyRarityWeightConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierShopModifyRarityWeightConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERSHOPMODIFYRARITYWEIGHTCONFIG_METHOD_3_FB2D3CA5151167F3_OFFSET))(a1, a2);
		}
	};
}
