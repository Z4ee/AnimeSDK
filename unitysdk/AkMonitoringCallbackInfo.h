#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkMonitorErrorCode.h"
#include "unitysdk/AkMonitorErrorLevel.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define AKMONITORINGCALLBACKINFO_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1BD67360)
#define AKMONITORINGCALLBACKINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BD67170)
#define AKMONITORINGCALLBACKINFO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1BD67290)
#define AKMONITORINGCALLBACKINFO_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1BD670C0)
#define AKMONITORINGCALLBACKINFO_GET_ERRORCODE_OFFSET UNITYSDK_OFFSET(0x1BD67540)
#define AKMONITORINGCALLBACKINFO_GET_ERRORLEVEL_OFFSET UNITYSDK_OFFSET(0x1BD675F0)
#define AKMONITORINGCALLBACKINFO_GET_GAMEOBJID_OFFSET UNITYSDK_OFFSET(0x1BD67750)
#define AKMONITORINGCALLBACKINFO_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x1BD67800)
#define AKMONITORINGCALLBACKINFO_GET_PLAYINGID_OFFSET UNITYSDK_OFFSET(0x1BD676A0)
#define AKMONITORINGCALLBACKINFO_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1BD67110)
#define AKMONITORINGCALLBACKINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BD678D0)
#define AKMONITORINGCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD670B0)

inline static constexpr unsigned int AkMonitoringCallbackInfo_TypeDefinitionIndex = 41962;

class AkMonitoringCallbackInfo : public ::System::Object
{
public:
	::System::IntPtr swigCPtr; // 0x10
	::System::Boolean swigCMemOwn; // 0x18

	::System::Void _ctor(::System::IntPtr a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKMONITORINGCALLBACKINFO__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMONITORINGCALLBACKINFO__CTOR_1_OFFSET))(this);
	}

	static ::System::IntPtr getCPtr(::AkMonitoringCallbackInfo* a1)
	{
		return ((::System::IntPtr(*)(::AkMonitoringCallbackInfo*))((::PBYTE)hIl2Cpp + AKMONITORINGCALLBACKINFO_GETCPTR_OFFSET))(a1);
	}

	::System::Void setCPtr(::System::IntPtr a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKMONITORINGCALLBACKINFO_SETCPTR_OFFSET))(this, a1);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMONITORINGCALLBACKINFO_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMONITORINGCALLBACKINFO_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKMONITORINGCALLBACKINFO_DISPOSE_1_OFFSET))(this, a1);
	}

	::AkMonitorErrorCode get_errorCode()
	{
		return ((::AkMonitorErrorCode(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMONITORINGCALLBACKINFO_GET_ERRORCODE_OFFSET))(this);
	}

	::AkMonitorErrorLevel get_errorLevel()
	{
		return ((::AkMonitorErrorLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMONITORINGCALLBACKINFO_GET_ERRORLEVEL_OFFSET))(this);
	}

	::System::UInt32 get_playingID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMONITORINGCALLBACKINFO_GET_PLAYINGID_OFFSET))(this);
	}

	::System::UInt64 get_gameObjID()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMONITORINGCALLBACKINFO_GET_GAMEOBJID_OFFSET))(this);
	}

	::System::String* get_message()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMONITORINGCALLBACKINFO_GET_MESSAGE_OFFSET))(this);
	}
};
