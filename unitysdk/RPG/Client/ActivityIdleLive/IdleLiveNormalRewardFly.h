#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class MonoUILayerOrderAdjuster; }
namespace RPG::Client { class QuadricBezier; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENORMALREWARDFLY_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x1C0FBDF0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENORMALREWARDFLY_ONCREATE_OFFSET UNITYSDK_OFFSET(0x1C0FBE30)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENORMALREWARDFLY_PLAYFADEIN_OFFSET UNITYSDK_OFFSET(0x1C0FC320)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENORMALREWARDFLY_PLAY_OFFSET UNITYSDK_OFFSET(0x1C0FC060)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENORMALREWARDFLY_SETCANVAS_OFFSET UNITYSDK_OFFSET(0x1C0FC5D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENORMALREWARDFLY_SETICON_OFFSET UNITYSDK_OFFSET(0x1C0FBFA0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENORMALREWARDFLY_SETREWARDNUM_OFFSET UNITYSDK_OFFSET(0x1C0FC000)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENORMALREWARDFLY_SPAWNED_OFFSET UNITYSDK_OFFSET(0x1C0FBDB0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENORMALREWARDFLY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0FC670)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveNormalRewardFly_TypeDefinitionIndex = 74886;

	class IdleLiveNormalRewardFly : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single HBDJCFFDGDD; // 0x18
		::RPG::Client::QuadricBezier* FLEHEFOIANL; // 0x20
		::UnityEngine::UI::Image* LPMHMLOGPPN; // 0x28
		::UnityEngine::UI::Text* PDBADDJDFAM; // 0x30
		::UnityEngine::Animation* EOIGEGHFJIJ; // 0x38
		::UnityEngine::Transform* KNGEKPKBIDK; // 0x40
		::UnityEngine::Transform* GNPBGAKIAHM; // 0x48
		::RPG::Client::MonoUILayerOrderAdjuster* KDHFKGMCKCJ; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENORMALREWARDFLY__CTOR_OFFSET))(this);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENORMALREWARDFLY_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENORMALREWARDFLY_DESPAWNED_OFFSET))(this);
		}

		::System::Void OnCreate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENORMALREWARDFLY_ONCREATE_OFFSET))(this, a1);
		}

		::System::Void SetIcon(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENORMALREWARDFLY_SETICON_OFFSET))(this, a1);
		}

		::System::Void SetRewardNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENORMALREWARDFLY_SETREWARDNUM_OFFSET))(this, a1);
		}

		::System::Void Play(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Action* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Action*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENORMALREWARDFLY_PLAY_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void PlayFadeIn(::UnityEngine::Vector3 a1, ::System::Action* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Action*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENORMALREWARDFLY_PLAYFADEIN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetCanvas(::UnityEngine::Canvas* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Canvas*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENORMALREWARDFLY_SETCANVAS_OFFSET))(this, a1);
		}
	};
}
