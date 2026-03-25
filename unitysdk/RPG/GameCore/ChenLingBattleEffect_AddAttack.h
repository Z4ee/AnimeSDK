#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleEffect.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }

#define RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDATTACK_METHOD_3_681801058EEC8D21_OFFSET UNITYSDK_OFFSET(0x1707D260)
#define RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDATTACK_METHOD_3_ECCEAF3923346263_OFFSET UNITYSDK_OFFSET(0x1707D2C0)
#define RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDATTACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1707D2B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleEffect_AddAttack_TypeDefinitionIndex = 14488;

	class ChenLingBattleEffect_AddAttack : public ::RPG::GameCore::BaseChenLingBattleEffect
	{
	public:
		::RPG::GameCore::BaseChenLingBattleValueGetter* Base; // 0x10
		::RPG::GameCore::BaseChenLingBattleValueGetter* Multipier; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDATTACK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_681801058EEC8D21(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleEffect_AddAttack*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleEffect_AddAttack*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDATTACK_METHOD_3_681801058EEC8D21_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_ECCEAF3923346263(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleEffect_AddAttack* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleEffect_AddAttack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDATTACK_METHOD_3_ECCEAF3923346263_OFFSET))(a1, a2);
		}
	};
}
