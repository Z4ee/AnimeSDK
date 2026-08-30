#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace AK::Wwise { class RTPC; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define AKTIMELINERTPCPLAYABLEBEHAVIOUR_GET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1D2D1D10)
#define AKTIMELINERTPCPLAYABLEBEHAVIOUR_GET_RTPC_OFFSET UNITYSDK_OFFSET(0x1D2D1CD0)
#define AKTIMELINERTPCPLAYABLEBEHAVIOUR_GET_SETGLOBALLY_OFFSET UNITYSDK_OFFSET(0x1D2D1CF0)
#define AKTIMELINERTPCPLAYABLEBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1D2D1D20)
#define AKTIMELINERTPCPLAYABLEBEHAVIOUR_SET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1D2D1D00)
#define AKTIMELINERTPCPLAYABLEBEHAVIOUR_SET_RTPC_OFFSET UNITYSDK_OFFSET(0x1D2D1CC0)
#define AKTIMELINERTPCPLAYABLEBEHAVIOUR_SET_SETGLOBALLY_OFFSET UNITYSDK_OFFSET(0x1D2D1CE0)
#define AKTIMELINERTPCPLAYABLEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2D1CB0)

inline static constexpr unsigned int AkTimelineRtpcPlayableBehaviour_TypeDefinitionIndex = 43686;

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
};
