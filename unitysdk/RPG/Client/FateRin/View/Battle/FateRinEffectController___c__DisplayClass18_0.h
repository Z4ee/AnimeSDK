#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RPGAnimationEvent; }
namespace RPG::Client::FateRin::View::Battle { class FateRinEffectController; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINEFFECTCONTROLLER___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD02C750)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINEFFECTCONTROLLER___C__DISPLAYCLASS18_0___PLAYCOINFADEIN_B__0_OFFSET UNITYSDK_OFFSET(0xD02CCD0)

namespace RPG::Client::FateRin::View::Battle
{
	inline static constexpr unsigned int FateRinEffectController___c__DisplayClass18_0_TypeDefinitionIndex = 79367;

	class FateRinEffectController___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::System::Object* owner; // 0x10
		::RPG::Client::RPGAnimationEvent* animationEvent; // 0x18
		::RPG::Client::FateRin::View::Battle::FateRinEffectController* __4__this; // 0x20
		::UnityEngine::Transform* effect; // 0x28
		::UnityEngine::Animation* anim; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINEFFECTCONTROLLER___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
		}

		::System::Void __PlayCoinFadeIn_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINEFFECTCONTROLLER___C__DISPLAYCLASS18_0___PLAYCOINFADEIN_B__0_OFFSET))(this);
		}
	};
}
