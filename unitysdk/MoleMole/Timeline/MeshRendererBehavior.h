#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace MoleMole::Timeline { class RealMeshRendererParams; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Renderer; }

#define MOLEMOLE_TIMELINE_MESHRENDERERBEHAVIOR_INITDATA_OFFSET UNITYSDK_OFFSET(0x1E4B45E0)
#define MOLEMOLE_TIMELINE_MESHRENDERERBEHAVIOR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x1E4B4B90)
#define MOLEMOLE_TIMELINE_MESHRENDERERBEHAVIOR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1E4B4920)
#define MOLEMOLE_TIMELINE_MESHRENDERERBEHAVIOR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1E4B4CB0)
#define MOLEMOLE_TIMELINE_MESHRENDERERBEHAVIOR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1E4B4A50)
#define MOLEMOLE_TIMELINE_MESHRENDERERBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1E4B4DD0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int MeshRendererBehavior_TypeDefinitionIndex = 32209;

	class MeshRendererBehavior : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::MoleMole::Timeline::RealMeshRendererParams* MeshRendererParams; // 0x10
		::UnityEngine::GameObject* refGameObject; // 0x18
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::MoleMole::Timeline::RealMeshRendererParams*>* MeshRendererParamsMap; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MESHRENDERERBEHAVIOR__CTOR_OFFSET))(this);
		}

		::System::Void InitData(::UnityEngine::GameObject* refGameObject)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MESHRENDERERBEHAVIOR_INITDATA_OFFSET))(this, refGameObject);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MESHRENDERERBEHAVIOR_ONBEHAVIOURPLAY_OFFSET))(this, playable, info);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::System::Object* playerData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MESHRENDERERBEHAVIOR_PROCESSFRAME_OFFSET))(this, playable, info, playerData);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MESHRENDERERBEHAVIOR_ONBEHAVIOURPAUSE_OFFSET))(this, playable, info);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable playable)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MESHRENDERERBEHAVIOR_ONPLAYABLEDESTROY_OFFSET))(this, playable);
		}
	};
}
