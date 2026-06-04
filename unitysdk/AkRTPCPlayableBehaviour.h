#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace AK::Wwise { class RTPC; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define AKRTPCPLAYABLEBEHAVIOUR_GET_OVERRIDETRACKOBJECT_OFFSET UNITYSDK_OFFSET(0x1B454130)
#define AKRTPCPLAYABLEBEHAVIOUR_GET_PARAMETER_OFFSET UNITYSDK_OFFSET(0x1B454170)
#define AKRTPCPLAYABLEBEHAVIOUR_GET_RTPCOBJECT_OFFSET UNITYSDK_OFFSET(0x1B454150)
#define AKRTPCPLAYABLEBEHAVIOUR_GET_SETRTPCGLOBALLY_OFFSET UNITYSDK_OFFSET(0x1B454110)
#define AKRTPCPLAYABLEBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1B454180)
#define AKRTPCPLAYABLEBEHAVIOUR_SET_OVERRIDETRACKOBJECT_OFFSET UNITYSDK_OFFSET(0x1B454120)
#define AKRTPCPLAYABLEBEHAVIOUR_SET_PARAMETER_OFFSET UNITYSDK_OFFSET(0x1B454160)
#define AKRTPCPLAYABLEBEHAVIOUR_SET_RTPCOBJECT_OFFSET UNITYSDK_OFFSET(0x1B454140)
#define AKRTPCPLAYABLEBEHAVIOUR_SET_SETRTPCGLOBALLY_OFFSET UNITYSDK_OFFSET(0x1B454100)
#define AKRTPCPLAYABLEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4540F0)
#define AKRTPCPLAYABLEBEHAVIOUR___IFIXBASEPROXY_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1B454320)

inline static constexpr unsigned int AkRTPCPlayableBehaviour_TypeDefinitionIndex = 41323;

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

	::System::Void set_setRTPCGlobally(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKRTPCPLAYABLEBEHAVIOUR_SET_SETRTPCGLOBALLY_OFFSET))(this, a1);
	}

	::System::Boolean get_setRTPCGlobally()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKRTPCPLAYABLEBEHAVIOUR_GET_SETRTPCGLOBALLY_OFFSET))(this);
	}

	::System::Void set_overrideTrackObject(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKRTPCPLAYABLEBEHAVIOUR_SET_OVERRIDETRACKOBJECT_OFFSET))(this, a1);
	}

	::System::Boolean get_overrideTrackObject()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKRTPCPLAYABLEBEHAVIOUR_GET_OVERRIDETRACKOBJECT_OFFSET))(this);
	}

	::System::Void set_rtpcObject(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + AKRTPCPLAYABLEBEHAVIOUR_SET_RTPCOBJECT_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* get_rtpcObject()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKRTPCPLAYABLEBEHAVIOUR_GET_RTPCOBJECT_OFFSET))(this);
	}

	::System::Void set_parameter(::AK::Wwise::RTPC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::AK::Wwise::RTPC*))((::PBYTE)hIl2Cpp + AKRTPCPLAYABLEBEHAVIOUR_SET_PARAMETER_OFFSET))(this, a1);
	}

	::AK::Wwise::RTPC* get_parameter()
	{
		return ((::AK::Wwise::RTPC*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKRTPCPLAYABLEBEHAVIOUR_GET_PARAMETER_OFFSET))(this);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + AKRTPCPLAYABLEBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void __iFixBaseProxy_ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + AKRTPCPLAYABLEBEHAVIOUR___IFIXBASEPROXY_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}
};
