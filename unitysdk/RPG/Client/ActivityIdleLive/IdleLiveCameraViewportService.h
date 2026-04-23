#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECAMERAVIEWPORTSERVICE_APPLYVIEWPORT_OFFSET UNITYSDK_OFFSET(0x9B3AF20)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECAMERAVIEWPORTSERVICE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9B3B1B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECAMERAVIEWPORTSERVICE_REGISTERVIEWPORTREFERENCE_OFFSET UNITYSDK_OFFSET(0x9B3A940)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECAMERAVIEWPORTSERVICE_RESETVIEWPORT_OFFSET UNITYSDK_OFFSET(0x9B3B0C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECAMERAVIEWPORTSERVICE_SETINBATTLE_OFFSET UNITYSDK_OFFSET(0x9B3B160)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECAMERAVIEWPORTSERVICE__APPLYVIEWPORT_OFFSET UNITYSDK_OFFSET(0x9B3AF70)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECAMERAVIEWPORTSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x9B3A8D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECAMERAVIEWPORTSERVICE__ONUISCREENSIZECHANGED_OFFSET UNITYSDK_OFFSET(0x9B3B410)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECAMERAVIEWPORTSERVICE__SAMPLERATIOSATANIMEND_OFFSET UNITYSDK_OFFSET(0x9B3AAB0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECAMERAVIEWPORTSERVICE__STOPDELAYAPPLYVIEWPORTCOR_OFFSET UNITYSDK_OFFSET(0x9B3B330)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECAMERAVIEWPORTSERVICE__UPDATERATIO_OFFSET UNITYSDK_OFFSET(0x9B3AA30)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECAMERAVIEWPORTSERVICE___ONUISCREENSIZECHANGED_B__18_0_OFFSET UNITYSDK_OFFSET(0x9B3B620)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveCameraViewportService_TypeDefinitionIndex = 69338;

	class IdleLiveCameraViewportService : public ::System::Object
	{
	public:
		// static const ::System::Single c_DefaultLeftRatio; // 0x0
		// static const ::System::Single c_DefaultBottomRatio; // 0x0
		::UnityEngine::Coroutine* _DelayApplyViewPortCor; // 0x10
		::UnityEngine::Animation* _Animation; // 0x18
		::UnityEngine::RectTransform* _RectTrans; // 0x20
		::System::String* _AnimClipName; // 0x28
		::System::Single _CachedBottomRatio; // 0x30
		::System::Single _CachedTopRatio; // 0x34
		::System::Boolean _IsInBattle; // 0x38
		::System::Single _CachedLeftRatio; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECAMERAVIEWPORTSERVICE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterViewportReference(::UnityEngine::RectTransform* referenceTransform, ::UnityEngine::Animation* animation, ::System::String* animClipName)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::Animation*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECAMERAVIEWPORTSERVICE_REGISTERVIEWPORTREFERENCE_OFFSET))(this, referenceTransform, animation, animClipName);
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

		::System::Void SetInBattle(::System::Boolean _isInBattle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECAMERAVIEWPORTSERVICE_SETINBATTLE_OFFSET))(this, _isInBattle);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECAMERAVIEWPORTSERVICE_DISPOSE_OFFSET))(this);
		}

		::System::Void _StopDelayApplyViewportCor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECAMERAVIEWPORTSERVICE__STOPDELAYAPPLYVIEWPORTCOR_OFFSET))(this);
		}

		::System::Void _OnUiScreenSizeChanged(::System::Object* _param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECAMERAVIEWPORTSERVICE__ONUISCREENSIZECHANGED_OFFSET))(this, _param);
		}

		::System::ValueTuple_3<::System::Single, ::System::Single, ::System::Single> _SampleRatiosAtAnimEnd(::UnityEngine::RectTransform* referenceTransform, ::UnityEngine::Animation* animation, ::System::String* animClipName)
		{
			return ((::System::ValueTuple_3<::System::Single, ::System::Single, ::System::Single>(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::Animation*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECAMERAVIEWPORTSERVICE__SAMPLERATIOSATANIMEND_OFFSET))(this, referenceTransform, animation, animClipName);
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
