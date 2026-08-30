#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }

#define RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDCLIP_BACKGROUNDSWITCHCONFIG_METHOD_1_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x1BF356B0)
#define RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDCLIP_BACKGROUNDSWITCHCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF35DA0)

namespace RPGTools::Timeline::VFX
{
	inline static constexpr unsigned int VFXOverlayCharacterBackgroundClip_BackgroundSwitchConfig_TypeDefinitionIndex = 49127;

	class VFXOverlayCharacterBackgroundClip_BackgroundSwitchConfig : public ::System::Object
	{
	public:
		::System::Double StartTime; // 0x10
		::UnityEngine::Color BackgroundColor; // 0x18
		::System::Boolean IsPlayerInvolved; // 0x28
		::System::String* TexturePath; // 0x30
		::System::String* TexturePathMale; // 0x38
		::System::String* TexturePathFemale; // 0x40
		::System::Single FadeInDuration; // 0x48
		::System::Boolean _IsNotFirst; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDCLIP_BACKGROUNDSWITCHCONFIG__CTOR_OFFSET))(this);
		}

		::System::String* Method_1_35EA095E1AFDD9C8()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDCLIP_BACKGROUNDSWITCHCONFIG_METHOD_1_35EA095E1AFDD9C8_OFFSET))(this);
		}
	};
}
