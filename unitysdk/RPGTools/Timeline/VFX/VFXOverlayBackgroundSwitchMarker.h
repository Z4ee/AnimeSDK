#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/Marker.h"

namespace RPGTools::Timeline::VFX { class VFXOverlayCharacterBackgroundClip; }

#define RPGTOOLS_TIMELINE_VFX_VFXOVERLAYBACKGROUNDSWITCHMARKER__CTOR_OFFSET UNITYSDK_OFFSET(0xE8FD6E0)

namespace RPGTools::Timeline::VFX
{
	inline static constexpr unsigned int VFXOverlayBackgroundSwitchMarker_TypeDefinitionIndex = 49119;

	class VFXOverlayBackgroundSwitchMarker : public ::UnityEngine::Timeline::Marker
	{
	public:
		::RPGTools::Timeline::VFX::VFXOverlayCharacterBackgroundClip* ClipAsset; // 0x28
		::System::Int32 SwitchIndex; // 0x30
		::System::Double LocalStartTime; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXOVERLAYBACKGROUNDSWITCHMARKER__CTOR_OFFSET))(this);
		}
	};
}
