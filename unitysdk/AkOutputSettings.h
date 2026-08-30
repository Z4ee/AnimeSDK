#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkPanningRule.h"
#include "unitysdk/System/Object.h"

class AkChannelConfig;
namespace System { class String; }

#define AKOUTPUTSETTINGS_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1EEE40E0)
#define AKOUTPUTSETTINGS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EEE3EF0)
#define AKOUTPUTSETTINGS_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1EEE4010)
#define AKOUTPUTSETTINGS_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1EEE3E40)
#define AKOUTPUTSETTINGS_GET_AUDIODEVICESHARESET_OFFSET UNITYSDK_OFFSET(0x1EEE47E0)
#define AKOUTPUTSETTINGS_GET_CHANNELCONFIG_OFFSET UNITYSDK_OFFSET(0x1EEE4C90)
#define AKOUTPUTSETTINGS_GET_EPANNINGRULE_OFFSET UNITYSDK_OFFSET(0x1EEE4AC0)
#define AKOUTPUTSETTINGS_GET_IDDEVICE_OFFSET UNITYSDK_OFFSET(0x1EEE4950)
#define AKOUTPUTSETTINGS_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1EEE3E90)
#define AKOUTPUTSETTINGS_SET_AUDIODEVICESHARESET_OFFSET UNITYSDK_OFFSET(0x1EEE4720)
#define AKOUTPUTSETTINGS_SET_CHANNELCONFIG_OFFSET UNITYSDK_OFFSET(0x1EEE4B70)
#define AKOUTPUTSETTINGS_SET_EPANNINGRULE_OFFSET UNITYSDK_OFFSET(0x1EEE4A00)
#define AKOUTPUTSETTINGS_SET_IDDEVICE_OFFSET UNITYSDK_OFFSET(0x1EEE4890)
#define AKOUTPUTSETTINGS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EEE42C0)
#define AKOUTPUTSETTINGS__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1EEE4340)
#define AKOUTPUTSETTINGS__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1EEE4490)
#define AKOUTPUTSETTINGS__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1EEE45C0)
#define AKOUTPUTSETTINGS__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1EEE4670)
#define AKOUTPUTSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEE3E30)

inline static constexpr unsigned int AkOutputSettings_TypeDefinitionIndex = 43580;

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
