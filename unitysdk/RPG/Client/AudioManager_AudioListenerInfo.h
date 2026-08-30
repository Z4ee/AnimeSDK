#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AudioListenerMode.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define RPG_CLIENT_AUDIOMANAGER_AUDIOLISTENERINFO_INIT_OFFSET UNITYSDK_OFFSET(0xC7EB8A0)
#define RPG_CLIENT_AUDIOMANAGER_AUDIOLISTENERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xC7F0F30)

namespace RPG::Client
{
	inline static constexpr unsigned int AudioManager_AudioListenerInfo_TypeDefinitionIndex = 59873;

	class AudioManager_AudioListenerInfo : public ::System::Object
	{
	public:
		::UnityEngine::Transform* ListenerFollowTarget; // 0x10
		::RPG::Client::AudioListenerMode Mode; // 0x18
		::UnityEngine::Vector3 ListenerOffset; // 0x1C
		::System::Single ListenerWithinDist; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_AUDIOLISTENERINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init(::RPG::Client::AudioListenerMode a1, ::UnityEngine::Transform* a2, ::System::Single a3, ::System::Nullable_1<::UnityEngine::Vector3> a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AudioListenerMode, ::UnityEngine::Transform*, ::System::Single, ::System::Nullable_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_AUDIOLISTENERINFO_INIT_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
