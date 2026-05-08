#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/PlayerLoopTiming.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config { class PlayerAccessoryTabData; }
namespace System { class Action; }
namespace System::Threading { class CancellationTokenSource; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class Transform; }

#define CONFIGCAMERASPHERICALCOORDINATESWITCHER_CALCULATECAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0x11E5AC20)
#define CONFIGCAMERASPHERICALCOORDINATESWITCHER_GET_ISTICKING_OFFSET UNITYSDK_OFFSET(0x11E5AE10)
#define CONFIGCAMERASPHERICALCOORDINATESWITCHER_ONCLICKSWITCH_OFFSET UNITYSDK_OFFSET(0x11E5AB00)
#define CONFIGCAMERASPHERICALCOORDINATESWITCHER_REGONSWITCHCOMPLETE_OFFSET UNITYSDK_OFFSET(0x11E5AA00)
#define CONFIGCAMERASPHERICALCOORDINATESWITCHER_REGONSWITCHSTART_OFFSET UNITYSDK_OFFSET(0x11E5AA50)
#define CONFIGCAMERASPHERICALCOORDINATESWITCHER_SETCAMERAANDVIEWTARGET_OFFSET UNITYSDK_OFFSET(0x11E5AAA0)
#define CONFIGCAMERASPHERICALCOORDINATESWITCHER_SWITCHCAMERA_OFFSET UNITYSDK_OFFSET(0x11E5AB70)
#define CONFIGCAMERASPHERICALCOORDINATESWITCHER_UPDATE_OFFSET UNITYSDK_OFFSET(0x11E5ADA0)
#define CONFIGCAMERASPHERICALCOORDINATESWITCHER_WAITUNTILTIMECURSOR_OFFSET UNITYSDK_OFFSET(0x11E5ACD0)
#define CONFIGCAMERASPHERICALCOORDINATESWITCHER__CTOR_OFFSET UNITYSDK_OFFSET(0x11E5AE20)

inline static constexpr unsigned int ConfigCameraSphericalCoordinateSwitcher_TypeDefinitionIndex = 43693;

class ConfigCameraSphericalCoordinateSwitcher : public ::System::Object
{
public:
	::System::Action* m_onSwitchStart; // 0x10
	::System::Threading::CancellationTokenSource* m_originalSource; // 0x18
	::UnityEngine::Coroutine* m_switchCoroutine; // 0x20
	::UnityEngine::Transform* m_viewTarget; // 0x28
	::MoleMole::Config::PlayerAccessoryTabData* m_prevConfigID; // 0x30
	::System::Action* m_onSwitchComplete; // 0x38
	::UnityEngine::Transform* m_cam; // 0x40
	::System::Boolean m_isTicking; // 0x48
	::System::Single m_curTimeCursor; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGCAMERASPHERICALCOORDINATESWITCHER__CTOR_OFFSET))(this);
	}

	::System::Void RegOnSwitchComplete(::System::Action* onSwitchComplete)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CONFIGCAMERASPHERICALCOORDINATESWITCHER_REGONSWITCHCOMPLETE_OFFSET))(this, onSwitchComplete);
	}

	::System::Void RegOnSwitchStart(::System::Action* onSwitchStart)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CONFIGCAMERASPHERICALCOORDINATESWITCHER_REGONSWITCHSTART_OFFSET))(this, onSwitchStart);
	}

	::System::Void SetCameraAndViewTarget(::UnityEngine::Transform* cam, ::UnityEngine::Transform* trans)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CONFIGCAMERASPHERICALCOORDINATESWITCHER_SETCAMERAANDVIEWTARGET_OFFSET))(this, cam, trans);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid OnClickSwitch(::MoleMole::Config::PlayerAccessoryTabData* tabID)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::MoleMole::Config::PlayerAccessoryTabData*))((::PBYTE)hIl2Cpp + CONFIGCAMERASPHERICALCOORDINATESWITCHER_ONCLICKSWITCH_OFFSET))(this, tabID);
	}

	::Cysharp::Threading::Tasks::UniTask SwitchCamera(::MoleMole::Config::PlayerAccessoryTabData* from, ::MoleMole::Config::PlayerAccessoryTabData* to)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::MoleMole::Config::PlayerAccessoryTabData*, ::MoleMole::Config::PlayerAccessoryTabData*))((::PBYTE)hIl2Cpp + CONFIGCAMERASPHERICALCOORDINATESWITCHER_SWITCHCAMERA_OFFSET))(this, from, to);
	}

	::UnityEngine::Vector3 CalculateCameraPosition(::System::Single localX, ::System::Single localY, ::System::Single localZ)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CONFIGCAMERASPHERICALCOORDINATESWITCHER_CALCULATECAMERAPOSITION_OFFSET))(this, localX, localY, localZ);
	}

	::Cysharp::Threading::Tasks::UniTask WaitUntilTimeCursor(::System::Single resumeTime, ::System::Threading::CancellationToken token, ::Cysharp::Threading::Tasks::PlayerLoopTiming timing)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Single, ::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::PlayerLoopTiming))((::PBYTE)hIl2Cpp + CONFIGCAMERASPHERICALCOORDINATESWITCHER_WAITUNTILTIMECURSOR_OFFSET))(this, resumeTime, token, timing);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGCAMERASPHERICALCOORDINATESWITCHER_UPDATE_OFFSET))(this);
	}

	::System::Boolean get_IsTicking()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGCAMERASPHERICALCOORDINATESWITCHER_GET_ISTICKING_OFFSET))(this);
	}
};
