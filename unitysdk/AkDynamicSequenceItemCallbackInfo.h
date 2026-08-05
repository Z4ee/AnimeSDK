#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCallbackInfo.h"

#define AKDYNAMICSEQUENCEITEMCALLBACKINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1ECB3770)
#define AKDYNAMICSEQUENCEITEMCALLBACKINFO_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1ECB36D0)
#define AKDYNAMICSEQUENCEITEMCALLBACKINFO_GET_AUDIONODEID_OFFSET UNITYSDK_OFFSET(0x1ECB39C0)
#define AKDYNAMICSEQUENCEITEMCALLBACKINFO_GET_PCUSTOMINFO_OFFSET UNITYSDK_OFFSET(0x1ECB3A40)
#define AKDYNAMICSEQUENCEITEMCALLBACKINFO_GET_PLAYINGID_OFFSET UNITYSDK_OFFSET(0x1ECB3940)
#define AKDYNAMICSEQUENCEITEMCALLBACKINFO_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1ECB36E0)
#define AKDYNAMICSEQUENCEITEMCALLBACKINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1ECB3AC0)
#define AKDYNAMICSEQUENCEITEMCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1ECB3640)

inline static constexpr unsigned int AkDynamicSequenceItemCallbackInfo_TypeDefinitionIndex = 33599;

class AkDynamicSequenceItemCallbackInfo : public ::AkCallbackInfo
{
public:
	::System::IntPtr swigCPtr; // 0x20

	::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKDYNAMICSEQUENCEITEMCALLBACKINFO__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDYNAMICSEQUENCEITEMCALLBACKINFO__CTOR_1_OFFSET))(this);
	}

	static ::System::IntPtr getCPtr(::AkDynamicSequenceItemCallbackInfo* obj)
	{
		return ((::System::IntPtr(*)(::AkDynamicSequenceItemCallbackInfo*))((::PBYTE)hIl2Cpp + AKDYNAMICSEQUENCEITEMCALLBACKINFO_GETCPTR_OFFSET))(obj);
	}

	::System::Void setCPtr(::System::IntPtr cPtr)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKDYNAMICSEQUENCEITEMCALLBACKINFO_SETCPTR_OFFSET))(this, cPtr);
	}

	::System::Void Dispose(::System::Boolean disposing)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKDYNAMICSEQUENCEITEMCALLBACKINFO_DISPOSE_OFFSET))(this, disposing);
	}

	::System::UInt32 get_playingID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDYNAMICSEQUENCEITEMCALLBACKINFO_GET_PLAYINGID_OFFSET))(this);
	}

	::System::UInt32 get_audioNodeID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDYNAMICSEQUENCEITEMCALLBACKINFO_GET_AUDIONODEID_OFFSET))(this);
	}

	::System::IntPtr get_pCustomInfo()
	{
		return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDYNAMICSEQUENCEITEMCALLBACKINFO_GET_PCUSTOMINFO_OFFSET))(this);
	}
};
