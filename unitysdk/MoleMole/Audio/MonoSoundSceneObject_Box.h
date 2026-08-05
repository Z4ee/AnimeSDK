#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_AUDIO_MONOSOUNDSCENEOBJECT_BOX_AWAKE_OFFSET UNITYSDK_OFFSET(0x116C6CA0)
#define MOLEMOLE_AUDIO_MONOSOUNDSCENEOBJECT_BOX_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x116C6EE0)
#define MOLEMOLE_AUDIO_MONOSOUNDSCENEOBJECT_BOX__CTOR_OFFSET UNITYSDK_OFFSET(0x116C7010)

namespace MoleMole::Audio
{
	inline static constexpr unsigned int MonoSoundSceneObject_Box_TypeDefinitionIndex = 68998;

	class MonoSoundSceneObject_Box : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* eventName; // 0x18
		::System::Single activeDistance; // 0x20
		::UnityEngine::Vector3 offset; // 0x24
		::UnityEngine::Vector3 extend; // 0x30
		::UnityEngine::GameObject* soundEmitter; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDSCENEOBJECT_BOX__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDSCENEOBJECT_BOX_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDSCENEOBJECT_BOX_ONDESTROY_OFFSET))(this);
		}
	};
}
