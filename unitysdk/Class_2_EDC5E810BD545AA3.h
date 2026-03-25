#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define CLASS_2_EDC5E810BD545AA3_GET_USEUI3DCAMERA_OFFSET UNITYSDK_OFFSET(0x8742730)
#define CLASS_2_EDC5E810BD545AA3_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x8742750)
#define CLASS_2_EDC5E810BD545AA3_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x8742A10)
#define CLASS_2_EDC5E810BD545AA3_SET_USEUI3DCAMERA_OFFSET UNITYSDK_OFFSET(0x8742740)
#define CLASS_2_EDC5E810BD545AA3__CTOR_OFFSET UNITYSDK_OFFSET(0x8742BC0)
#define CLASS_2_EDC5E810BD545AA3___IFIXBASEPROXY_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x8742BD0)
#define CLASS_2_EDC5E810BD545AA3___IFIXBASEPROXY_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x8742BE0)

inline static constexpr unsigned int Class_2_EDC5E810BD545AA3_TypeDefinitionIndex = 38912;

class Class_2_EDC5E810BD545AA3 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::System::Boolean _UseUI3DCamera_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EDC5E810BD545AA3__CTOR_OFFSET))(this);
	}

	::System::Boolean get_UseUI3DCamera()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EDC5E810BD545AA3_GET_USEUI3DCAMERA_OFFSET))(this);
	}

	::System::Void set_UseUI3DCamera(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_EDC5E810BD545AA3_SET_USEUI3DCAMERA_OFFSET))(this, value);
	}

	::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_EDC5E810BD545AA3_ONGRAPHSTART_OFFSET))(this, a1);
	}

	::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_EDC5E810BD545AA3_ONGRAPHSTOP_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_OnGraphStart(::UnityEngine::Playables::Playable P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_EDC5E810BD545AA3___IFIXBASEPROXY_ONGRAPHSTART_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_OnGraphStop(::UnityEngine::Playables::Playable P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_EDC5E810BD545AA3___IFIXBASEPROXY_ONGRAPHSTOP_OFFSET))(this, P0);
	}
};
