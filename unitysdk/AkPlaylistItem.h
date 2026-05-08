#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKRESULT.h"
#include "unitysdk/System/Object.h"

class AkExternalSourceInfoArray;

#define AKPLAYLISTITEM_ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C537480)
#define AKPLAYLISTITEM_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1C5371B0)
#define AKPLAYLISTITEM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C537090)
#define AKPLAYLISTITEM_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1C537140)
#define AKPLAYLISTITEM_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1C536FD0)
#define AKPLAYLISTITEM_GET_AUDIONODEID_OFFSET UNITYSDK_OFFSET(0x1C537740)
#define AKPLAYLISTITEM_GET_MSDELAY_OFFSET UNITYSDK_OFFSET(0x1C537840)
#define AKPLAYLISTITEM_GET_PCUSTOMINFO_OFFSET UNITYSDK_OFFSET(0x1C537940)
#define AKPLAYLISTITEM_ISEQUALTO_OFFSET UNITYSDK_OFFSET(0x1C537570)
#define AKPLAYLISTITEM_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1C536FE0)
#define AKPLAYLISTITEM_SETEXTERNALSOURCES_OFFSET UNITYSDK_OFFSET(0x1C537620)
#define AKPLAYLISTITEM_SET_AUDIONODEID_OFFSET UNITYSDK_OFFSET(0x1C5376C0)
#define AKPLAYLISTITEM_SET_MSDELAY_OFFSET UNITYSDK_OFFSET(0x1C5377C0)
#define AKPLAYLISTITEM_SET_PCUSTOMINFO_OFFSET UNITYSDK_OFFSET(0x1C5378C0)
#define AKPLAYLISTITEM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C537360)
#define AKPLAYLISTITEM__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C5373E0)
#define AKPLAYLISTITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1C536FC0)

inline static constexpr unsigned int AkPlaylistItem_TypeDefinitionIndex = 31452;

class AkPlaylistItem : public ::System::Object
{
public:
	::System::IntPtr swigCPtr; // 0x10
	::System::Boolean swigCMemOwn; // 0x18

	::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKPLAYLISTITEM__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPLAYLISTITEM__CTOR_1_OFFSET))(this);
	}

	::System::Void _ctor_2(::AkPlaylistItem* in_rCopy)
	{
		return ((::System::Void(*)(::PVOID, ::AkPlaylistItem*))((::PBYTE)hIl2Cpp + AKPLAYLISTITEM__CTOR_2_OFFSET))(this, in_rCopy);
	}

	static ::System::IntPtr getCPtr(::AkPlaylistItem* obj)
	{
		return ((::System::IntPtr(*)(::AkPlaylistItem*))((::PBYTE)hIl2Cpp + AKPLAYLISTITEM_GETCPTR_OFFSET))(obj);
	}

	::System::Void setCPtr(::System::IntPtr cPtr)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKPLAYLISTITEM_SETCPTR_OFFSET))(this, cPtr);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPLAYLISTITEM_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPLAYLISTITEM_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean disposing)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKPLAYLISTITEM_DISPOSE_1_OFFSET))(this, disposing);
	}

	::AkPlaylistItem* Assign(::AkPlaylistItem* in_rCopy)
	{
		return ((::AkPlaylistItem*(*)(::PVOID, ::AkPlaylistItem*))((::PBYTE)hIl2Cpp + AKPLAYLISTITEM_ASSIGN_OFFSET))(this, in_rCopy);
	}

	::System::Boolean IsEqualTo(::AkPlaylistItem* in_rCopy)
	{
		return ((::System::Boolean(*)(::PVOID, ::AkPlaylistItem*))((::PBYTE)hIl2Cpp + AKPLAYLISTITEM_ISEQUALTO_OFFSET))(this, in_rCopy);
	}

	::AKRESULT SetExternalSources(::System::UInt32 in_nExternalSrc, ::AkExternalSourceInfoArray* in_pExternalSrc)
	{
		return ((::AKRESULT(*)(::PVOID, ::System::UInt32, ::AkExternalSourceInfoArray*))((::PBYTE)hIl2Cpp + AKPLAYLISTITEM_SETEXTERNALSOURCES_OFFSET))(this, in_nExternalSrc, in_pExternalSrc);
	}

	::System::Void set_audioNodeID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKPLAYLISTITEM_SET_AUDIONODEID_OFFSET))(this, value);
	}

	::System::UInt32 get_audioNodeID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPLAYLISTITEM_GET_AUDIONODEID_OFFSET))(this);
	}

	::System::Void set_msDelay(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AKPLAYLISTITEM_SET_MSDELAY_OFFSET))(this, value);
	}

	::System::Int32 get_msDelay()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPLAYLISTITEM_GET_MSDELAY_OFFSET))(this);
	}

	::System::Void set_pCustomInfo(::System::IntPtr value)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKPLAYLISTITEM_SET_PCUSTOMINFO_OFFSET))(this, value);
	}

	::System::IntPtr get_pCustomInfo()
	{
		return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPLAYLISTITEM_GET_PCUSTOMINFO_OFFSET))(this);
	}
};
