#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkPanningRule.h"
#include "unitysdk/System/Object.h"

class AkChannelConfig;
namespace System { class String; }

#define AKOUTPUTSETTINGS_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1B44BCF0)
#define AKOUTPUTSETTINGS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B44BBD0)
#define AKOUTPUTSETTINGS_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B44BC80)
#define AKOUTPUTSETTINGS_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1B44BA90)
#define AKOUTPUTSETTINGS_GET_AUDIODEVICESHARESET_OFFSET UNITYSDK_OFFSET(0x1B44C3F0)
#define AKOUTPUTSETTINGS_GET_CHANNELCONFIG_OFFSET UNITYSDK_OFFSET(0x1B44C8A0)
#define AKOUTPUTSETTINGS_GET_EPANNINGRULE_OFFSET UNITYSDK_OFFSET(0x1B44C6D0)
#define AKOUTPUTSETTINGS_GET_IDDEVICE_OFFSET UNITYSDK_OFFSET(0x1B44C560)
#define AKOUTPUTSETTINGS_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1B44BAE0)
#define AKOUTPUTSETTINGS_SET_AUDIODEVICESHARESET_OFFSET UNITYSDK_OFFSET(0x1B44C330)
#define AKOUTPUTSETTINGS_SET_CHANNELCONFIG_OFFSET UNITYSDK_OFFSET(0x1B44C780)
#define AKOUTPUTSETTINGS_SET_EPANNINGRULE_OFFSET UNITYSDK_OFFSET(0x1B44C610)
#define AKOUTPUTSETTINGS_SET_IDDEVICE_OFFSET UNITYSDK_OFFSET(0x1B44C4A0)
#define AKOUTPUTSETTINGS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B44BED0)
#define AKOUTPUTSETTINGS__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1B44BF50)
#define AKOUTPUTSETTINGS__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1B44C0A0)
#define AKOUTPUTSETTINGS__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1B44C1D0)
#define AKOUTPUTSETTINGS__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1B44C280)
#define AKOUTPUTSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B44BA80)

inline static constexpr unsigned int AkOutputSettings_TypeDefinitionIndex = 41154;

class AkOutputSettings : public ::System::Object
{
public:
	::System::IntPtr swigCPtr; // 0x10
	::System::Boolean swigCMemOwn; // 0x18

	::System::Void _ctor(::System::IntPtr a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKOUTPUTSETTINGS__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOUTPUTSETTINGS__CTOR_1_OFFSET))(this);
	}

	::System::Void _ctor_2(::System::String* a1, ::System::UInt32 a2, ::AkChannelConfig* a3, ::AkPanningRule a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32, ::AkChannelConfig*, ::AkPanningRule))((::PBYTE)hIl2Cpp + AKOUTPUTSETTINGS__CTOR_2_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void _ctor_3(::System::String* a1, ::System::UInt32 a2, ::AkChannelConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32, ::AkChannelConfig*))((::PBYTE)hIl2Cpp + AKOUTPUTSETTINGS__CTOR_3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _ctor_4(::System::String* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + AKOUTPUTSETTINGS__CTOR_4_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_5(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AKOUTPUTSETTINGS__CTOR_5_OFFSET))(this, a1);
	}

	static ::System::IntPtr getCPtr(::AkOutputSettings* a1)
	{
		return ((::System::IntPtr(*)(::AkOutputSettings*))((::PBYTE)hIl2Cpp + AKOUTPUTSETTINGS_GETCPTR_OFFSET))(a1);
	}

	::System::Void setCPtr(::System::IntPtr a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKOUTPUTSETTINGS_SETCPTR_OFFSET))(this, a1);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOUTPUTSETTINGS_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOUTPUTSETTINGS_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKOUTPUTSETTINGS_DISPOSE_1_OFFSET))(this, a1);
	}

	::System::Void set_audioDeviceShareset(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKOUTPUTSETTINGS_SET_AUDIODEVICESHARESET_OFFSET))(this, a1);
	}

	::System::UInt32 get_audioDeviceShareset()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOUTPUTSETTINGS_GET_AUDIODEVICESHARESET_OFFSET))(this);
	}

	::System::Void set_idDevice(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKOUTPUTSETTINGS_SET_IDDEVICE_OFFSET))(this, a1);
	}

	::System::UInt32 get_idDevice()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOUTPUTSETTINGS_GET_IDDEVICE_OFFSET))(this);
	}

	::System::Void set_ePanningRule(::AkPanningRule a1)
	{
		return ((::System::Void(*)(::PVOID, ::AkPanningRule))((::PBYTE)hIl2Cpp + AKOUTPUTSETTINGS_SET_EPANNINGRULE_OFFSET))(this, a1);
	}

	::AkPanningRule get_ePanningRule()
	{
		return ((::AkPanningRule(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOUTPUTSETTINGS_GET_EPANNINGRULE_OFFSET))(this);
	}

	::System::Void set_channelConfig(::AkChannelConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::AkChannelConfig*))((::PBYTE)hIl2Cpp + AKOUTPUTSETTINGS_SET_CHANNELCONFIG_OFFSET))(this, a1);
	}

	::AkChannelConfig* get_channelConfig()
	{
		return ((::AkChannelConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOUTPUTSETTINGS_GET_CHANNELCONFIG_OFFSET))(this);
	}
};
