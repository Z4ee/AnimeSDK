#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CRPCameraSmallWindowControlBehaviour_EControlType.h"
#include "unitysdk/RPGTools/Timeline/CRPCameraSmallWindowMeshUI.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPGTools::Timeline { class CRPCameraSmallWindowControlCenterAndSize; }
namespace RPGTools::Timeline { class CRPCameraSmallWindowSyncUIRect; }
namespace UnityEngine { class MeshRenderer; }

#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWCONTROLBEHAVIOUR_METHOD_2_0B1EB5C9B94BAB66_OFFSET UNITYSDK_OFFSET(0xCFE5830)
#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWCONTROLBEHAVIOUR_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xCFE5A00)
#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWCONTROLBEHAVIOUR_METHOD_2_6134EDE76689E4AD_OFFSET UNITYSDK_OFFSET(0xCFE57E0)
#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWCONTROLBEHAVIOUR_METHOD_2_83DA3EC57FF907F4_OFFSET UNITYSDK_OFFSET(0xCFE4A80)
#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWCONTROLBEHAVIOUR_METHOD_2_E7F6391017FBD618_OFFSET UNITYSDK_OFFSET(0xCFE5450)
#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWCONTROLBEHAVIOUR_METHOD_2_F28136982D1084AB_OFFSET UNITYSDK_OFFSET(0xCFE5250)
#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWCONTROLBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xCFE46D0)
#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWCONTROLBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xCFE43C0)
#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWCONTROLBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xCFE5B20)
#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWCONTROLBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xCFE5B60)
#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWCONTROLBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xCFE5B50)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CRPCameraSmallWindowControlBehaviour_TypeDefinitionIndex = 45197;

	class CRPCameraSmallWindowControlBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::CRPCameraSmallWindowControlBehaviour_EControlType ControlType; // 0x10
		::RPGTools::Timeline::CRPCameraSmallWindowControlCenterAndSize* CenterAndSize; // 0x18
		::RPGTools::Timeline::CRPCameraSmallWindowSyncUIRect* SyncUIRect; // 0x20
		::RPGTools::Timeline::CRPCameraSmallWindowMeshUI MeshUI; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWCONTROLBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWCONTROLBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWCONTROLBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_83DA3EC57FF907F4()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWCONTROLBEHAVIOUR_METHOD_2_83DA3EC57FF907F4_OFFSET))(this);
		}

		::UnityEngine::Vector2 Method_2_F28136982D1084AB()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWCONTROLBEHAVIOUR_METHOD_2_F28136982D1084AB_OFFSET))(this);
		}

		::UnityEngine::Vector2 Method_2_E7F6391017FBD618()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWCONTROLBEHAVIOUR_METHOD_2_E7F6391017FBD618_OFFSET))(this);
		}

		::UnityEngine::MeshRenderer* Method_2_6134EDE76689E4AD()
		{
			return ((::UnityEngine::MeshRenderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWCONTROLBEHAVIOUR_METHOD_2_6134EDE76689E4AD_OFFSET))(this);
		}

		::System::Boolean Method_2_0B1EB5C9B94BAB66()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWCONTROLBEHAVIOUR_METHOD_2_0B1EB5C9B94BAB66_OFFSET))(this);
		}

		::System::Void Method_2_30D1209326FA87FC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWCONTROLBEHAVIOUR_METHOD_2_30D1209326FA87FC_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWCONTROLBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWCONTROLBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}
	};
}
