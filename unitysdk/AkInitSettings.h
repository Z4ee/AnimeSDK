#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkFloorPlane.h"
#include "unitysdk/System/Object.h"

class AkOutputSettings;
namespace System { class String; }

#define AKINITSETTINGS_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1B43A0D0)
#define AKINITSETTINGS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B439FB0)
#define AKINITSETTINGS_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B43A060)
#define AKINITSETTINGS_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1B439E70)
#define AKINITSETTINGS_GET_BDEBUGOUTOFRANGECHECKENABLED_OFFSET UNITYSDK_OFFSET(0x1B43AF10)
#define AKINITSETTINGS_GET_BENABLEGAMESYNCPREPARATION_OFFSET UNITYSDK_OFFSET(0x1B43A410)
#define AKINITSETTINGS_GET_BUSELENGINETHREAD_OFFSET UNITYSDK_OFFSET(0x1B43AAD0)
#define AKINITSETTINGS_GET_BUSESOUNDBANKMGRTHREAD_OFFSET UNITYSDK_OFFSET(0x1B43A960)
#define AKINITSETTINGS_GET_EFLOORPLANE_OFFSET UNITYSDK_OFFSET(0x1B43AC40)
#define AKINITSETTINGS_GET_FDEBUGOUTOFRANGELIMIT_OFFSET UNITYSDK_OFFSET(0x1B43AE60)
#define AKINITSETTINGS_GET_SETTINGSMAINOUTPUT_OFFSET UNITYSDK_OFFSET(0x1B428C20)
#define AKINITSETTINGS_GET_SZPLUGINDLLPATH_OFFSET UNITYSDK_OFFSET(0x1B428DD0)
#define AKINITSETTINGS_GET_UBANKREADBUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x1B43ADB0)
#define AKINITSETTINGS_GET_UCOMMANDQUEUESIZE_OFFSET UNITYSDK_OFFSET(0x1B43A360)
#define AKINITSETTINGS_GET_UCONTINUOUSPLAYBACKLOOKAHEAD_OFFSET UNITYSDK_OFFSET(0x1B43A4C0)
#define AKINITSETTINGS_GET_UMAXHARDWARETIMEOUTMS_OFFSET UNITYSDK_OFFSET(0x1B43A7F0)
#define AKINITSETTINGS_GET_UMAXNUMPATHS_OFFSET UNITYSDK_OFFSET(0x1B43A2B0)
#define AKINITSETTINGS_GET_UMONITORQUEUEPOOLSIZE_OFFSET UNITYSDK_OFFSET(0x1B43A620)
#define AKINITSETTINGS_GET_UNUMSAMPLESPERFRAME_OFFSET UNITYSDK_OFFSET(0x1B43A570)
#define AKINITSETTINGS_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1B439EC0)
#define AKINITSETTINGS_SET_BDEBUGOUTOFRANGECHECKENABLED_OFFSET UNITYSDK_OFFSET(0x1B425A20)
#define AKINITSETTINGS_SET_BENABLEGAMESYNCPREPARATION_OFFSET UNITYSDK_OFFSET(0x1B425720)
#define AKINITSETTINGS_SET_BUSELENGINETHREAD_OFFSET UNITYSDK_OFFSET(0x1B43AA10)
#define AKINITSETTINGS_SET_BUSESOUNDBANKMGRTHREAD_OFFSET UNITYSDK_OFFSET(0x1B43A8A0)
#define AKINITSETTINGS_SET_EFLOORPLANE_OFFSET UNITYSDK_OFFSET(0x1B43AB80)
#define AKINITSETTINGS_SET_FDEBUGOUTOFRANGELIMIT_OFFSET UNITYSDK_OFFSET(0x1B425AE0)
#define AKINITSETTINGS_SET_SETTINGSMAINOUTPUT_OFFSET UNITYSDK_OFFSET(0x1B43A6D0)
#define AKINITSETTINGS_SET_SZPLUGINDLLPATH_OFFSET UNITYSDK_OFFSET(0x1B428D10)
#define AKINITSETTINGS_SET_UBANKREADBUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x1B43ACF0)
#define AKINITSETTINGS_SET_UCOMMANDQUEUESIZE_OFFSET UNITYSDK_OFFSET(0x1B428AA0)
#define AKINITSETTINGS_SET_UCONTINUOUSPLAYBACKLOOKAHEAD_OFFSET UNITYSDK_OFFSET(0x1B4257E0)
#define AKINITSETTINGS_SET_UMAXHARDWARETIMEOUTMS_OFFSET UNITYSDK_OFFSET(0x1B425960)
#define AKINITSETTINGS_SET_UMAXNUMPATHS_OFFSET UNITYSDK_OFFSET(0x1B4289E0)
#define AKINITSETTINGS_SET_UMONITORQUEUEPOOLSIZE_OFFSET UNITYSDK_OFFSET(0x1B4258A0)
#define AKINITSETTINGS_SET_UNUMSAMPLESPERFRAME_OFFSET UNITYSDK_OFFSET(0x1B428B60)
#define AKINITSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B439E60)

inline static constexpr unsigned int AkInitSettings_TypeDefinitionIndex = 41128;

class AkInitSettings : public ::System::Object
{
public:
	::System::Boolean swigCMemOwn; // 0x10
	::System::IntPtr swigCPtr; // 0x18

	::System::Void _ctor(::System::IntPtr a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKINITSETTINGS__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::IntPtr getCPtr(::AkInitSettings* a1)
	{
		return ((::System::IntPtr(*)(::AkInitSettings*))((::PBYTE)hIl2Cpp + AKINITSETTINGS_GETCPTR_OFFSET))(a1);
	}

	::System::Void setCPtr(::System::IntPtr a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKINITSETTINGS_SETCPTR_OFFSET))(this, a1);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITSETTINGS_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITSETTINGS_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKINITSETTINGS_DISPOSE_1_OFFSET))(this, a1);
	}

	::System::Void set_uMaxNumPaths(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKINITSETTINGS_SET_UMAXNUMPATHS_OFFSET))(this, a1);
	}

	::System::UInt32 get_uMaxNumPaths()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITSETTINGS_GET_UMAXNUMPATHS_OFFSET))(this);
	}

	::System::Void set_uCommandQueueSize(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKINITSETTINGS_SET_UCOMMANDQUEUESIZE_OFFSET))(this, a1);
	}

	::System::UInt32 get_uCommandQueueSize()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITSETTINGS_GET_UCOMMANDQUEUESIZE_OFFSET))(this);
	}

	::System::Void set_bEnableGameSyncPreparation(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKINITSETTINGS_SET_BENABLEGAMESYNCPREPARATION_OFFSET))(this, a1);
	}

	::System::Boolean get_bEnableGameSyncPreparation()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITSETTINGS_GET_BENABLEGAMESYNCPREPARATION_OFFSET))(this);
	}

	::System::Void set_uContinuousPlaybackLookAhead(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKINITSETTINGS_SET_UCONTINUOUSPLAYBACKLOOKAHEAD_OFFSET))(this, a1);
	}

	::System::UInt32 get_uContinuousPlaybackLookAhead()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITSETTINGS_GET_UCONTINUOUSPLAYBACKLOOKAHEAD_OFFSET))(this);
	}

	::System::Void set_uNumSamplesPerFrame(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKINITSETTINGS_SET_UNUMSAMPLESPERFRAME_OFFSET))(this, a1);
	}

	::System::UInt32 get_uNumSamplesPerFrame()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITSETTINGS_GET_UNUMSAMPLESPERFRAME_OFFSET))(this);
	}

	::System::Void set_uMonitorQueuePoolSize(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKINITSETTINGS_SET_UMONITORQUEUEPOOLSIZE_OFFSET))(this, a1);
	}

	::System::UInt32 get_uMonitorQueuePoolSize()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITSETTINGS_GET_UMONITORQUEUEPOOLSIZE_OFFSET))(this);
	}

	::System::Void set_settingsMainOutput(::AkOutputSettings* a1)
	{
		return ((::System::Void(*)(::PVOID, ::AkOutputSettings*))((::PBYTE)hIl2Cpp + AKINITSETTINGS_SET_SETTINGSMAINOUTPUT_OFFSET))(this, a1);
	}

	::AkOutputSettings* get_settingsMainOutput()
	{
		return ((::AkOutputSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITSETTINGS_GET_SETTINGSMAINOUTPUT_OFFSET))(this);
	}

	::System::Void set_uMaxHardwareTimeoutMs(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKINITSETTINGS_SET_UMAXHARDWARETIMEOUTMS_OFFSET))(this, a1);
	}

	::System::UInt32 get_uMaxHardwareTimeoutMs()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITSETTINGS_GET_UMAXHARDWARETIMEOUTMS_OFFSET))(this);
	}

	::System::Void set_bUseSoundBankMgrThread(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKINITSETTINGS_SET_BUSESOUNDBANKMGRTHREAD_OFFSET))(this, a1);
	}

	::System::Boolean get_bUseSoundBankMgrThread()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITSETTINGS_GET_BUSESOUNDBANKMGRTHREAD_OFFSET))(this);
	}

	::System::Void set_bUseLEngineThread(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKINITSETTINGS_SET_BUSELENGINETHREAD_OFFSET))(this, a1);
	}

	::System::Boolean get_bUseLEngineThread()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITSETTINGS_GET_BUSELENGINETHREAD_OFFSET))(this);
	}

	::System::Void set_szPluginDLLPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AKINITSETTINGS_SET_SZPLUGINDLLPATH_OFFSET))(this, a1);
	}

	::System::String* get_szPluginDLLPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITSETTINGS_GET_SZPLUGINDLLPATH_OFFSET))(this);
	}

	::System::Void set_eFloorPlane(::AkFloorPlane a1)
	{
		return ((::System::Void(*)(::PVOID, ::AkFloorPlane))((::PBYTE)hIl2Cpp + AKINITSETTINGS_SET_EFLOORPLANE_OFFSET))(this, a1);
	}

	::AkFloorPlane get_eFloorPlane()
	{
		return ((::AkFloorPlane(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITSETTINGS_GET_EFLOORPLANE_OFFSET))(this);
	}

	::System::Void set_uBankReadBufferSize(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKINITSETTINGS_SET_UBANKREADBUFFERSIZE_OFFSET))(this, a1);
	}

	::System::UInt32 get_uBankReadBufferSize()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITSETTINGS_GET_UBANKREADBUFFERSIZE_OFFSET))(this);
	}

	::System::Void set_fDebugOutOfRangeLimit(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKINITSETTINGS_SET_FDEBUGOUTOFRANGELIMIT_OFFSET))(this, a1);
	}

	::System::Single get_fDebugOutOfRangeLimit()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITSETTINGS_GET_FDEBUGOUTOFRANGELIMIT_OFFSET))(this);
	}

	::System::Void set_bDebugOutOfRangeCheckEnabled(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKINITSETTINGS_SET_BDEBUGOUTOFRANGECHECKENABLED_OFFSET))(this, a1);
	}

	::System::Boolean get_bDebugOutOfRangeCheckEnabled()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITSETTINGS_GET_BDEBUGOUTOFRANGECHECKENABLED_OFFSET))(this);
	}
};
