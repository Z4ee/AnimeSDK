#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace CriWare { class CriAtomExAcb; }
namespace CriWare { class CriAtomSourceBase; }
namespace System { class String; }

#define CRIWARE_CRITIMELINE_ATOM_CRIATOMCLIPBASE_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1FA83960)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMCLIPBASE_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x1FA83980)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMCLIPBASE_SETCLIPDURATION_OFFSET UNITYSDK_OFFSET(0x1FA83970)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMCLIPBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FA839B0)

namespace CriWare::CriTimeline::Atom
{
	inline static constexpr unsigned int CriAtomClipBase_TypeDefinitionIndex = 35041;

	class CriAtomClipBase : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::Boolean stopWithoutRelease; // 0x18
		::System::Boolean muted; // 0x19
		::System::Boolean ignoreBlend; // 0x1A
		::System::Boolean loopWithinClip; // 0x1B
		::System::Boolean stopAtClipEnd; // 0x1C
		::System::Double clipDuration; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMCLIPBASE__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMCLIPBASE_GET_CLIPCAPS_OFFSET))(this);
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
