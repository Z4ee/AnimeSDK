#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleEffect.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }

#define RPG_GAMECORE_CHENLINGBATTLEEFFECT_CHANGEATTACKSPEED_METHOD_3_1B9119D2DAE3A25C_OFFSET UNITYSDK_OFFSET(0x187E2C20)
#define RPG_GAMECORE_CHENLINGBATTLEEFFECT_CHANGEATTACKSPEED_METHOD_3_ABCD5E75C6E464A8_OFFSET UNITYSDK_OFFSET(0x187E2CF0)
#define RPG_GAMECORE_CHENLINGBATTLEEFFECT_CHANGEATTACKSPEED__CTOR_OFFSET UNITYSDK_OFFSET(0x187E2CE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleEffect_ChangeAttackSpeed_TypeDefinitionIndex = 14955;

	class ChenLingBattleEffect_ChangeAttackSpeed : public ::RPG::GameCore::BaseChenLingBattleEffect
	{
	public:
		::RPG::GameCore::BaseChenLingBattleValueGetter* Num; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEEFFECT_CHANGEATTACKSPEED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1B9119D2DAE3A25C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleEffect_ChangeAttackSpeed*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleEffect_ChangeAttackSpeed*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEEFFECT_CHANGEATTACKSPEED_METHOD_3_1B9119D2DAE3A25C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_ABCD5E75C6E464A8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleEffect_ChangeAttackSpeed* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleEffect_ChangeAttackSpeed*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEEFFECT_CHANGEATTACKSPEED_METHOD_3_ABCD5E75C6E464A8_OFFSET))(a1, a2);
		}
	};
}
