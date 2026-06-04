#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace AK::Wwise { class RTPC; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define AKTIMELINERTPCPLAYABLEBEHAVIOUR_GET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1B4B36E0)
#define AKTIMELINERTPCPLAYABLEBEHAVIOUR_GET_RTPC_OFFSET UNITYSDK_OFFSET(0x1B4B36A0)
#define AKTIMELINERTPCPLAYABLEBEHAVIOUR_GET_SETGLOBALLY_OFFSET UNITYSDK_OFFSET(0x1B4B36C0)
#define AKTIMELINERTPCPLAYABLEBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1B4B36F0)
#define AKTIMELINERTPCPLAYABLEBEHAVIOUR_SET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1B4B36D0)
#define AKTIMELINERTPCPLAYABLEBEHAVIOUR_SET_RTPC_OFFSET UNITYSDK_OFFSET(0x1B4B3690)
#define AKTIMELINERTPCPLAYABLEBEHAVIOUR_SET_SETGLOBALLY_OFFSET UNITYSDK_OFFSET(0x1B4B36B0)
#define AKTIMELINERTPCPLAYABLEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4B3680)
#define AKTIMELINERTPCPLAYABLEBEHAVIOUR___IFIXBASEPROXY_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1B4B3890)

inline static constexpr unsigned int AkTimelineRtpcPlayableBehaviour_TypeDefinitionIndex = 41260;

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

	::System::Void set_RTPC(::AK::Wwise::RTPC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::AK::Wwise::RTPC*))((::PBYTE)hIl2Cpp + AKTIMELINERTPCPLAYABLEBEHAVIOUR_SET_RTPC_OFFSET))(this, a1);
	}

	::AK::Wwise::RTPC* get_RTPC()
	{
		return ((::AK::Wwise::RTPC*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTIMELINERTPCPLAYABLEBEHAVIOUR_GET_RTPC_OFFSET))(this);
	}

	::System::Void set_setGlobally(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKTIMELINERTPCPLAYABLEBEHAVIOUR_SET_SETGLOBALLY_OFFSET))(this, a1);
	}

	::System::Boolean get_setGlobally()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTIMELINERTPCPLAYABLEBEHAVIOUR_GET_SETGLOBALLY_OFFSET))(this);
	}

	::System::Void set_gameObject(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + AKTIMELINERTPCPLAYABLEBEHAVIOUR_SET_GAMEOBJECT_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* get_gameObject()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTIMELINERTPCPLAYABLEBEHAVIOUR_GET_GAMEOBJECT_OFFSET))(this);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + AKTIMELINERTPCPLAYABLEBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void __iFixBaseProxy_ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + AKTIMELINERTPCPLAYABLEBEHAVIOUR___IFIXBASEPROXY_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}
};
