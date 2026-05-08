#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace AK::Wwise { class RTPC; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define AKRTPCPLAYABLEBEHAVIOUR_GET_OVERRIDETRACKOBJECT_OFFSET UNITYSDK_OFFSET(0x1C4649B0)
#define AKRTPCPLAYABLEBEHAVIOUR_GET_PARAMETER_OFFSET UNITYSDK_OFFSET(0x1C4649F0)
#define AKRTPCPLAYABLEBEHAVIOUR_GET_RTPCOBJECT_OFFSET UNITYSDK_OFFSET(0x1C4649D0)
#define AKRTPCPLAYABLEBEHAVIOUR_GET_SETRTPCGLOBALLY_OFFSET UNITYSDK_OFFSET(0x1C464990)
#define AKRTPCPLAYABLEBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1C464A00)
#define AKRTPCPLAYABLEBEHAVIOUR_SET_OVERRIDETRACKOBJECT_OFFSET UNITYSDK_OFFSET(0x1C4649A0)
#define AKRTPCPLAYABLEBEHAVIOUR_SET_PARAMETER_OFFSET UNITYSDK_OFFSET(0x1C4649E0)
#define AKRTPCPLAYABLEBEHAVIOUR_SET_RTPCOBJECT_OFFSET UNITYSDK_OFFSET(0x1C4649C0)
#define AKRTPCPLAYABLEBEHAVIOUR_SET_SETRTPCGLOBALLY_OFFSET UNITYSDK_OFFSET(0x1C464980)
#define AKRTPCPLAYABLEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1C464CB0)

inline static constexpr unsigned int AkRTPCPlayableBehaviour_TypeDefinitionIndex = 31612;

class AkRTPCPlayableBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::System::Single RTPCValue; // 0x10
	::System::Boolean _setRTPCGlobally_k__BackingField; // 0x14
	::System::Boolean _overrideTrackObject_k__BackingField; // 0x15
	::UnityEngine::GameObject* _rtpcObject_k__BackingField; // 0x18
	::AK::Wwise::RTPC* _parameter_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKRTPCPLAYABLEBEHAVIOUR__CTOR_OFFSET))(this);
	}

	::System::Void set_setRTPCGlobally(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKRTPCPLAYABLEBEHAVIOUR_SET_SETRTPCGLOBALLY_OFFSET))(this, value);
	}

	::System::Boolean get_setRTPCGlobally()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKRTPCPLAYABLEBEHAVIOUR_GET_SETRTPCGLOBALLY_OFFSET))(this);
	}

	::System::Void set_overrideTrackObject(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKRTPCPLAYABLEBEHAVIOUR_SET_OVERRIDETRACKOBJECT_OFFSET))(this, value);
	}

	::System::Boolean get_overrideTrackObject()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKRTPCPLAYABLEBEHAVIOUR_GET_OVERRIDETRACKOBJECT_OFFSET))(this);
	}

	::System::Void set_rtpcObject(::UnityEngine::GameObject* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + AKRTPCPLAYABLEBEHAVIOUR_SET_RTPCOBJECT_OFFSET))(this, value);
	}

	::UnityEngine::GameObject* get_rtpcObject()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKRTPCPLAYABLEBEHAVIOUR_GET_RTPCOBJECT_OFFSET))(this);
	}

	::System::Void set_parameter(::AK::Wwise::RTPC* value)
	{
		return ((::System::Void(*)(::PVOID, ::AK::Wwise::RTPC*))((::PBYTE)hIl2Cpp + AKRTPCPLAYABLEBEHAVIOUR_SET_PARAMETER_OFFSET))(this, value);
	}

	::AK::Wwise::RTPC* get_parameter()
	{
		return ((::AK::Wwise::RTPC*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKRTPCPLAYABLEBEHAVIOUR_GET_PARAMETER_OFFSET))(this);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::System::Object* playerData)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + AKRTPCPLAYABLEBEHAVIOUR_PROCESSFRAME_OFFSET))(this, playable, info, playerData);
	}
};
