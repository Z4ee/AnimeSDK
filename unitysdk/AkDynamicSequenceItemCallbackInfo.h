#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCallbackInfo.h"

#define AKDYNAMICSEQUENCEITEMCALLBACKINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D90D2F0)
#define AKDYNAMICSEQUENCEITEMCALLBACKINFO_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1D90D250)
#define AKDYNAMICSEQUENCEITEMCALLBACKINFO_GET_AUDIONODEID_OFFSET UNITYSDK_OFFSET(0x1D90D540)
#define AKDYNAMICSEQUENCEITEMCALLBACKINFO_GET_PCUSTOMINFO_OFFSET UNITYSDK_OFFSET(0x1D90D5C0)
#define AKDYNAMICSEQUENCEITEMCALLBACKINFO_GET_PLAYINGID_OFFSET UNITYSDK_OFFSET(0x1D90D4C0)
#define AKDYNAMICSEQUENCEITEMCALLBACKINFO_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1D90D260)
#define AKDYNAMICSEQUENCEITEMCALLBACKINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D90D640)
#define AKDYNAMICSEQUENCEITEMCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D90D1C0)

inline static constexpr unsigned int AkDynamicSequenceItemCallbackInfo_TypeDefinitionIndex = 32964;

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
