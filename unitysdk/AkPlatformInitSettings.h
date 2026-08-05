#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkAudioAPI.h"
#include "unitysdk/System/Object.h"

class AkThreadProperties;

#define AKPLATFORMINITSETTINGS_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1FAFA070)
#define AKPLATFORMINITSETTINGS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1FAF9F50)
#define AKPLATFORMINITSETTINGS_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1FAFA000)
#define AKPLATFORMINITSETTINGS_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1FAF9E90)
#define AKPLATFORMINITSETTINGS_GET_BENABLEAVXSUPPORT_OFFSET UNITYSDK_OFFSET(0x1FAFACC0)
#define AKPLATFORMINITSETTINGS_GET_BGLOBALFOCUS_OFFSET UNITYSDK_OFFSET(0x1FAFABC0)
#define AKPLATFORMINITSETTINGS_GET_EAUDIOAPI_OFFSET UNITYSDK_OFFSET(0x1FAFAAC0)
#define AKPLATFORMINITSETTINGS_GET_THREADBANKMANAGER_OFFSET UNITYSDK_OFFSET(0x1FAFA5E0)
#define AKPLATFORMINITSETTINGS_GET_THREADLENGINE_OFFSET UNITYSDK_OFFSET(0x1FAFA2D0)
#define AKPLATFORMINITSETTINGS_GET_THREADMONITOR_OFFSET UNITYSDK_OFFSET(0x1FAFA760)
#define AKPLATFORMINITSETTINGS_GET_THREADOUTPUTMGR_OFFSET UNITYSDK_OFFSET(0x1FAFA460)
#define AKPLATFORMINITSETTINGS_GET_UNUMREFILLSINVOICE_OFFSET UNITYSDK_OFFSET(0x1FAFA8C0)
#define AKPLATFORMINITSETTINGS_GET_USAMPLERATE_OFFSET UNITYSDK_OFFSET(0x1FAFA9C0)
#define AKPLATFORMINITSETTINGS_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1FAF9EA0)
#define AKPLATFORMINITSETTINGS_SET_BENABLEAVXSUPPORT_OFFSET UNITYSDK_OFFSET(0x1FAFAC40)
#define AKPLATFORMINITSETTINGS_SET_BGLOBALFOCUS_OFFSET UNITYSDK_OFFSET(0x1FAFAB40)
#define AKPLATFORMINITSETTINGS_SET_EAUDIOAPI_OFFSET UNITYSDK_OFFSET(0x1FAFAA40)
#define AKPLATFORMINITSETTINGS_SET_THREADBANKMANAGER_OFFSET UNITYSDK_OFFSET(0x1FAFA540)
#define AKPLATFORMINITSETTINGS_SET_THREADLENGINE_OFFSET UNITYSDK_OFFSET(0x1FAFA220)
#define AKPLATFORMINITSETTINGS_SET_THREADMONITOR_OFFSET UNITYSDK_OFFSET(0x1FAFA6C0)
#define AKPLATFORMINITSETTINGS_SET_THREADOUTPUTMGR_OFFSET UNITYSDK_OFFSET(0x1FAFA3C0)
#define AKPLATFORMINITSETTINGS_SET_UNUMREFILLSINVOICE_OFFSET UNITYSDK_OFFSET(0x1FAFA840)
#define AKPLATFORMINITSETTINGS_SET_USAMPLERATE_OFFSET UNITYSDK_OFFSET(0x1FAFA940)
#define AKPLATFORMINITSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1FAF9E80)

inline static constexpr unsigned int AkPlatformInitSettings_TypeDefinitionIndex = 33660;

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
