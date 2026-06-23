#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AudioClip; }
namespace UnityEngine { class GameObject; }

#define RBDDESTRUCTION_VISUALEFFECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC172B0)

namespace RBDDestruction
{
	inline static constexpr unsigned int VisualEffectConfig_TypeDefinitionIndex = 26392;

	class VisualEffectConfig : public ::System::Object
	{
	public:
		::System::Boolean enableHitEffect; // 0x10
		::UnityEngine::GameObject* hitVisualEffect; // 0x18
		::System::Boolean enableGroundedEffect; // 0x20
		::UnityEngine::GameObject* groundedVisualEffect; // 0x28
		::System::Boolean enableDestroyEffect; // 0x30
		::UnityEngine::GameObject* destroyVisualEffect; // 0x38
		::System::Boolean enableSound; // 0x40
		::UnityEngine::AudioClip* hitSoundClip; // 0x48
		::System::Boolean enableGroundedSound; // 0x50
		::UnityEngine::AudioClip* groundedSoundClip; // 0x58
		::System::Boolean enableDestroySound; // 0x60
		::UnityEngine::AudioClip* destroySoundClip; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RBDDESTRUCTION_VISUALEFFECTCONFIG__CTOR_OFFSET))(this);
		}
	};
}
