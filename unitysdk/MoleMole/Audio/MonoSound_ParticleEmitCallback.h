#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

namespace MoleMole::Config { class ConfigSoundActionGeneral; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class ParticleSystem; }

#define MOLEMOLE_AUDIO_MONOSOUND_PARTICLEEMITCALLBACK_GET_SOUNDACTIONSOURCEHINT_OFFSET UNITYSDK_OFFSET(0xE9462E0)
#define MOLEMOLE_AUDIO_MONOSOUND_PARTICLEEMITCALLBACK_GET_SOUNDGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xE945E90)
#define MOLEMOLE_AUDIO_MONOSOUND_PARTICLEEMITCALLBACK_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xE9466D0)
#define MOLEMOLE_AUDIO_MONOSOUND_PARTICLEEMITCALLBACK_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xE946540)
#define MOLEMOLE_AUDIO_MONOSOUND_PARTICLEEMITCALLBACK_ONENABLE_OFFSET UNITYSDK_OFFSET(0xE946340)
#define MOLEMOLE_AUDIO_MONOSOUND_PARTICLEEMITCALLBACK_ONPARTICLEEMIT_OFFSET UNITYSDK_OFFSET(0xE946980)
#define MOLEMOLE_AUDIO_MONOSOUND_PARTICLEEMITCALLBACK_UPDATE_OFFSET UNITYSDK_OFFSET(0xE946A20)
#define MOLEMOLE_AUDIO_MONOSOUND_PARTICLEEMITCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0xE946BD0)

namespace MoleMole::Audio
{
	inline static constexpr unsigned int MonoSound_ParticleEmitCallback_TypeDefinitionIndex = 70135;

	class MonoSound_ParticleEmitCallback : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::System::Int32 emitCallbackThreshold; // 0x58
		::System::Single cooldown; // 0x5C
		::MoleMole::Config::ConfigSoundActionGeneral* onParticleEmitAction; // 0x60
		::System::Boolean useDefaultGameObject; // 0x68
		::System::Boolean useSelf; // 0x69
		::UnityEngine::GameObject* target; // 0x70
		::UnityEngine::GameObject* selfAutoEmitter; // 0x78
		::UnityEngine::ParticleSystem* _particleSystem; // 0x80
		::System::Single _lastTriggerTime; // 0x88
		::System::Boolean updateCheckParticleCount; // 0x8C
		::System::Int32 _lastFrameParticleCount; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUND_PARTICLEEMITCALLBACK__CTOR_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_soundGameObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUND_PARTICLEEMITCALLBACK_GET_SOUNDGAMEOBJECT_OFFSET))(this);
		}

		::System::String* get_soundActionSourceHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUND_PARTICLEEMITCALLBACK_GET_SOUNDACTIONSOURCEHINT_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUND_PARTICLEEMITCALLBACK_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUND_PARTICLEEMITCALLBACK_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUND_PARTICLEEMITCALLBACK_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnParticleEmit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUND_PARTICLEEMITCALLBACK_ONPARTICLEEMIT_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUND_PARTICLEEMITCALLBACK_UPDATE_OFFSET))(this);
		}
	};
}
