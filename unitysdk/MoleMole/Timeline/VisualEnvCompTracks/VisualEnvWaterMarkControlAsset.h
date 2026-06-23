#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

class WeatherConfig;
namespace MoleMole::Timeline::VisualEnvCompTracks { class VisualEnvWaterMarkControlBehavior; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVWATERMARKCONTROLASSET_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x18D22F80)
#define MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVWATERMARKCONTROLASSET_METHOD_4_2F2C11EE837C55A9_OFFSET UNITYSDK_OFFSET(0x18D23160)
#define MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVWATERMARKCONTROLASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x18D230D0)

namespace MoleMole::Timeline::VisualEnvCompTracks
{
	inline static constexpr unsigned int VisualEnvWaterMarkControlAsset_TypeDefinitionIndex = 81923;

	class VisualEnvWaterMarkControlAsset : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::MoleMole::Timeline::VisualEnvCompTracks::VisualEnvWaterMarkControlBehavior* WaterMarkControlBehavior; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVWATERMARKCONTROLASSET__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVWATERMARKCONTROLASSET_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_2F2C11EE837C55A9(::WeatherConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::WeatherConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVWATERMARKCONTROLASSET_METHOD_4_2F2C11EE837C55A9_OFFSET))(this, a1);
		}
	};
}
