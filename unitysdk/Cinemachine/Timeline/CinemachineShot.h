#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ExposedReference_1.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Timeline { class IPropertyCollector; }

#define CINEMACHINE_TIMELINE_CINEMACHINESHOT_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1EF0D7D0)
#define CINEMACHINE_TIMELINE_CINEMACHINESHOT_GATHERPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1EF0D900)
#define CINEMACHINE_TIMELINE_CINEMACHINESHOT__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF0DA10)

namespace Cinemachine::Timeline
{
	inline static constexpr unsigned int CinemachineShot_TypeDefinitionIndex = 38584;

	class CinemachineShot : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::String* DisplayName; // 0x18
		::UnityEngine::ExposedReference_1<::Cinemachine::CinemachineVirtualCameraBase*> VirtualCamera; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_TIMELINE_CINEMACHINESHOT__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CINEMACHINE_TIMELINE_CINEMACHINESHOT_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::System::Void GatherProperties(::UnityEngine::Playables::PlayableDirector* a1, ::UnityEngine::Timeline::IPropertyCollector* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Timeline::IPropertyCollector*))((::PBYTE)hIl2Cpp + CINEMACHINE_TIMELINE_CINEMACHINESHOT_GATHERPROPERTIES_OFFSET))(this, a1, a2);
		}
	};
}
