#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace RPGTools::Timeline { class CharacterSteerToData; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPGTOOLS_TIMELINE_CHARACTERSTEERTOBEHAVIOUR_GET_EDITORFINALROTATION_OFFSET UNITYSDK_OFFSET(0x1D140B60)
#define RPGTOOLS_TIMELINE_CHARACTERSTEERTOBEHAVIOUR_METHOD_2_050D955490C4C3D0_OFFSET UNITYSDK_OFFSET(0x1D140BC0)
#define RPGTOOLS_TIMELINE_CHARACTERSTEERTOBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x1D141040)
#define RPGTOOLS_TIMELINE_CHARACTERSTEERTOBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1D140FB0)
#define RPGTOOLS_TIMELINE_CHARACTERSTEERTOBEHAVIOUR_ONPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0x1D1410C0)
#define RPGTOOLS_TIMELINE_CHARACTERSTEERTOBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1D141110)
#define RPGTOOLS_TIMELINE_CHARACTERSTEERTOBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1D141160)
#define RPGTOOLS_TIMELINE_CHARACTERSTEERTOBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1412A0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CharacterSteerToBehaviour_TypeDefinitionIndex = 48452;

	class CharacterSteerToBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::CharacterSteerToData* Config; // 0x10
		::UnityEngine::Quaternion SourceDir; // 0x18
		::UnityEngine::Quaternion TargetDir; // 0x28
		::UnityEngine::GameObject* CharacterGo; // 0x38
		::UnityEngine::GameObject* TargetGo; // 0x40
		::UnityEngine::Transform* _MapAnchor; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTEERTOBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::UnityEngine::Quaternion get_EditorFinalRotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTEERTOBEHAVIOUR_GET_EDITORFINALROTATION_OFFSET))(this);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTEERTOBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTEERTOBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void OnPlayableCreate(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTEERTOBEHAVIOUR_ONPLAYABLECREATE_OFFSET))(this, a1);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTEERTOBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTEERTOBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_2_050D955490C4C3D0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTEERTOBEHAVIOUR_METHOD_2_050D955490C4C3D0_OFFSET))(this);
		}
	};
}
