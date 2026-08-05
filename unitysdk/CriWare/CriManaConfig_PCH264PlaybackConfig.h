#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CRIWARE_CRIMANACONFIG_PCH264PLAYBACKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1F4D6640)

namespace CriWare
{
	inline static constexpr unsigned int CriManaConfig_PCH264PlaybackConfig_TypeDefinitionIndex = 35018;

	class CriManaConfig_PCH264PlaybackConfig : public ::System::Object
	{
	public:
		::System::Boolean useH264Playback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANACONFIG_PCH264PLAYBACKCONFIG__CTOR_OFFSET))(this);
		}
	};
}
