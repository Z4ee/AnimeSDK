#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleValueGetter.h"
#include "unitysdk/RPG/GameCore/ChenLingTeamSelectorType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_ALIVESOLIDERCOUNT_METHOD_3_5FD039C199F528DF_OFFSET UNITYSDK_OFFSET(0x1E010570)
#define RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_ALIVESOLIDERCOUNT_METHOD_3_C71066309B5BA03F_OFFSET UNITYSDK_OFFSET(0x1E0105D0)
#define RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_ALIVESOLIDERCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0105C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleValueGetter_AliveSoliderCount_TypeDefinitionIndex = 15633;

	class ChenLingBattleValueGetter_AliveSoliderCount : public ::RPG::GameCore::BaseChenLingBattleValueGetter
	{
	public:
		::RPG::GameCore::ChenLingTeamSelectorType TeamSelectorType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_ALIVESOLIDERCOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5FD039C199F528DF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleValueGetter_AliveSoliderCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleValueGetter_AliveSoliderCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_ALIVESOLIDERCOUNT_METHOD_3_5FD039C199F528DF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C71066309B5BA03F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleValueGetter_AliveSoliderCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleValueGetter_AliveSoliderCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_ALIVESOLIDERCOUNT_METHOD_3_C71066309B5BA03F_OFFSET))(a1, a2);
		}
	};
}
