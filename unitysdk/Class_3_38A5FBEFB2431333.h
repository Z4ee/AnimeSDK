#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A200C09FD729958A.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace RPG::Client { class EnvironmentSystem; }
namespace RPGTools::Timeline { class ActiveVirtualCameraBehaviour; }
namespace RPGTools::Timeline { class CustomEventBehaviour; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define CLASS_3_38A5FBEFB2431333_METHOD_3_0EAB633F54C44808_OFFSET UNITYSDK_OFFSET(0xCBD9CF0)
#define CLASS_3_38A5FBEFB2431333_METHOD_3_305FA61C22DF94A3_OFFSET UNITYSDK_OFFSET(0xCBD95E0)
#define CLASS_3_38A5FBEFB2431333_METHOD_3_36726F9E10ADB55F_OFFSET UNITYSDK_OFFSET(0xCBD9840)
#define CLASS_3_38A5FBEFB2431333_METHOD_3_3781E538C09B1112_OFFSET UNITYSDK_OFFSET(0xCBD9F30)
#define CLASS_3_38A5FBEFB2431333_METHOD_3_455A0C30CAE9D1B9_OFFSET UNITYSDK_OFFSET(0xCBD99F0)
#define CLASS_3_38A5FBEFB2431333_METHOD_3_82E992240300FB30_OFFSET UNITYSDK_OFFSET(0xCBD9BD0)
#define CLASS_3_38A5FBEFB2431333_METHOD_3_8BD8BEB30989812E_OFFSET UNITYSDK_OFFSET(0xCBD9AD0)
#define CLASS_3_38A5FBEFB2431333_METHOD_3_A85D55A148DB6ACE_OFFSET UNITYSDK_OFFSET(0xCBD9530)
#define CLASS_3_38A5FBEFB2431333_METHOD_3_A8F132B7D33EC9D3_OFFSET UNITYSDK_OFFSET(0xCBD9B50)
#define CLASS_3_38A5FBEFB2431333_METHOD_3_D3B5AB88A9DBE534_OFFSET UNITYSDK_OFFSET(0xCBD9EC0)
#define CLASS_3_38A5FBEFB2431333_METHOD_3_EB897E503D8FEB67_OFFSET UNITYSDK_OFFSET(0xCBD9490)
#define CLASS_3_38A5FBEFB2431333_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0xCBD97E0)
#define CLASS_3_38A5FBEFB2431333__CTOR_OFFSET UNITYSDK_OFFSET(0xCBD9EA0)
#define CLASS_3_38A5FBEFB2431333___IFIXBASEPROXY_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0xCBD9F20)

inline static constexpr unsigned int Class_3_38A5FBEFB2431333_TypeDefinitionIndex = 45134;

class Class_3_38A5FBEFB2431333 : public ::Class_2_A200C09FD729958A
{
public:
	::System::Double Field_3_0; // 0x20
	::System::Single Field_3_1; // 0x28
	::System::Single Field_3_2; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_38A5FBEFB2431333__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_EB897E503D8FEB67(::RPGTools::Timeline::CustomEventBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::CustomEventBehaviour*))((::PBYTE)hIl2Cpp + CLASS_3_38A5FBEFB2431333_METHOD_3_EB897E503D8FEB67_OFFSET))(this, a1);
	}

	::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_3_38A5FBEFB2431333_ONGRAPHSTOP_OFFSET))(this, a1);
	}

	::System::Void Method_3_455A0C30CAE9D1B9(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_3_38A5FBEFB2431333_METHOD_3_455A0C30CAE9D1B9_OFFSET))(this, a1);
	}

	::RPG::Client::EnvironmentSystem* Method_3_A8F132B7D33EC9D3()
	{
		return ((::RPG::Client::EnvironmentSystem*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_38A5FBEFB2431333_METHOD_3_A8F132B7D33EC9D3_OFFSET))(this);
	}

	::System::Void Method_3_A85D55A148DB6ACE(::RPGTools::Timeline::ActiveVirtualCameraBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::ActiveVirtualCameraBehaviour*))((::PBYTE)hIl2Cpp + CLASS_3_38A5FBEFB2431333_METHOD_3_A85D55A148DB6ACE_OFFSET))(this, a1);
	}

	::System::Void Method_3_8BD8BEB30989812E(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_3_38A5FBEFB2431333_METHOD_3_8BD8BEB30989812E_OFFSET))(this, a1);
	}

	::System::Void Method_3_82E992240300FB30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_38A5FBEFB2431333_METHOD_3_82E992240300FB30_OFFSET))(this);
	}

	::System::Void Method_3_0EAB633F54C44808(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TimelineClip*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TimelineClip*>*))((::PBYTE)hIl2Cpp + CLASS_3_38A5FBEFB2431333_METHOD_3_0EAB633F54C44808_OFFSET))(this, a1);
	}

	::System::Void Method_3_305FA61C22DF94A3(::RPGTools::Timeline::ActiveVirtualCameraBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::ActiveVirtualCameraBehaviour*))((::PBYTE)hIl2Cpp + CLASS_3_38A5FBEFB2431333_METHOD_3_305FA61C22DF94A3_OFFSET))(this, a1);
	}

	::System::Void Method_3_36726F9E10ADB55F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_38A5FBEFB2431333_METHOD_3_36726F9E10ADB55F_OFFSET))(this);
	}

	::System::Void Method_3_D3B5AB88A9DBE534(::RPGTools::Timeline::CustomEventBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::CustomEventBehaviour*))((::PBYTE)hIl2Cpp + CLASS_3_38A5FBEFB2431333_METHOD_3_D3B5AB88A9DBE534_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_OnGraphStop(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_3_38A5FBEFB2431333___IFIXBASEPROXY_ONGRAPHSTOP_OFFSET))(this, a1);
	}

	::System::Void Method_3_3781E538C09B1112(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_3_38A5FBEFB2431333_METHOD_3_3781E538C09B1112_OFFSET))(this, a1);
	}
};
