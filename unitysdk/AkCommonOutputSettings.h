#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCommonOutputSettings_PanningRule.h"
#include "unitysdk/System/Object.h"

class AkCommonOutputSettings_ChannelConfiguration;
class AkOutputSettings;
namespace System { class String; }

#define AKCOMMONOUTPUTSETTINGS_COPYTO_OFFSET UNITYSDK_OFFSET(0x1E7128D0)
#define AKCOMMONOUTPUTSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E712E10)

inline static constexpr unsigned int AkCommonOutputSettings_TypeDefinitionIndex = 33058;

class AkCommonOutputSettings : public ::System::Object
{
public:
	::System::String* m_AudioDeviceShareset; // 0x10
	::System::UInt32 m_DeviceID; // 0x18
	::AkCommonOutputSettings_PanningRule m_PanningRule; // 0x1C
	::AkCommonOutputSettings_ChannelConfiguration* m_ChannelConfig; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCOMMONOUTPUTSETTINGS__CTOR_OFFSET))(this);
	}

	::System::Void CopyTo(::AkOutputSettings* settings)
	{
		return ((::System::Void(*)(::PVOID, ::AkOutputSettings*))((::PBYTE)hIl2Cpp + AKCOMMONOUTPUTSETTINGS_COPYTO_OFFSET))(this, settings);
	}
};
