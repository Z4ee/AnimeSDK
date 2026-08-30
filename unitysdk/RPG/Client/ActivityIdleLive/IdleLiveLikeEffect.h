#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVELIKEEFFECT_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x1C0F9F60)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVELIKEEFFECT_ONCREATE_OFFSET UNITYSDK_OFFSET(0x1C0F9FA0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVELIKEEFFECT_PLAY_OFFSET UNITYSDK_OFFSET(0x1C0F12C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVELIKEEFFECT_SPAWNED_OFFSET UNITYSDK_OFFSET(0x1C0F9F20)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVELIKEEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0FA090)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveLikeEffect_TypeDefinitionIndex = 74885;

	class IdleLiveLikeEffect : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::String* ILKFAAGCMHG; // 0x0
		::UnityEngine::Animation* PMOJILOJEPE; // 0x18
		::System::Single PCOBIKOHGKB; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVELIKEEFFECT__CTOR_OFFSET))(this);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVELIKEEFFECT_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVELIKEEFFECT_DESPAWNED_OFFSET))(this);
		}

		::System::Void OnCreate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVELIKEEFFECT_ONCREATE_OFFSET))(this, a1);
		}

		::System::Void Play(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVELIKEEFFECT_PLAY_OFFSET))(this, a1);
		}
	};
}
