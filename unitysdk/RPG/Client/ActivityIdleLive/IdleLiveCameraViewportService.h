#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECAMERAVIEWPORTSERVICE_APPLYVIEWPORT_OFFSET UNITYSDK_OFFSET(0xB121720)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECAMERAVIEWPORTSERVICE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB1219A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECAMERAVIEWPORTSERVICE_REGISTERVIEWPORTREFERENCE_OFFSET UNITYSDK_OFFSET(0xB121160)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECAMERAVIEWPORTSERVICE_RESETVIEWPORT_OFFSET UNITYSDK_OFFSET(0xB1218B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECAMERAVIEWPORTSERVICE_SETINBATTLE_OFFSET UNITYSDK_OFFSET(0xB121950)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECAMERAVIEWPORTSERVICE__APPLYVIEWPORT_OFFSET UNITYSDK_OFFSET(0xB121770)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECAMERAVIEWPORTSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0xB1210D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECAMERAVIEWPORTSERVICE__ONUISCREENSIZECHANGED_OFFSET UNITYSDK_OFFSET(0xB121C30)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECAMERAVIEWPORTSERVICE__SAMPLERATIOSATANIMEND_OFFSET UNITYSDK_OFFSET(0xB1212D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECAMERAVIEWPORTSERVICE__STOPDELAYAPPLYVIEWPORTCOR_OFFSET UNITYSDK_OFFSET(0xB121B50)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECAMERAVIEWPORTSERVICE__UPDATERATIO_OFFSET UNITYSDK_OFFSET(0xB121250)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECAMERAVIEWPORTSERVICE___ONUISCREENSIZECHANGED_B__18_0_OFFSET UNITYSDK_OFFSET(0xB121E50)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveCameraViewportService_TypeDefinitionIndex = 70150;

	class IdleLiveCameraViewportService : public ::System::Object
	{
	public:
		// static const ::System::Single c_DefaultLeftRatio; // 0x0
		// static const ::System::Single c_DefaultBottomRatio; // 0x0
		::System::String* _AnimClipName; // 0x10
		::UnityEngine::Animation* _Animation; // 0x18
		::UnityEngine::Coroutine* _DelayApplyViewPortCor; // 0x20
		::UnityEngine::RectTransform* _RectTrans; // 0x28
		::System::Single _CachedBottomRatio; // 0x30
		::System::Single _CachedLeftRatio; // 0x34
		::System::Boolean _IsInBattle; // 0x38
		::System::Single _CachedTopRatio; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECAMERAVIEWPORTSERVICE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterViewportReference(::UnityEngine::RectTransform* a1, ::UnityEngine::Animation* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::Animation*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECAMERAVIEWPORTSERVICE_REGISTERVIEWPORTREFERENCE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _UpdateRatio()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECAMERAVIEWPORTSERVICE__UPDATERATIO_OFFSET))(this);
		}

		::System::Void ApplyViewport()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECAMERAVIEWPORTSERVICE_APPLYVIEWPORT_OFFSET))(this);
		}

		::System::Void ResetViewport()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECAMERAVIEWPORTSERVICE_RESETVIEWPORT_OFFSET))(this);
		}

		::System::Void SetInBattle(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECAMERAVIEWPORTSERVICE_SETINBATTLE_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECAMERAVIEWPORTSERVICE_DISPOSE_OFFSET))(this);
		}

		::System::Void _StopDelayApplyViewportCor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECAMERAVIEWPORTSERVICE__STOPDELAYAPPLYVIEWPORTCOR_OFFSET))(this);
		}

		::System::Void _OnUiScreenSizeChanged(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECAMERAVIEWPORTSERVICE__ONUISCREENSIZECHANGED_OFFSET))(this, a1);
		}

		::System::ValueTuple_3<::System::Single, ::System::Single, ::System::Single> _SampleRatiosAtAnimEnd(::UnityEngine::RectTransform* a1, ::UnityEngine::Animation* a2, ::System::String* a3)
		{
			return ((::System::ValueTuple_3<::System::Single, ::System::Single, ::System::Single>(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::Animation*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECAMERAVIEWPORTSERVICE__SAMPLERATIOSATANIMEND_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ApplyViewport()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECAMERAVIEWPORTSERVICE__APPLYVIEWPORT_OFFSET))(this);
		}

		::System::Void __OnUiScreenSizeChanged_b__18_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECAMERAVIEWPORTSERVICE___ONUISCREENSIZECHANGED_B__18_0_OFFSET))(this);
		}
	};
}
