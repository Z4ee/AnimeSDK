#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkPanningRule.h"
#include "unitysdk/System/Object.h"

class AkChannelConfig;
namespace System { class String; }

#define AKOUTPUTSETTINGS_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1FB780D0)
#define AKOUTPUTSETTINGS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1FB77FB0)
#define AKOUTPUTSETTINGS_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1FB78060)
#define AKOUTPUTSETTINGS_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1FB77EF0)
#define AKOUTPUTSETTINGS_GET_AUDIODEVICESHARESET_OFFSET UNITYSDK_OFFSET(0x1FB78690)
#define AKOUTPUTSETTINGS_GET_CHANNELCONFIG_OFFSET UNITYSDK_OFFSET(0x1FB789B0)
#define AKOUTPUTSETTINGS_GET_EPANNINGRULE_OFFSET UNITYSDK_OFFSET(0x1FB78890)
#define AKOUTPUTSETTINGS_GET_IDDEVICE_OFFSET UNITYSDK_OFFSET(0x1FB78790)
#define AKOUTPUTSETTINGS_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1FB77F00)
#define AKOUTPUTSETTINGS_SET_AUDIODEVICESHARESET_OFFSET UNITYSDK_OFFSET(0x1FB78610)
#define AKOUTPUTSETTINGS_SET_CHANNELCONFIG_OFFSET UNITYSDK_OFFSET(0x1FB78910)
#define AKOUTPUTSETTINGS_SET_EPANNINGRULE_OFFSET UNITYSDK_OFFSET(0x1FB78810)
#define AKOUTPUTSETTINGS_SET_IDDEVICE_OFFSET UNITYSDK_OFFSET(0x1FB78710)
#define AKOUTPUTSETTINGS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FB78280)
#define AKOUTPUTSETTINGS__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1FB78300)
#define AKOUTPUTSETTINGS__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1FB783E0)
#define AKOUTPUTSETTINGS__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1FB784B0)
#define AKOUTPUTSETTINGS__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1FB78560)
#define AKOUTPUTSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB77EE0)

inline static constexpr unsigned int AkOutputSettings_TypeDefinitionIndex = 33634;

class AkOutputSettings : public ::System::Object
{
public:
	::System::IntPtr swigCPtr; // 0x10
	::System::Boolean swigCMemOwn; // 0x18

	::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKOUTPUTSETTINGS__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOUTPUTSETTINGS__CTOR_1_OFFSET))(this);
	}

	::System::Void _ctor_2(::System::String* in_szDeviceShareSet, ::System::UInt32 in_idDevice, ::AkChannelConfig* in_channelConfig, ::AkPanningRule in_ePanning)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32, ::AkChannelConfig*, ::AkPanningRule))((::PBYTE)hIl2Cpp + AKOUTPUTSETTINGS__CTOR_2_OFFSET))(this, in_szDeviceShareSet, in_idDevice, in_channelConfig, in_ePanning);
	}

	::System::Void _ctor_3(::System::String* in_szDeviceShareSet, ::System::UInt32 in_idDevice, ::AkChannelConfig* in_channelConfig)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32, ::AkChannelConfig*))((::PBYTE)hIl2Cpp + AKOUTPUTSETTINGS__CTOR_3_OFFSET))(this, in_szDeviceShareSet, in_idDevice, in_channelConfig);
	}

	::System::Void _ctor_4(::System::String* in_szDeviceShareSet, ::System::UInt32 in_idDevice)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + AKOUTPUTSETTINGS__CTOR_4_OFFSET))(this, in_szDeviceShareSet, in_idDevice);
	}

	::System::Void _ctor_5(::System::String* in_szDeviceShareSet)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AKOUTPUTSETTINGS__CTOR_5_OFFSET))(this, in_szDeviceShareSet);
	}

	static ::System::IntPtr getCPtr(::AkOutputSettings* obj)
	{
		return ((::System::IntPtr(*)(::AkOutputSettings*))((::PBYTE)hIl2Cpp + AKOUTPUTSETTINGS_GETCPTR_OFFSET))(obj);
	}

	::System::Void setCPtr(::System::IntPtr cPtr)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKOUTPUTSETTINGS_SETCPTR_OFFSET))(this, cPtr);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOUTPUTSETTINGS_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOUTPUTSETTINGS_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean disposing)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKOUTPUTSETTINGS_DISPOSE_1_OFFSET))(this, disposing);
	}

	::System::Void set_audioDeviceShareset(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKOUTPUTSETTINGS_SET_AUDIODEVICESHARESET_OFFSET))(this, value);
	}

	::System::UInt32 get_audioDeviceShareset()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOUTPUTSETTINGS_GET_AUDIODEVICESHARESET_OFFSET))(this);
	}

	::System::Void set_idDevice(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKOUTPUTSETTINGS_SET_IDDEVICE_OFFSET))(this, value);
	}

	::System::UInt32 get_idDevice()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOUTPUTSETTINGS_GET_IDDEVICE_OFFSET))(this);
	}

	::System::Void set_ePanningRule(::AkPanningRule value)
	{
		return ((::System::Void(*)(::PVOID, ::AkPanningRule))((::PBYTE)hIl2Cpp + AKOUTPUTSETTINGS_SET_EPANNINGRULE_OFFSET))(this, value);
	}

	::AkPanningRule get_ePanningRule()
	{
		return ((::AkPanningRule(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOUTPUTSETTINGS_GET_EPANNINGRULE_OFFSET))(this);
	}

	::System::Void set_channelConfig(::AkChannelConfig* value)
	{
		return ((::System::Void(*)(::PVOID, ::AkChannelConfig*))((::PBYTE)hIl2Cpp + AKOUTPUTSETTINGS_SET_CHANNELCONFIG_OFFSET))(this, value);
	}

	::AkChannelConfig* get_channelConfig()
	{
		return ((::AkChannelConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOUTPUTSETTINGS_GET_CHANNELCONFIG_OFFSET))(this);
	}
};
