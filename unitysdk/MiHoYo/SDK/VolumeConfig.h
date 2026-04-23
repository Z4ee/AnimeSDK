#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_VOLUMECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x176895C0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int VolumeConfig_TypeDefinitionIndex = 6627;

	class VolumeConfig : public ::System::Object
	{
	public:
		// static const ::System::String* AUDIO_EFFECTS_VOLUME; // 0x0
		// static const ::System::String* VOICE_VOLUME; // 0x0
		// static const ::System::String* BGM_VOLUME; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_VOLUMECONFIG__CTOR_OFFSET))(this);
		}
	};
}
