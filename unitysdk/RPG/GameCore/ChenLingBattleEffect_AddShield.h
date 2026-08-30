#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleEffect.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }

#define RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDSHIELD_METHOD_3_9EE722E1F4504519_OFFSET UNITYSDK_OFFSET(0x1E00B600)
#define RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDSHIELD_METHOD_3_FE40ADB3BE7AE4E5_OFFSET UNITYSDK_OFFSET(0x1E00B530)
#define RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDSHIELD__CTOR_OFFSET UNITYSDK_OFFSET(0x1E00B5F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleEffect_AddShield_TypeDefinitionIndex = 15615;

	class ChenLingBattleEffect_AddShield : public ::RPG::GameCore::BaseChenLingBattleEffect
	{
	public:
		::RPG::GameCore::BaseChenLingBattleValueGetter* Num; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDSHIELD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FE40ADB3BE7AE4E5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleEffect_AddShield*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleEffect_AddShield*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDSHIELD_METHOD_3_FE40ADB3BE7AE4E5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9EE722E1F4504519(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleEffect_AddShield* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleEffect_AddShield*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDSHIELD_METHOD_3_9EE722E1F4504519_OFFSET))(a1, a2);
		}
	};
}
