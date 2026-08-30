#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleEffect.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }

#define RPG_GAMECORE_CHENLINGBATTLEEFFECT_GAINGOLDCOIN_METHOD_3_7D82D1EBF1121E97_OFFSET UNITYSDK_OFFSET(0x1E00BB60)
#define RPG_GAMECORE_CHENLINGBATTLEEFFECT_GAINGOLDCOIN_METHOD_3_B1EA5AA7ECBB9D83_OFFSET UNITYSDK_OFFSET(0x1E00BA90)
#define RPG_GAMECORE_CHENLINGBATTLEEFFECT_GAINGOLDCOIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1E00BB50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleEffect_GainGoldCoin_TypeDefinitionIndex = 15614;

	class ChenLingBattleEffect_GainGoldCoin : public ::RPG::GameCore::BaseChenLingBattleEffect
	{
	public:
		::RPG::GameCore::BaseChenLingBattleValueGetter* Num; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEEFFECT_GAINGOLDCOIN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B1EA5AA7ECBB9D83(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleEffect_GainGoldCoin*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleEffect_GainGoldCoin*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEEFFECT_GAINGOLDCOIN_METHOD_3_B1EA5AA7ECBB9D83_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7D82D1EBF1121E97(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleEffect_GainGoldCoin* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleEffect_GainGoldCoin*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEEFFECT_GAINGOLDCOIN_METHOD_3_7D82D1EBF1121E97_OFFSET))(a1, a2);
		}
	};
}
