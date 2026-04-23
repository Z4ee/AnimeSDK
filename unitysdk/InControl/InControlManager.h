#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InControlUpdateMode.h"
#include "unitysdk/InControl/LogMessage.h"
#include "unitysdk/InControl/SingletonMonoBehavior_1.h"
#include "unitysdk/Unity/Profiling/ProfilerMarker.h"
#include "unitysdk/UnityEngine/SceneManagement/LoadSceneMode.h"
#include "unitysdk/UnityEngine/SceneManagement/Scene.h"

#define INCONTROL_INCONTROLMANAGER_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1716B460)
#define INCONTROL_INCONTROLMANAGER_LOGMESSAGE_OFFSET UNITYSDK_OFFSET(0x1716B740)
#define INCONTROL_INCONTROLMANAGER_ONAPPLICATIONFOCUS_OFFSET UNITYSDK_OFFSET(0x1716B4C0)
#define INCONTROL_INCONTROLMANAGER_ONAPPLICATIONPAUSE_OFFSET UNITYSDK_OFFSET(0x1716B5B0)
#define INCONTROL_INCONTROLMANAGER_ONAPPLICATIONQUIT_OFFSET UNITYSDK_OFFSET(0x1716B600)
#define INCONTROL_INCONTROLMANAGER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1716A9B0)
#define INCONTROL_INCONTROLMANAGER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x17169BA0)
#define INCONTROL_INCONTROLMANAGER_ONSCENEWASLOADED_OFFSET UNITYSDK_OFFSET(0x1716B690)
#define INCONTROL_INCONTROLMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1716AD20)
#define INCONTROL_INCONTROLMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1716B900)
#define INCONTROL_INCONTROLMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1716B8D0)

namespace InControl
{
	inline static constexpr unsigned int InControlManager_TypeDefinitionIndex = 37119;

	class InControlManager : public ::InControl::SingletonMonoBehavior_1<::InControl::InControlManager*>
	{
	public:
		static ::Unity::Profiling::ProfilerMarker* StaticGet_InControlUpdateMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(InControlManager_TypeDefinitionIndex)->GetStaticField(0x4710);
		}
		::System::Boolean logDebugInfo; // 0x18
		::System::Boolean invertYAxis; // 0x19
		::System::Boolean useFixedUpdate; // 0x1A
		::System::Boolean dontDestroyOnLoad; // 0x1B
		::System::Boolean suspendInBackground; // 0x1C
		::InControl::InControlUpdateMode updateMode; // 0x20
		::System::Boolean enableICade; // 0x24
		::System::Boolean enableXInput; // 0x25
		::System::Boolean xInputOverrideUpdateRate; // 0x26
		::System::Int32 xInputUpdateRate; // 0x28
		::System::Boolean xInputOverrideBufferSize; // 0x2C
		::System::Int32 xInputBufferSize; // 0x30
		::System::Boolean enableNativeInput; // 0x34
		::System::Boolean nativeInputEnableXInput; // 0x35
		::System::Boolean nativeInputEnableMFi; // 0x36
		::System::Boolean nativeInputPreventSleep; // 0x37
		::System::Boolean nativeInputOverrideUpdateRate; // 0x38
		::System::Int32 nativeInputUpdateRate; // 0x3C
		::System::Boolean applicationHasQuit; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INCONTROLMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INCONTROL_INCONTROLMANAGER__CCTOR_OFFSET))();
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INCONTROLMANAGER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INCONTROLMANAGER_ONDISABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INCONTROLMANAGER_UPDATE_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INCONTROLMANAGER_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void OnApplicationFocus(::System::Boolean focusState)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_INCONTROLMANAGER_ONAPPLICATIONFOCUS_OFFSET))(this, focusState);
		}

		::System::Void OnApplicationPause(::System::Boolean pauseState)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_INCONTROLMANAGER_ONAPPLICATIONPAUSE_OFFSET))(this, pauseState);
		}

		::System::Void OnApplicationQuit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INCONTROLMANAGER_ONAPPLICATIONQUIT_OFFSET))(this);
		}

		::System::Void OnSceneWasLoaded(::UnityEngine::SceneManagement::Scene scene, ::UnityEngine::SceneManagement::LoadSceneMode loadSceneMode)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::LoadSceneMode))((::PBYTE)hIl2Cpp + INCONTROL_INCONTROLMANAGER_ONSCENEWASLOADED_OFFSET))(this, scene, loadSceneMode);
		}

		static ::System::Void LogMessage(::InControl::LogMessage logMessage)
		{
			return ((::System::Void(*)(::InControl::LogMessage))((::PBYTE)hIl2Cpp + INCONTROL_INCONTROLMANAGER_LOGMESSAGE_OFFSET))(logMessage);
		}
	};
}
