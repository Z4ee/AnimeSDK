#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleEffect.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }

#define RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDCRITICALHITDAMAGE_METHOD_3_4246F11DC4E533DD_OFFSET UNITYSDK_OFFSET(0x187E25B0)
#define RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDCRITICALHITDAMAGE_METHOD_3_CBAA596CBBD20B11_OFFSET UNITYSDK_OFFSET(0x187E2680)
#define RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDCRITICALHITDAMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x187E2670)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleEffect_AddCriticalHitDamage_TypeDefinitionIndex = 14954;

	class ChenLingBattleEffect_AddCriticalHitDamage : public ::RPG::GameCore::BaseChenLingBattleEffect
	{
	public:
		::RPG::GameCore::BaseChenLingBattleValueGetter* Num; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDCRITICALHITDAMAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4246F11DC4E533DD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleEffect_AddCriticalHitDamage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleEffect_AddCriticalHitDamage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDCRITICALHITDAMAGE_METHOD_3_4246F11DC4E533DD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CBAA596CBBD20B11(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleEffect_AddCriticalHitDamage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleEffect_AddCriticalHitDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDCRITICALHITDAMAGE_METHOD_3_CBAA596CBBD20B11_OFFSET))(a1, a2);
		}
	};
}
