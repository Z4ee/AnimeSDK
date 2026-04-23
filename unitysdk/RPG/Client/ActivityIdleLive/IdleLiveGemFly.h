#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class MonoUILayerOrderAdjuster; }
namespace System { class Action; }
namespace System { class Object; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGEMFLY_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x9B62AF0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGEMFLY_ONCREATE_OFFSET UNITYSDK_OFFSET(0x9B62B30)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGEMFLY_PLAYFADEIN_OFFSET UNITYSDK_OFFSET(0x9B63050)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGEMFLY_PLAY_OFFSET UNITYSDK_OFFSET(0x9B62D80)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGEMFLY_SETCANVAS_OFFSET UNITYSDK_OFFSET(0x9B62CE0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGEMFLY_SETREWARDNUM_OFFSET UNITYSDK_OFFSET(0x9B62C80)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGEMFLY_SPAWNED_OFFSET UNITYSDK_OFFSET(0x9B62AB0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGEMFLY__CTOR_OFFSET UNITYSDK_OFFSET(0x9B631F0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveGemFly_TypeDefinitionIndex = 69236;

	class IdleLiveGemFly : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single Field_5_0; // 0x18
		::System::Single Field_5_1; // 0x1C
		::UnityEngine::UI::Text* Field_5_2; // 0x20
		::UnityEngine::Transform* Field_5_3; // 0x28
		::UnityEngine::Transform* Field_5_4; // 0x30
		::UnityEngine::Animation* Field_5_5; // 0x38
		::RPG::Client::MonoUILayerOrderAdjuster* Field_5_6; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGEMFLY__CTOR_OFFSET))(this);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGEMFLY_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGEMFLY_DESPAWNED_OFFSET))(this);
		}

		::System::Void OnCreate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGEMFLY_ONCREATE_OFFSET))(this, a1);
		}

		::System::Void SetRewardNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGEMFLY_SETREWARDNUM_OFFSET))(this, a1);
		}

		::System::Void SetCanvas(::UnityEngine::Canvas* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Canvas*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGEMFLY_SETCANVAS_OFFSET))(this, a1);
		}

		::System::Void Play(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGEMFLY_PLAY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PlayFadeIn(::UnityEngine::Vector3 a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGEMFLY_PLAYFADEIN_OFFSET))(this, a1, a2);
		}
	};
}
