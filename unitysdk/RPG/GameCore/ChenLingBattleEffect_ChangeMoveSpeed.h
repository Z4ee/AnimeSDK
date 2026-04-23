#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleEffect.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }

#define RPG_GAMECORE_CHENLINGBATTLEEFFECT_CHANGEMOVESPEED_METHOD_3_904F63B86B049407_OFFSET UNITYSDK_OFFSET(0x187E2E40)
#define RPG_GAMECORE_CHENLINGBATTLEEFFECT_CHANGEMOVESPEED_METHOD_3_A0A6CCE1F9D7C173_OFFSET UNITYSDK_OFFSET(0x187E2D70)
#define RPG_GAMECORE_CHENLINGBATTLEEFFECT_CHANGEMOVESPEED__CTOR_OFFSET UNITYSDK_OFFSET(0x187E2E30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleEffect_ChangeMoveSpeed_TypeDefinitionIndex = 14956;

	class ChenLingBattleEffect_ChangeMoveSpeed : public ::RPG::GameCore::BaseChenLingBattleEffect
	{
	public:
		::RPG::GameCore::BaseChenLingBattleValueGetter* Num; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEEFFECT_CHANGEMOVESPEED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A0A6CCE1F9D7C173(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleEffect_ChangeMoveSpeed*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleEffect_ChangeMoveSpeed*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEEFFECT_CHANGEMOVESPEED_METHOD_3_A0A6CCE1F9D7C173_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_904F63B86B049407(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleEffect_ChangeMoveSpeed* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleEffect_ChangeMoveSpeed*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEEFFECT_CHANGEMOVESPEED_METHOD_3_904F63B86B049407_OFFSET))(a1, a2);
		}
	};
}
