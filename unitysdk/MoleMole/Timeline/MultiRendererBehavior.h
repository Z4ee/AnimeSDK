#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace MoleMole::Timeline { class RealMeshRendererParams; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Renderer; }

#define MOLEMOLE_TIMELINE_MULTIRENDERERBEHAVIOR_INITDATA_OFFSET UNITYSDK_OFFSET(0x1F242550)
#define MOLEMOLE_TIMELINE_MULTIRENDERERBEHAVIOR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x1F242DC0)
#define MOLEMOLE_TIMELINE_MULTIRENDERERBEHAVIOR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1F242B50)
#define MOLEMOLE_TIMELINE_MULTIRENDERERBEHAVIOR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1F242EE0)
#define MOLEMOLE_TIMELINE_MULTIRENDERERBEHAVIOR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1F242C80)
#define MOLEMOLE_TIMELINE_MULTIRENDERERBEHAVIOR_SELECTREFERENCES_OFFSET UNITYSDK_OFFSET(0x1F2422C0)
#define MOLEMOLE_TIMELINE_MULTIRENDERERBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1F243000)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int MultiRendererBehavior_TypeDefinitionIndex = 32843;

	class MultiRendererBehavior : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::MoleMole::Timeline::RealMeshRendererParams* MeshRendererParams; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* refGameObjects; // 0x18
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::MoleMole::Timeline::RealMeshRendererParams*>* MeshRendererParamsMap; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MULTIRENDERERBEHAVIOR__CTOR_OFFSET))(this);
		}

		::System::Void SelectReferences()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MULTIRENDERERBEHAVIOR_SELECTREFERENCES_OFFSET))(this);
		}

		::System::Void InitData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MULTIRENDERERBEHAVIOR_INITDATA_OFFSET))(this);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MULTIRENDERERBEHAVIOR_ONBEHAVIOURPLAY_OFFSET))(this, playable, info);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::System::Object* playerData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MULTIRENDERERBEHAVIOR_PROCESSFRAME_OFFSET))(this, playable, info, playerData);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MULTIRENDERERBEHAVIOR_ONBEHAVIOURPAUSE_OFFSET))(this, playable, info);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable playable)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MULTIRENDERERBEHAVIOR_ONPLAYABLEDESTROY_OFFSET))(this, playable);
		}
	};
}
