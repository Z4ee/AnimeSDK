#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkAudioAPI.h"
#include "unitysdk/System/Object.h"

class AkThreadProperties;

#define AKPLATFORMINITSETTINGS_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1A602950)
#define AKPLATFORMINITSETTINGS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A602860)
#define AKPLATFORMINITSETTINGS_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A6028E0)
#define AKPLATFORMINITSETTINGS_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1A602750)
#define AKPLATFORMINITSETTINGS_GET_BENABLEAVXSUPPORT_OFFSET UNITYSDK_OFFSET(0x1A603A30)
#define AKPLATFORMINITSETTINGS_GET_BGLOBALFOCUS_OFFSET UNITYSDK_OFFSET(0x1A6038C0)
#define AKPLATFORMINITSETTINGS_GET_EAUDIOAPI_OFFSET UNITYSDK_OFFSET(0x1A603750)
#define AKPLATFORMINITSETTINGS_GET_THREADBANKMANAGER_OFFSET UNITYSDK_OFFSET(0x1A603070)
#define AKPLATFORMINITSETTINGS_GET_THREADLENGINE_OFFSET UNITYSDK_OFFSET(0x1A602C10)
#define AKPLATFORMINITSETTINGS_GET_THREADMONITOR_OFFSET UNITYSDK_OFFSET(0x1A6032A0)
#define AKPLATFORMINITSETTINGS_GET_THREADOUTPUTMGR_OFFSET UNITYSDK_OFFSET(0x1A602E40)
#define AKPLATFORMINITSETTINGS_GET_UNUMREFILLSINVOICE_OFFSET UNITYSDK_OFFSET(0x1A603470)
#define AKPLATFORMINITSETTINGS_GET_USAMPLERATE_OFFSET UNITYSDK_OFFSET(0x1A6035E0)
#define AKPLATFORMINITSETTINGS_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1A6027A0)
#define AKPLATFORMINITSETTINGS_SET_BENABLEAVXSUPPORT_OFFSET UNITYSDK_OFFSET(0x1A603970)
#define AKPLATFORMINITSETTINGS_SET_BGLOBALFOCUS_OFFSET UNITYSDK_OFFSET(0x1A603800)
#define AKPLATFORMINITSETTINGS_SET_EAUDIOAPI_OFFSET UNITYSDK_OFFSET(0x1A603690)
#define AKPLATFORMINITSETTINGS_SET_THREADBANKMANAGER_OFFSET UNITYSDK_OFFSET(0x1A602F50)
#define AKPLATFORMINITSETTINGS_SET_THREADLENGINE_OFFSET UNITYSDK_OFFSET(0x1A602AF0)
#define AKPLATFORMINITSETTINGS_SET_THREADMONITOR_OFFSET UNITYSDK_OFFSET(0x1A603180)
#define AKPLATFORMINITSETTINGS_SET_THREADOUTPUTMGR_OFFSET UNITYSDK_OFFSET(0x1A602D20)
#define AKPLATFORMINITSETTINGS_SET_UNUMREFILLSINVOICE_OFFSET UNITYSDK_OFFSET(0x1A6033B0)
#define AKPLATFORMINITSETTINGS_SET_USAMPLERATE_OFFSET UNITYSDK_OFFSET(0x1A603520)
#define AKPLATFORMINITSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A602740)

inline static constexpr unsigned int AkPlatformInitSettings_TypeDefinitionIndex = 40353;

class AkPlatformInitSettings : public ::System::Object
{
public:
	::System::Boolean swigCMemOwn; // 0x10
	::System::IntPtr swigCPtr; // 0x18

	::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKPLATFORMINITSETTINGS__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
	}

	static ::System::IntPtr getCPtr(::AkPlatformInitSettings* obj)
	{
		return ((::System::IntPtr(*)(::AkPlatformInitSettings*))((::PBYTE)hIl2Cpp + AKPLATFORMINITSETTINGS_GETCPTR_OFFSET))(obj);
	}

	::System::Void setCPtr(::System::IntPtr cPtr)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKPLATFORMINITSETTINGS_SETCPTR_OFFSET))(this, cPtr);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPLATFORMINITSETTINGS_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPLATFORMINITSETTINGS_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean disposing)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKPLATFORMINITSETTINGS_DISPOSE_1_OFFSET))(this, disposing);
	}

	::System::Void set_threadLEngine(::AkThreadProperties* value)
	{
		return ((::System::Void(*)(::PVOID, ::AkThreadProperties*))((::PBYTE)hIl2Cpp + AKPLATFORMINITSETTINGS_SET_THREADLENGINE_OFFSET))(this, value);
	}

	::AkThreadProperties* get_threadLEngine()
	{
		return ((::AkThreadProperties*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPLATFORMINITSETTINGS_GET_THREADLENGINE_OFFSET))(this);
	}

	::System::Void set_threadOutputMgr(::AkThreadProperties* value)
	{
		return ((::System::Void(*)(::PVOID, ::AkThreadProperties*))((::PBYTE)hIl2Cpp + AKPLATFORMINITSETTINGS_SET_THREADOUTPUTMGR_OFFSET))(this, value);
	}

	::AkThreadProperties* get_threadOutputMgr()
	{
		return ((::AkThreadProperties*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPLATFORMINITSETTINGS_GET_THREADOUTPUTMGR_OFFSET))(this);
	}

	::System::Void set_threadBankManager(::AkThreadProperties* value)
	{
		return ((::System::Void(*)(::PVOID, ::AkThreadProperties*))((::PBYTE)hIl2Cpp + AKPLATFORMINITSETTINGS_SET_THREADBANKMANAGER_OFFSET))(this, value);
	}

	::AkThreadProperties* get_threadBankManager()
	{
		return ((::AkThreadProperties*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPLATFORMINITSETTINGS_GET_THREADBANKMANAGER_OFFSET))(this);
	}

	::System::Void set_threadMonitor(::AkThreadProperties* value)
	{
		return ((::System::Void(*)(::PVOID, ::AkThreadProperties*))((::PBYTE)hIl2Cpp + AKPLATFORMINITSETTINGS_SET_THREADMONITOR_OFFSET))(this, value);
	}

	::AkThreadProperties* get_threadMonitor()
	{
		return ((::AkThreadProperties*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPLATFORMINITSETTINGS_GET_THREADMONITOR_OFFSET))(this);
	}

	::System::Void set_uNumRefillsInVoice(::System::UInt16 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + AKPLATFORMINITSETTINGS_SET_UNUMREFILLSINVOICE_OFFSET))(this, value);
	}

	::System::UInt16 get_uNumRefillsInVoice()
	{
		return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPLATFORMINITSETTINGS_GET_UNUMREFILLSINVOICE_OFFSET))(this);
	}

	::System::Void set_uSampleRate(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKPLATFORMINITSETTINGS_SET_USAMPLERATE_OFFSET))(this, value);
	}

	::System::UInt32 get_uSampleRate()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPLATFORMINITSETTINGS_GET_USAMPLERATE_OFFSET))(this);
	}

	::System::Void set_eAudioAPI(::AkAudioAPI value)
	{
		return ((::System::Void(*)(::PVOID, ::AkAudioAPI))((::PBYTE)hIl2Cpp + AKPLATFORMINITSETTINGS_SET_EAUDIOAPI_OFFSET))(this, value);
	}

	::AkAudioAPI get_eAudioAPI()
	{
		return ((::AkAudioAPI(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPLATFORMINITSETTINGS_GET_EAUDIOAPI_OFFSET))(this);
	}

	::System::Void set_bGlobalFocus(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKPLATFORMINITSETTINGS_SET_BGLOBALFOCUS_OFFSET))(this, value);
	}

	::System::Boolean get_bGlobalFocus()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPLATFORMINITSETTINGS_GET_BGLOBALFOCUS_OFFSET))(this);
	}

	::System::Void set_bEnableAvxSupport(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKPLATFORMINITSETTINGS_SET_BENABLEAVXSUPPORT_OFFSET))(this, value);
	}

	::System::Boolean get_bEnableAvxSupport()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPLATFORMINITSETTINGS_GET_BENABLEAVXSUPPORT_OFFSET))(this);
	}
};
