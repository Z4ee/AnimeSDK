#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCallbackInfo.h"

#define AKDYNAMICSEQUENCEITEMCALLBACKINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A5E4A20)
#define AKDYNAMICSEQUENCEITEMCALLBACKINFO_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1A5E49D0)
#define AKDYNAMICSEQUENCEITEMCALLBACKINFO_GET_AUDIONODEID_OFFSET UNITYSDK_OFFSET(0x1A5E4C80)
#define AKDYNAMICSEQUENCEITEMCALLBACKINFO_GET_PCUSTOMINFO_OFFSET UNITYSDK_OFFSET(0x1A5E4D30)
#define AKDYNAMICSEQUENCEITEMCALLBACKINFO_GET_PLAYINGID_OFFSET UNITYSDK_OFFSET(0x1A5E4BD0)
#define AKDYNAMICSEQUENCEITEMCALLBACKINFO_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1A5D7410)
#define AKDYNAMICSEQUENCEITEMCALLBACKINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A5E4DE0)
#define AKDYNAMICSEQUENCEITEMCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5D8490)
#define AKDYNAMICSEQUENCEITEMCALLBACKINFO___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A5E4EF0)
#define AKDYNAMICSEQUENCEITEMCALLBACKINFO___IFIXBASEPROXY_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1A5E4EE0)

inline static constexpr unsigned int AkDynamicSequenceItemCallbackInfo_TypeDefinitionIndex = 40292;

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

	::System::Void __iFixBaseProxy_setCPtr(::System::IntPtr P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKDYNAMICSEQUENCEITEMCALLBACKINFO___IFIXBASEPROXY_SETCPTR_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Dispose(::System::Boolean P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKDYNAMICSEQUENCEITEMCALLBACKINFO___IFIXBASEPROXY_DISPOSE_OFFSET))(this, P0);
	}
};
