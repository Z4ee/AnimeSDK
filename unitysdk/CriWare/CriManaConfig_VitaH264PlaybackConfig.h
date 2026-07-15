#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CRIWARE_CRIMANACONFIG_VITAH264PLAYBACKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE6DF70)

namespace CriWare
{
	inline static constexpr unsigned int CriManaConfig_VitaH264PlaybackConfig_TypeDefinitionIndex = 38016;

	class CriManaConfig_VitaH264PlaybackConfig : public ::System::Object
	{
	public:
		::System::Boolean useH264Playback; // 0x10
		::System::Int32 maxWidth; // 0x14
		::System::Int32 maxHeight; // 0x18
		::System::Boolean getMemoryFromTexture; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANACONFIG_VITAH264PLAYBACKCONFIG__CTOR_OFFSET))(this);
		}
	};
}
