#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCallbackInfo.h"

#define AKEVENTCALLBACKINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EEC6470)
#define AKEVENTCALLBACKINFO_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1EEC8A10)
#define AKEVENTCALLBACKINFO_GET_EVENTID_OFFSET UNITYSDK_OFFSET(0x1EEC8A60)
#define AKEVENTCALLBACKINFO_GET_PLAYINGID_OFFSET UNITYSDK_OFFSET(0x1EEACEA0)
#define AKEVENTCALLBACKINFO_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1EEC6180)
#define AKEVENTCALLBACKINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EEC8B10)
#define AKEVENTCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEB9980)

inline static constexpr unsigned int AkEventCallbackInfo_TypeDefinitionIndex = 43547;

class AkEventCallbackInfo : public ::AkCallbackInfo
{
public:
	::System::IntPtr swigCPtr; // 0x20

	::System::Void _ctor(::System::IntPtr a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKEVENTCALLBACKINFO__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEVENTCALLBACKINFO__CTOR_1_OFFSET))(this);
	}

	static ::System::IntPtr getCPtr(::AkEventCallbackInfo* a1)
	{
		return ((::System::IntPtr(*)(::AkEventCallbackInfo*))((::PBYTE)hIl2Cpp + AKEVENTCALLBACKINFO_GETCPTR_OFFSET))(a1);
	}

	::System::Void setCPtr(::System::IntPtr a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKEVENTCALLBACKINFO_SETCPTR_OFFSET))(this, a1);
	}

	::System::Void Dispose(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKEVENTCALLBACKINFO_DISPOSE_OFFSET))(this, a1);
	}

	::System::UInt32 get_playingID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEVENTCALLBACKINFO_GET_PLAYINGID_OFFSET))(this);
	}

	::System::UInt32 get_eventID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEVENTCALLBACKINFO_GET_EVENTID_OFFSET))(this);
	}
};
