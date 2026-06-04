#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define CLASS_2_43152AD19099F0D9_GET_USEUI3DCAMERA_OFFSET UNITYSDK_OFFSET(0x143074E0)
#define CLASS_2_43152AD19099F0D9_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x14307500)
#define CLASS_2_43152AD19099F0D9_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x143077C0)
#define CLASS_2_43152AD19099F0D9_SET_USEUI3DCAMERA_OFFSET UNITYSDK_OFFSET(0x143074F0)
#define CLASS_2_43152AD19099F0D9__CTOR_OFFSET UNITYSDK_OFFSET(0x14307980)
#define CLASS_2_43152AD19099F0D9___IFIXBASEPROXY_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x14307990)
#define CLASS_2_43152AD19099F0D9___IFIXBASEPROXY_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x143079A0)

inline static constexpr unsigned int Class_2_43152AD19099F0D9_TypeDefinitionIndex = 45362;

class Class_2_43152AD19099F0D9 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::System::Boolean _UseUI3DCamera_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43152AD19099F0D9__CTOR_OFFSET))(this);
	}

	::System::Boolean get_UseUI3DCamera()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43152AD19099F0D9_GET_USEUI3DCAMERA_OFFSET))(this);
	}

	::System::Void set_UseUI3DCamera(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_43152AD19099F0D9_SET_USEUI3DCAMERA_OFFSET))(this, a1);
	}

	::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_43152AD19099F0D9_ONGRAPHSTART_OFFSET))(this, a1);
	}

	::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_43152AD19099F0D9_ONGRAPHSTOP_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_OnGraphStart(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_43152AD19099F0D9___IFIXBASEPROXY_ONGRAPHSTART_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_OnGraphStop(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_43152AD19099F0D9___IFIXBASEPROXY_ONGRAPHSTOP_OFFSET))(this, a1);
	}
};
