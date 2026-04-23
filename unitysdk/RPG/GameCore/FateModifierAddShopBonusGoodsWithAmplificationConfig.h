#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEMODIFIERADDSHOPBONUSGOODSWITHAMPLIFICATIONCONFIG_METHOD_3_9D918FC6622A7D00_OFFSET UNITYSDK_OFFSET(0x188D3020)
#define RPG_GAMECORE_FATEMODIFIERADDSHOPBONUSGOODSWITHAMPLIFICATIONCONFIG_METHOD_3_ABD2E1F1AC97E569_OFFSET UNITYSDK_OFFSET(0x188D2F50)
#define RPG_GAMECORE_FATEMODIFIERADDSHOPBONUSGOODSWITHAMPLIFICATIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x188D2FD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateModifierAddShopBonusGoodsWithAmplificationConfig_TypeDefinitionIndex = 18304;

	class FateModifierAddShopBonusGoodsWithAmplificationConfig : public ::RPG::GameCore::FateModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERADDSHOPBONUSGOODSWITHAMPLIFICATIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_ABD2E1F1AC97E569(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierAddShopBonusGoodsWithAmplificationConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierAddShopBonusGoodsWithAmplificationConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERADDSHOPBONUSGOODSWITHAMPLIFICATIONCONFIG_METHOD_3_ABD2E1F1AC97E569_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9D918FC6622A7D00(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierAddShopBonusGoodsWithAmplificationConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierAddShopBonusGoodsWithAmplificationConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERADDSHOPBONUSGOODSWITHAMPLIFICATIONCONFIG_METHOD_3_9D918FC6622A7D00_OFFSET))(a1, a2);
		}
	};
}
