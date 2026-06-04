#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }

#define RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDCLIP_BACKGROUNDSWITCHCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xD06D1F0)

namespace RPGTools::Timeline::VFX
{
	inline static constexpr unsigned int VFXOverlayCharacterBackgroundClip_BackgroundSwitchConfig_TypeDefinitionIndex = 45942;

	class VFXOverlayCharacterBackgroundClip_BackgroundSwitchConfig : public ::System::Object
	{
	public:
		::System::Double StartTime; // 0x10
		::UnityEngine::Color BackgroundColor; // 0x18
		::System::String* TexturePath; // 0x28
		::System::Single FadeInDuration; // 0x30
		::System::Boolean _IsNotFirst; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDCLIP_BACKGROUNDSWITCHCONFIG__CTOR_OFFSET))(this);
		}
	};
}
