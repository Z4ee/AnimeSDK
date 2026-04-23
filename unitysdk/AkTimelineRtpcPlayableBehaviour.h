#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace AK::Wwise { class RTPC; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define AKTIMELINERTPCPLAYABLEBEHAVIOUR_GET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1A668490)
#define AKTIMELINERTPCPLAYABLEBEHAVIOUR_GET_RTPC_OFFSET UNITYSDK_OFFSET(0x1A668450)
#define AKTIMELINERTPCPLAYABLEBEHAVIOUR_GET_SETGLOBALLY_OFFSET UNITYSDK_OFFSET(0x1A668470)
#define AKTIMELINERTPCPLAYABLEBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1A6684A0)
#define AKTIMELINERTPCPLAYABLEBEHAVIOUR_SET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1A668480)
#define AKTIMELINERTPCPLAYABLEBEHAVIOUR_SET_RTPC_OFFSET UNITYSDK_OFFSET(0x1A668440)
#define AKTIMELINERTPCPLAYABLEBEHAVIOUR_SET_SETGLOBALLY_OFFSET UNITYSDK_OFFSET(0x1A668460)
#define AKTIMELINERTPCPLAYABLEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A668430)
#define AKTIMELINERTPCPLAYABLEBEHAVIOUR___IFIXBASEPROXY_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1A668640)

inline static constexpr unsigned int AkTimelineRtpcPlayableBehaviour_TypeDefinitionIndex = 40433;

class AkTimelineRtpcPlayableBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::System::Single value; // 0x10
	::AK::Wwise::RTPC* _RTPC_k__BackingField; // 0x18
	::System::Boolean _setGlobally_k__BackingField; // 0x20
	::UnityEngine::GameObject* _gameObject_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTIMELINERTPCPLAYABLEBEHAVIOUR__CTOR_OFFSET))(this);
	}

	::System::Void set_RTPC(::AK::Wwise::RTPC* value)
	{
		return ((::System::Void(*)(::PVOID, ::AK::Wwise::RTPC*))((::PBYTE)hIl2Cpp + AKTIMELINERTPCPLAYABLEBEHAVIOUR_SET_RTPC_OFFSET))(this, value);
	}

	::AK::Wwise::RTPC* get_RTPC()
	{
		return ((::AK::Wwise::RTPC*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTIMELINERTPCPLAYABLEBEHAVIOUR_GET_RTPC_OFFSET))(this);
	}

	::System::Void set_setGlobally(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKTIMELINERTPCPLAYABLEBEHAVIOUR_SET_SETGLOBALLY_OFFSET))(this, value);
	}

	::System::Boolean get_setGlobally()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTIMELINERTPCPLAYABLEBEHAVIOUR_GET_SETGLOBALLY_OFFSET))(this);
	}

	::System::Void set_gameObject(::UnityEngine::GameObject* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + AKTIMELINERTPCPLAYABLEBEHAVIOUR_SET_GAMEOBJECT_OFFSET))(this, value);
	}

	::UnityEngine::GameObject* get_gameObject()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTIMELINERTPCPLAYABLEBEHAVIOUR_GET_GAMEOBJECT_OFFSET))(this);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData frameData, ::System::Object* playerData)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + AKTIMELINERTPCPLAYABLEBEHAVIOUR_PROCESSFRAME_OFFSET))(this, playable, frameData, playerData);
	}

	::System::Void __iFixBaseProxy_ProcessFrame(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1, ::System::Object* P2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + AKTIMELINERTPCPLAYABLEBEHAVIOUR___IFIXBASEPROXY_PROCESSFRAME_OFFSET))(this, P0, P1, P2);
	}
};
