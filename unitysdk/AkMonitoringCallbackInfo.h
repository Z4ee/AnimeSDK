#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkMonitorErrorCode.h"
#include "unitysdk/AkMonitorErrorLevel.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define AKMONITORINGCALLBACKINFO_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1C2A1780)
#define AKMONITORINGCALLBACKINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C2A1660)
#define AKMONITORINGCALLBACKINFO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1C2A1710)
#define AKMONITORINGCALLBACKINFO_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1C2A15A0)
#define AKMONITORINGCALLBACKINFO_GET_ERRORCODE_OFFSET UNITYSDK_OFFSET(0x1C2A1930)
#define AKMONITORINGCALLBACKINFO_GET_ERRORLEVEL_OFFSET UNITYSDK_OFFSET(0x1C2A19B0)
#define AKMONITORINGCALLBACKINFO_GET_GAMEOBJID_OFFSET UNITYSDK_OFFSET(0x1C2A1AB0)
#define AKMONITORINGCALLBACKINFO_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x1C2A1B30)
#define AKMONITORINGCALLBACKINFO_GET_PLAYINGID_OFFSET UNITYSDK_OFFSET(0x1C2A1A30)
#define AKMONITORINGCALLBACKINFO_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1C2A15B0)
#define AKMONITORINGCALLBACKINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C2A1C10)
#define AKMONITORINGCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2A1590)

inline static constexpr unsigned int AkMonitoringCallbackInfo_TypeDefinitionIndex = 31441;

class AkMonitoringCallbackInfo : public ::System::Object
{
public:
	::System::Boolean swigCMemOwn; // 0x10
	::System::IntPtr swigCPtr; // 0x18

	::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKMONITORINGCALLBACKINFO__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMONITORINGCALLBACKINFO__CTOR_1_OFFSET))(this);
	}

	static ::System::IntPtr getCPtr(::AkMonitoringCallbackInfo* obj)
	{
		return ((::System::IntPtr(*)(::AkMonitoringCallbackInfo*))((::PBYTE)hIl2Cpp + AKMONITORINGCALLBACKINFO_GETCPTR_OFFSET))(obj);
	}

	::System::Void setCPtr(::System::IntPtr cPtr)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKMONITORINGCALLBACKINFO_SETCPTR_OFFSET))(this, cPtr);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMONITORINGCALLBACKINFO_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMONITORINGCALLBACKINFO_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean disposing)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKMONITORINGCALLBACKINFO_DISPOSE_1_OFFSET))(this, disposing);
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
