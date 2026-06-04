#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkAudioAPI.h"
#include "unitysdk/System/Object.h"

class AkThreadProperties;

#define AKPLATFORMINITSETTINGS_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1B44D210)
#define AKPLATFORMINITSETTINGS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B44D0F0)
#define AKPLATFORMINITSETTINGS_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B44D1A0)
#define AKPLATFORMINITSETTINGS_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1B44CFB0)
#define AKPLATFORMINITSETTINGS_GET_BENABLEAVXSUPPORT_OFFSET UNITYSDK_OFFSET(0x1B44E330)
#define AKPLATFORMINITSETTINGS_GET_BGLOBALFOCUS_OFFSET UNITYSDK_OFFSET(0x1B44E1C0)
#define AKPLATFORMINITSETTINGS_GET_EAUDIOAPI_OFFSET UNITYSDK_OFFSET(0x1B44E050)
#define AKPLATFORMINITSETTINGS_GET_THREADBANKMANAGER_OFFSET UNITYSDK_OFFSET(0x1B44D970)
#define AKPLATFORMINITSETTINGS_GET_THREADLENGINE_OFFSET UNITYSDK_OFFSET(0x1B44D510)
#define AKPLATFORMINITSETTINGS_GET_THREADMONITOR_OFFSET UNITYSDK_OFFSET(0x1B44DBA0)
#define AKPLATFORMINITSETTINGS_GET_THREADOUTPUTMGR_OFFSET UNITYSDK_OFFSET(0x1B44D740)
#define AKPLATFORMINITSETTINGS_GET_UNUMREFILLSINVOICE_OFFSET UNITYSDK_OFFSET(0x1B44DD70)
#define AKPLATFORMINITSETTINGS_GET_USAMPLERATE_OFFSET UNITYSDK_OFFSET(0x1B44DEE0)
#define AKPLATFORMINITSETTINGS_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1B44D000)
#define AKPLATFORMINITSETTINGS_SET_BENABLEAVXSUPPORT_OFFSET UNITYSDK_OFFSET(0x1B44E270)
#define AKPLATFORMINITSETTINGS_SET_BGLOBALFOCUS_OFFSET UNITYSDK_OFFSET(0x1B44E100)
#define AKPLATFORMINITSETTINGS_SET_EAUDIOAPI_OFFSET UNITYSDK_OFFSET(0x1B44DF90)
#define AKPLATFORMINITSETTINGS_SET_THREADBANKMANAGER_OFFSET UNITYSDK_OFFSET(0x1B44D850)
#define AKPLATFORMINITSETTINGS_SET_THREADLENGINE_OFFSET UNITYSDK_OFFSET(0x1B44D3F0)
#define AKPLATFORMINITSETTINGS_SET_THREADMONITOR_OFFSET UNITYSDK_OFFSET(0x1B44DA80)
#define AKPLATFORMINITSETTINGS_SET_THREADOUTPUTMGR_OFFSET UNITYSDK_OFFSET(0x1B44D620)
#define AKPLATFORMINITSETTINGS_SET_UNUMREFILLSINVOICE_OFFSET UNITYSDK_OFFSET(0x1B44DCB0)
#define AKPLATFORMINITSETTINGS_SET_USAMPLERATE_OFFSET UNITYSDK_OFFSET(0x1B44DE20)
#define AKPLATFORMINITSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B44CFA0)

inline static constexpr unsigned int AkPlatformInitSettings_TypeDefinitionIndex = 41180;

class AkPlatformInitSettings : public ::System::Object
{
public:
	::System::IntPtr swigCPtr; // 0x10
	::System::Boolean swigCMemOwn; // 0x18

	::System::Void _ctor(::System::IntPtr a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKPLATFORMINITSETTINGS__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::IntPtr getCPtr(::AkPlatformInitSettings* a1)
	{
		return ((::System::IntPtr(*)(::AkPlatformInitSettings*))((::PBYTE)hIl2Cpp + AKPLATFORMINITSETTINGS_GETCPTR_OFFSET))(a1);
	}

	::System::Void setCPtr(::System::IntPtr a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKPLATFORMINITSETTINGS_SETCPTR_OFFSET))(this, a1);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPLATFORMINITSETTINGS_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPLATFORMINITSETTINGS_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKPLATFORMINITSETTINGS_DISPOSE_1_OFFSET))(this, a1);
	}

	::System::Void set_threadLEngine(::AkThreadProperties* a1)
	{
		return ((::System::Void(*)(::PVOID, ::AkThreadProperties*))((::PBYTE)hIl2Cpp + AKPLATFORMINITSETTINGS_SET_THREADLENGINE_OFFSET))(this, a1);
	}

	::AkThreadProperties* get_threadLEngine()
	{
		return ((::AkThreadProperties*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPLATFORMINITSETTINGS_GET_THREADLENGINE_OFFSET))(this);
	}

	::System::Void set_threadOutputMgr(::AkThreadProperties* a1)
	{
		return ((::System::Void(*)(::PVOID, ::AkThreadProperties*))((::PBYTE)hIl2Cpp + AKPLATFORMINITSETTINGS_SET_THREADOUTPUTMGR_OFFSET))(this, a1);
	}

	::AkThreadProperties* get_threadOutputMgr()
	{
		return ((::AkThreadProperties*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPLATFORMINITSETTINGS_GET_THREADOUTPUTMGR_OFFSET))(this);
	}

	::System::Void set_threadBankManager(::AkThreadProperties* a1)
	{
		return ((::System::Void(*)(::PVOID, ::AkThreadProperties*))((::PBYTE)hIl2Cpp + AKPLATFORMINITSETTINGS_SET_THREADBANKMANAGER_OFFSET))(this, a1);
	}

	::AkThreadProperties* get_threadBankManager()
	{
		return ((::AkThreadProperties*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPLATFORMINITSETTINGS_GET_THREADBANKMANAGER_OFFSET))(this);
	}

	::System::Void set_threadMonitor(::AkThreadProperties* a1)
	{
		return ((::System::Void(*)(::PVOID, ::AkThreadProperties*))((::PBYTE)hIl2Cpp + AKPLATFORMINITSETTINGS_SET_THREADMONITOR_OFFSET))(this, a1);
	}

	::AkThreadProperties* get_threadMonitor()
	{
		return ((::AkThreadProperties*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPLATFORMINITSETTINGS_GET_THREADMONITOR_OFFSET))(this);
	}

	::System::Void set_uNumRefillsInVoice(::System::UInt16 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + AKPLATFORMINITSETTINGS_SET_UNUMREFILLSINVOICE_OFFSET))(this, a1);
	}

	::System::UInt16 get_uNumRefillsInVoice()
	{
		return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPLATFORMINITSETTINGS_GET_UNUMREFILLSINVOICE_OFFSET))(this);
	}

	::System::Void set_uSampleRate(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKPLATFORMINITSETTINGS_SET_USAMPLERATE_OFFSET))(this, a1);
	}

	::System::UInt32 get_uSampleRate()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPLATFORMINITSETTINGS_GET_USAMPLERATE_OFFSET))(this);
	}

	::System::Void set_eAudioAPI(::AkAudioAPI a1)
	{
		return ((::System::Void(*)(::PVOID, ::AkAudioAPI))((::PBYTE)hIl2Cpp + AKPLATFORMINITSETTINGS_SET_EAUDIOAPI_OFFSET))(this, a1);
	}

	::AkAudioAPI get_eAudioAPI()
	{
		return ((::AkAudioAPI(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPLATFORMINITSETTINGS_GET_EAUDIOAPI_OFFSET))(this);
	}

	::System::Void set_bGlobalFocus(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKPLATFORMINITSETTINGS_SET_BGLOBALFOCUS_OFFSET))(this, a1);
	}

	::System::Boolean get_bGlobalFocus()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPLATFORMINITSETTINGS_GET_BGLOBALFOCUS_OFFSET))(this);
	}

	::System::Void set_bEnableAvxSupport(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKPLATFORMINITSETTINGS_SET_BENABLEAVXSUPPORT_OFFSET))(this, a1);
	}

	::System::Boolean get_bEnableAvxSupport()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPLATFORMINITSETTINGS_GET_BENABLEAVXSUPPORT_OFFSET))(this);
	}
};
