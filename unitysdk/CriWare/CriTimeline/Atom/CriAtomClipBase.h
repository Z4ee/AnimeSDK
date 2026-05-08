#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace CriWare { class CriAtomExAcb; }
namespace CriWare { class CriAtomSourceBase; }
namespace CriWare::CriTimeline::Atom { class CriAtomBehaviour; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CRIWARE_CRITIMELINE_ATOM_CRIATOMCLIPBASE_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1C334CC0)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMCLIPBASE_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1C334CB0)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMCLIPBASE_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x1C334DB0)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMCLIPBASE_SETCLIPDURATION_OFFSET UNITYSDK_OFFSET(0x1C334DA0)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMCLIPBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C334DE0)

namespace CriWare::CriTimeline::Atom
{
	inline static constexpr unsigned int CriAtomClipBase_TypeDefinitionIndex = 32837;

	class CriAtomClipBase : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::Boolean stopWithoutRelease; // 0x18
		::System::Boolean muted; // 0x19
		::System::Boolean ignoreBlend; // 0x1A
		::System::Boolean loopWithinClip; // 0x1B
		::System::Boolean stopAtClipEnd; // 0x1C
		::CriWare::CriTimeline::Atom::CriAtomBehaviour* templateBehaviour; // 0x20
		::System::Double clipDuration; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMCLIPBASE__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMCLIPBASE_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* owner)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMCLIPBASE_CREATEPLAYABLE_OFFSET))(this, graph, owner);
		}

		::System::Void SetClipDuration(::System::Double clipDuration)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMCLIPBASE_SETCLIPDURATION_OFFSET))(this, clipDuration);
		}

		::System::Double get_duration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMCLIPBASE_GET_DURATION_OFFSET))(this);
		}
	};
}
