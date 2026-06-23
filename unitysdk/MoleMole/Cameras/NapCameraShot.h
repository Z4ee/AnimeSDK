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

#define MOLEMOLE_CAMERAS_NAPCAMERASHOT_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x16291530)
#define MOLEMOLE_CAMERAS_NAPCAMERASHOT_GATHERPROPERTIES_OFFSET UNITYSDK_OFFSET(0x16291730)
#define MOLEMOLE_CAMERAS_NAPCAMERASHOT__CTOR_OFFSET UNITYSDK_OFFSET(0x16291FE0)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int NapCameraShot_TypeDefinitionIndex = 54471;

	class NapCameraShot : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::String* DisplayName; // 0x18
		::UnityEngine::ExposedReference_1<::Cinemachine::CinemachineVirtualCameraBase*> VirtualCamera; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPCAMERASHOT__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPCAMERASHOT_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::System::Void GatherProperties(::UnityEngine::Playables::PlayableDirector* a1, ::UnityEngine::Timeline::IPropertyCollector* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Timeline::IPropertyCollector*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPCAMERASHOT_GATHERPROPERTIES_OFFSET))(this, a1, a2);
		}
	};
}
