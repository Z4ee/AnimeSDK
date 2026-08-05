#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace System { class Object; }
namespace UnityEngine { class Camera; }
namespace UnityEngine::Timeline { class TrackAsset; }

#define MOLEMOLE_TIMELINE_ZNET_ZNETCAMERASUPPORTBEHAVIOR_METHOD_2_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x173BF950)
#define MOLEMOLE_TIMELINE_ZNET_ZNETCAMERASUPPORTBEHAVIOR_METHOD_2_79ED6854413CA2F4_1_OFFSET UNITYSDK_OFFSET(0x173BF960)
#define MOLEMOLE_TIMELINE_ZNET_ZNETCAMERASUPPORTBEHAVIOR_METHOD_2_79ED6854413CA2F4_OFFSET UNITYSDK_OFFSET(0x173BF930)
#define MOLEMOLE_TIMELINE_ZNET_ZNETCAMERASUPPORTBEHAVIOR_METHOD_2_8F54650C0C7FD373_OFFSET UNITYSDK_OFFSET(0x173BF650)
#define MOLEMOLE_TIMELINE_ZNET_ZNETCAMERASUPPORTBEHAVIOR_METHOD_2_D54168B31758A2FD_OFFSET UNITYSDK_OFFSET(0x173BF190)
#define MOLEMOLE_TIMELINE_ZNET_ZNETCAMERASUPPORTBEHAVIOR_METHOD_2_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x173BF940)
#define MOLEMOLE_TIMELINE_ZNET_ZNETCAMERASUPPORTBEHAVIOR_METHOD_2_F136A0FCD546DBA6_OFFSET UNITYSDK_OFFSET(0x173BF490)
#define MOLEMOLE_TIMELINE_ZNET_ZNETCAMERASUPPORTBEHAVIOR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x173BF800)
#define MOLEMOLE_TIMELINE_ZNET_ZNETCAMERASUPPORTBEHAVIOR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x173BF8A0)
#define MOLEMOLE_TIMELINE_ZNET_ZNETCAMERASUPPORTBEHAVIOR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x173BF7A0)
#define MOLEMOLE_TIMELINE_ZNET_ZNETCAMERASUPPORTBEHAVIOR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x173BEEE0)
#define MOLEMOLE_TIMELINE_ZNET_ZNETCAMERASUPPORTBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x173BF920)

namespace MoleMole::Timeline::ZNet
{
	inline static constexpr unsigned int ZNetCameraSupportBehavior_TypeDefinitionIndex = 75853;

	class ZNetCameraSupportBehavior : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Single splitTime; // 0x10
		::UnityEngine::Timeline::TrackAsset* camAnimTrack; // 0x18
		::UnityEngine::Timeline::TrackAsset* lightGroupTrack; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETCAMERASUPPORTBEHAVIOR__CTOR_OFFSET))(this);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETCAMERASUPPORTBEHAVIOR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETCAMERASUPPORTBEHAVIOR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETCAMERASUPPORTBEHAVIOR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETCAMERASUPPORTBEHAVIOR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_79ED6854413CA2F4(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETCAMERASUPPORTBEHAVIOR_METHOD_2_79ED6854413CA2F4_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_F136A0FCD546DBA6(::UnityEngine::Camera* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETCAMERASUPPORTBEHAVIOR_METHOD_2_F136A0FCD546DBA6_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETCAMERASUPPORTBEHAVIOR_METHOD_2_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_2_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETCAMERASUPPORTBEHAVIOR_METHOD_2_324AEE341AAA7A1B_OFFSET))(this, a1);
		}

		::System::Void Method_2_D54168B31758A2FD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETCAMERASUPPORTBEHAVIOR_METHOD_2_D54168B31758A2FD_OFFSET))(this, a1);
		}

		::System::Void Method_2_8F54650C0C7FD373(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETCAMERASUPPORTBEHAVIOR_METHOD_2_8F54650C0C7FD373_OFFSET))(this, a1);
		}

		::System::Void Method_2_79ED6854413CA2F4_1(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETCAMERASUPPORTBEHAVIOR_METHOD_2_79ED6854413CA2F4_1_OFFSET))(this, a1, a2);
		}
	};
}
