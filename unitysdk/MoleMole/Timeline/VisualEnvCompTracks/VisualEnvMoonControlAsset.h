#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

class WeatherConfig;
namespace MoleMole::Timeline::VisualEnvCompTracks { class VisualEnvMoonControlBehavior; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVMOONCONTROLASSET_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x12380200)
#define MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVMOONCONTROLASSET_METHOD_4_2F2C11EE837C55A9_OFFSET UNITYSDK_OFFSET(0x123803E0)
#define MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVMOONCONTROLASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x12380350)

namespace MoleMole::Timeline::VisualEnvCompTracks
{
	inline static constexpr unsigned int VisualEnvMoonControlAsset_TypeDefinitionIndex = 51531;

	class VisualEnvMoonControlAsset : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::MoleMole::Timeline::VisualEnvCompTracks::VisualEnvMoonControlBehavior* MoonControlBehavior; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVMOONCONTROLASSET__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVMOONCONTROLASSET_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_2F2C11EE837C55A9(::WeatherConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::WeatherConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVMOONCONTROLASSET_METHOD_4_2F2C11EE837C55A9_OFFSET))(this, a1);
		}
	};
}
