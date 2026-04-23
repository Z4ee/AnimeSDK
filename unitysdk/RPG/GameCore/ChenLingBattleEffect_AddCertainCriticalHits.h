#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleEffect.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }

#define RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDCERTAINCRITICALHITS_METHOD_3_73385A17223C2B5F_OFFSET UNITYSDK_OFFSET(0x187E2460)
#define RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDCERTAINCRITICALHITS_METHOD_3_A3F24A51EEE4A3B3_OFFSET UNITYSDK_OFFSET(0x187E2530)
#define RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDCERTAINCRITICALHITS__CTOR_OFFSET UNITYSDK_OFFSET(0x187E2520)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleEffect_AddCertainCriticalHits_TypeDefinitionIndex = 14953;

	class ChenLingBattleEffect_AddCertainCriticalHits : public ::RPG::GameCore::BaseChenLingBattleEffect
	{
	public:
		::RPG::GameCore::BaseChenLingBattleValueGetter* Num; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDCERTAINCRITICALHITS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_73385A17223C2B5F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleEffect_AddCertainCriticalHits*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleEffect_AddCertainCriticalHits*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDCERTAINCRITICALHITS_METHOD_3_73385A17223C2B5F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A3F24A51EEE4A3B3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleEffect_AddCertainCriticalHits* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleEffect_AddCertainCriticalHits*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDCERTAINCRITICALHITS_METHOD_3_A3F24A51EEE4A3B3_OFFSET))(a1, a2);
		}
	};
}
