#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace MoleMole::Timeline { class MeshRendererParams; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class SkinnedMeshRenderer; }

#define MOLEMOLE_TIMELINE_SKINNEDMESHRENDERERBEHAVIOR_INITDATA_OFFSET UNITYSDK_OFFSET(0x1F8B4170)
#define MOLEMOLE_TIMELINE_SKINNEDMESHRENDERERBEHAVIOR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x1F8B4810)
#define MOLEMOLE_TIMELINE_SKINNEDMESHRENDERERBEHAVIOR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1F8B45A0)
#define MOLEMOLE_TIMELINE_SKINNEDMESHRENDERERBEHAVIOR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1F8B4930)
#define MOLEMOLE_TIMELINE_SKINNEDMESHRENDERERBEHAVIOR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1F8B46D0)
#define MOLEMOLE_TIMELINE_SKINNEDMESHRENDERERBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1F8B4A50)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int SkinnedMeshRendererBehavior_TypeDefinitionIndex = 32847;

	class SkinnedMeshRendererBehavior : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::MoleMole::Timeline::MeshRendererParams* MeshRendererParams; // 0x10
		::UnityEngine::GameObject* refGameObject; // 0x18
		::System::Collections::Generic::Dictionary_2<::UnityEngine::SkinnedMeshRenderer*, ::MoleMole::Timeline::MeshRendererParams*>* MeshRendererParamsMap; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SKINNEDMESHRENDERERBEHAVIOR__CTOR_OFFSET))(this);
		}

		::System::Void InitData(::UnityEngine::GameObject* refGameObject)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SKINNEDMESHRENDERERBEHAVIOR_INITDATA_OFFSET))(this, refGameObject);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SKINNEDMESHRENDERERBEHAVIOR_ONBEHAVIOURPLAY_OFFSET))(this, playable, info);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::System::Object* playerData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SKINNEDMESHRENDERERBEHAVIOR_PROCESSFRAME_OFFSET))(this, playable, info, playerData);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SKINNEDMESHRENDERERBEHAVIOR_ONBEHAVIOURPAUSE_OFFSET))(this, playable, info);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable playable)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SKINNEDMESHRENDERERBEHAVIOR_ONPLAYABLEDESTROY_OFFSET))(this, playable);
		}
	};
}
