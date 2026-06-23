#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_AUDIO_MONOSOUNDSCENEOBJECT_SHPERE_AWAKE_OFFSET UNITYSDK_OFFSET(0x12B86F80)
#define MOLEMOLE_AUDIO_MONOSOUNDSCENEOBJECT_SHPERE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x12B871C0)
#define MOLEMOLE_AUDIO_MONOSOUNDSCENEOBJECT_SHPERE__CTOR_OFFSET UNITYSDK_OFFSET(0x12B872F0)

namespace MoleMole::Audio
{
	inline static constexpr unsigned int MonoSoundSceneObject_Shpere_TypeDefinitionIndex = 64915;

	class MonoSoundSceneObject_Shpere : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* eventName; // 0x18
		::System::Single activeDistance; // 0x20
		::UnityEngine::Vector3 offset; // 0x24
		::System::Single radius; // 0x30
		::UnityEngine::GameObject* soundEmitter; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDSCENEOBJECT_SHPERE__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDSCENEOBJECT_SHPERE_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDSCENEOBJECT_SHPERE_ONDESTROY_OFFSET))(this);
		}
	};
}
