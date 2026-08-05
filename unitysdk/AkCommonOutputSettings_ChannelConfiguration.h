#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCommonOutputSettings_ChannelConfiguration_ChannelConfigType.h"
#include "unitysdk/AkCommonOutputSettings_ChannelConfiguration_ChannelMask.h"
#include "unitysdk/System/Object.h"

class AkChannelConfig;

#define AKCOMMONOUTPUTSETTINGS_CHANNELCONFIGURATION_COPYTO_OFFSET UNITYSDK_OFFSET(0x1FAF8250)
#define AKCOMMONOUTPUTSETTINGS_CHANNELCONFIGURATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1FAF8400)

inline static constexpr unsigned int AkCommonOutputSettings_ChannelConfiguration_TypeDefinitionIndex = 33695;

class AkCommonOutputSettings_ChannelConfiguration : public ::System::Object
{
public:
	::AkCommonOutputSettings_ChannelConfiguration_ChannelConfigType m_ChannelConfigType; // 0x10
	::AkCommonOutputSettings_ChannelConfiguration_ChannelMask m_ChannelMask; // 0x14
	::System::UInt32 m_NumberOfChannels; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCOMMONOUTPUTSETTINGS_CHANNELCONFIGURATION__CTOR_OFFSET))(this);
	}

	::System::Void CopyTo(::AkChannelConfig* config)
	{
		return ((::System::Void(*)(::PVOID, ::AkChannelConfig*))((::PBYTE)hIl2Cpp + AKCOMMONOUTPUTSETTINGS_CHANNELCONFIGURATION_COPYTO_OFFSET))(this, config);
	}
};
