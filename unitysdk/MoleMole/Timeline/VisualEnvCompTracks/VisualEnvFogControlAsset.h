#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

class WeatherConfig;
namespace MoleMole::Timeline::VisualEnvCompTracks { class VisualEnvFogControlBehavior; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVFOGCONTROLASSET_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x183A6380)
#define MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVFOGCONTROLASSET_METHOD_4_2F2C11EE837C55A9_OFFSET UNITYSDK_OFFSET(0x183A6560)
#define MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVFOGCONTROLASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x183A64D0)

namespace MoleMole::Timeline::VisualEnvCompTracks
{
	inline static constexpr unsigned int VisualEnvFogControlAsset_TypeDefinitionIndex = 86249;

	class VisualEnvFogControlAsset : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::MoleMole::Timeline::VisualEnvCompTracks::VisualEnvFogControlBehavior* FogControlBehavior; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVFOGCONTROLASSET__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVFOGCONTROLASSET_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_2F2C11EE837C55A9(::WeatherConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::WeatherConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVFOGCONTROLASSET_METHOD_4_2F2C11EE837C55A9_OFFSET))(this, a1);
		}
	};
}
