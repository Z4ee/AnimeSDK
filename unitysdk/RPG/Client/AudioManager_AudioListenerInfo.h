#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AudioListenerMode.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define RPG_CLIENT_AUDIOMANAGER_AUDIOLISTENERINFO_INIT_OFFSET UNITYSDK_OFFSET(0x90F8810)
#define RPG_CLIENT_AUDIOMANAGER_AUDIOLISTENERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x90FD020)

namespace RPG::Client
{
	inline static constexpr unsigned int AudioManager_AudioListenerInfo_TypeDefinitionIndex = 48360;

	class AudioManager_AudioListenerInfo : public ::System::Object
	{
	public:
		::UnityEngine::Transform* ListenerFollowTarget; // 0x10
		::UnityEngine::Vector3 ListenerOffset; // 0x18
		::RPG::Client::AudioListenerMode Mode; // 0x24
		::System::Single ListenerWithinDist; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_AUDIOLISTENERINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init(::RPG::Client::AudioListenerMode listenerMode, ::UnityEngine::Transform* followTarget, ::System::Single withinDist, ::System::Nullable_1<::UnityEngine::Vector3> offset)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AudioListenerMode, ::UnityEngine::Transform*, ::System::Single, ::System::Nullable_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_AUDIOLISTENERINFO_INIT_OFFSET))(this, listenerMode, followTarget, withinDist, offset);
		}
	};
}
