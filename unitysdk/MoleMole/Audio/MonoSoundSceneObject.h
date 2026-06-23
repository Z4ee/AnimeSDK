#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_AUDIO_MONOSOUNDSCENEOBJECT_AWAKE_OFFSET UNITYSDK_OFFSET(0x126E2280)
#define MOLEMOLE_AUDIO_MONOSOUNDSCENEOBJECT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x126E2600)
#define MOLEMOLE_AUDIO_MONOSOUNDSCENEOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x126E2730)

namespace MoleMole::Audio
{
	inline static constexpr unsigned int MonoSoundSceneObject_TypeDefinitionIndex = 44721;

	class MonoSoundSceneObject : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* eventName; // 0x18
		::System::Single activeDistance; // 0x20
		::UnityEngine::GameObject* soundEmitter; // 0x28
		::System::Boolean multiplePosition; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDSCENEOBJECT__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDSCENEOBJECT_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDSCENEOBJECT_ONDESTROY_OFFSET))(this);
		}
	};
}
