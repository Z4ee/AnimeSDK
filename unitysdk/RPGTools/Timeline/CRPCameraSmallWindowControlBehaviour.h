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

#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWCONTROLBEHAVIOUR_METHOD_2_0B1EB5C9B94BAB66_OFFSET UNITYSDK_OFFSET(0x1B34E590)
#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWCONTROLBEHAVIOUR_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1B34E760)
#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWCONTROLBEHAVIOUR_METHOD_2_6134EDE76689E4AD_OFFSET UNITYSDK_OFFSET(0x1B34E540)
#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWCONTROLBEHAVIOUR_METHOD_2_83DA3EC57FF907F4_OFFSET UNITYSDK_OFFSET(0x1B34D7E0)
#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWCONTROLBEHAVIOUR_METHOD_2_E7F6391017FBD618_OFFSET UNITYSDK_OFFSET(0x1B34E1B0)
#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWCONTROLBEHAVIOUR_METHOD_2_F28136982D1084AB_OFFSET UNITYSDK_OFFSET(0x1B34DFB0)
#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWCONTROLBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x1B34D430)
#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWCONTROLBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1B34D120)
#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWCONTROLBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B34E880)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CRPCameraSmallWindowControlBehaviour_TypeDefinitionIndex = 46121;

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
	};
}
