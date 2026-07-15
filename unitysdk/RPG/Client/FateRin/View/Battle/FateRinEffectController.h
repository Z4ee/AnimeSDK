#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_B18A907A8E4C5C9C;
namespace RPG::Client { class RPGAnimationEvent; }
namespace RPG::Client::FateRin::View::Battle { class FateRinBezierTrailEffect; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINEFFECTCONTROLLER_CANCELALLFOR_OFFSET UNITYSDK_OFFSET(0x197119C0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINEFFECTCONTROLLER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19711120)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINEFFECTCONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0x19710F10)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINEFFECTCONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x19712D10)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINEFFECTCONTROLLER_PLAYCARDFADEAWAYOUTTRAIL_OFFSET UNITYSDK_OFFSET(0x19711740)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINEFFECTCONTROLLER_PLAYCOINEFFECT_OFFSET UNITYSDK_OFFSET(0x19711C50)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINEFFECTCONTROLLER_PLAYNEGATIVEADDCARDSIDEEFFECTS_OFFSET UNITYSDK_OFFSET(0x197118B0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINEFFECTCONTROLLER_PLAYTRAIL_OFFSET UNITYSDK_OFFSET(0x19711390)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINEFFECTCONTROLLER_SETCOINEFFECTPAUSEFOR_OFFSET UNITYSDK_OFFSET(0x19712430)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINEFFECTCONTROLLER__ADDACTIVEEFFECT_OFFSET UNITYSDK_OFFSET(0x19711F60)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINEFFECTCONTROLLER__ADDACTIVETRAIL_OFFSET UNITYSDK_OFFSET(0x197116E0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINEFFECTCONTROLLER__CANCELALLINTERNAL_OFFSET UNITYSDK_OFFSET(0x19711190)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINEFFECTCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19712D90)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINEFFECTCONTROLLER__ONTRAILNATURALCOMPLETE_OFFSET UNITYSDK_OFFSET(0x19712B80)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINEFFECTCONTROLLER__PLAYCOINFADEIN_OFFSET UNITYSDK_OFFSET(0x19712160)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINEFFECTCONTROLLER__PLAYCOINFADEOUT_OFFSET UNITYSDK_OFFSET(0x19712900)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINEFFECTCONTROLLER__SETANIMATIONSTATESPEED_OFFSET UNITYSDK_OFFSET(0x19712AE0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINEFFECTCONTROLLER__SETCOINANIMATIONSPEED_OFFSET UNITYSDK_OFFSET(0x197126F0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINEFFECTCONTROLLER__SETFRONTCOINTIPS_OFFSET UNITYSDK_OFFSET(0x19711DF0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINEFFECTCONTROLLER__SPAWNPOSITIONEFFECT_OFFSET UNITYSDK_OFFSET(0x19711B70)

namespace RPG::Client::FateRin::View::Battle
{
	inline static constexpr unsigned int FateRinEffectController_TypeDefinitionIndex = 75731;

	class FateRinEffectController : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::String* SHUFFLE_TRAIL; // 0x0
		// static const ::System::String* CARD_FADE_AWAY_OUT_TRAIL; // 0x0
		// static const ::System::String* NEGATIVE_IN_LEFT_EFFECT; // 0x0
		// static const ::System::String* NEGATIVE_IN_RIGHT_EFFECT; // 0x0
		// static const ::System::String* COIN_EFFECT; // 0x0
		// static const ::System::String* COIN_FADE_IN_FRONT; // 0x0
		// static const ::System::String* COIN_FADE_IN_BACK; // 0x0
		// static const ::System::String* COIN_FADE_OUT; // 0x0
		::Class_1_B18A907A8E4C5C9C* _PoolMgr; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Collections::Generic::List_1<::UnityEngine::Component*>*>* _EffectsByOwner; // 0x20
		::System::Boolean _Initialized; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINEFFECTCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINEFFECTCONTROLLER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINEFFECTCONTROLLER_DISPOSE_OFFSET))(this);
		}

		::System::Void PlayTrail(::System::Object* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::System::String* a5, ::System::Action* a6, ::System::Action* a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::String*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINEFFECTCONTROLLER_PLAYTRAIL_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void PlayCardFadeAwayOutTrail(::System::Object* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::System::Action* a5, ::System::Action* a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINEFFECTCONTROLLER_PLAYCARDFADEAWAYOUTTRAIL_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void PlayNegativeAddCardSideEffects(::System::Object* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINEFFECTCONTROLLER_PLAYNEGATIVEADDCARDSIDEEFFECTS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PlayCoinEffect(::System::Object* a1, ::System::Boolean a2, ::RPG::Client::TextID a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINEFFECTCONTROLLER_PLAYCOINEFFECT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CancelAllFor(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINEFFECTCONTROLLER_CANCELALLFOR_OFFSET))(this, a1);
		}

		::System::Void SetCoinEffectPauseFor(::System::Object* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINEFFECTCONTROLLER_SETCOINEFFECTPAUSEFOR_OFFSET))(this, a1, a2);
		}

		::System::Void _AddActiveTrail(::System::Object* a1, ::RPG::Client::FateRin::View::Battle::FateRinBezierTrailEffect* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::RPG::Client::FateRin::View::Battle::FateRinBezierTrailEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINEFFECTCONTROLLER__ADDACTIVETRAIL_OFFSET))(this, a1, a2);
		}

		::System::Void _SpawnPositionEffect(::System::Object* a1, ::System::String* a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::String*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINEFFECTCONTROLLER__SPAWNPOSITIONEFFECT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _PlayCoinFadeIn(::System::Object* a1, ::UnityEngine::Transform* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINEFFECTCONTROLLER__PLAYCOINFADEIN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _PlayCoinFadeOut(::System::Object* a1, ::UnityEngine::Transform* a2, ::UnityEngine::Animation* a3, ::RPG::Client::RPGAnimationEvent* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::UnityEngine::Transform*, ::UnityEngine::Animation*, ::RPG::Client::RPGAnimationEvent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINEFFECTCONTROLLER__PLAYCOINFADEOUT_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Void _SetCoinAnimationSpeed(::UnityEngine::Animation* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::Animation*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINEFFECTCONTROLLER__SETCOINANIMATIONSPEED_OFFSET))(a1, a2);
		}

		static ::System::Void _SetAnimationStateSpeed(::UnityEngine::Animation* a1, ::System::String* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::UnityEngine::Animation*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINEFFECTCONTROLLER__SETANIMATIONSTATESPEED_OFFSET))(a1, a2, a3);
		}

		::System::Void _SetFrontCoinTips(::UnityEngine::Transform* a1, ::RPG::Client::TextID a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINEFFECTCONTROLLER__SETFRONTCOINTIPS_OFFSET))(this, a1, a2);
		}

		::System::Void _AddActiveEffect(::System::Object* a1, ::UnityEngine::Component* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINEFFECTCONTROLLER__ADDACTIVEEFFECT_OFFSET))(this, a1, a2);
		}

		::System::Void _OnTrailNaturalComplete(::System::Object* a1, ::RPG::Client::FateRin::View::Battle::FateRinBezierTrailEffect* a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::RPG::Client::FateRin::View::Battle::FateRinBezierTrailEffect*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINEFFECTCONTROLLER__ONTRAILNATURALCOMPLETE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _CancelAllInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINEFFECTCONTROLLER__CANCELALLINTERNAL_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINEFFECTCONTROLLER_ONDESTROY_OFFSET))(this);
		}
	};
}
