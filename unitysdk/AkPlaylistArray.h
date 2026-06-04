#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKRESULT.h"
#include "unitysdk/System/Object.h"

class AkIterator;
class AkPlaylistItem;

#define AKPLAYLISTARRAY_ADDLAST_1_OFFSET UNITYSDK_OFFSET(0x1B4500E0)
#define AKPLAYLISTARRAY_ADDLAST_OFFSET UNITYSDK_OFFSET(0x1B44FFD0)
#define AKPLAYLISTARRAY_BEGIN_OFFSET UNITYSDK_OFFSET(0x1B44F1E0)
#define AKPLAYLISTARRAY_COPY_OFFSET UNITYSDK_OFFSET(0x1B450C50)
#define AKPLAYLISTARRAY_DATA_OFFSET UNITYSDK_OFFSET(0x1B44FC90)
#define AKPLAYLISTARRAY_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1B44E880)
#define AKPLAYLISTARRAY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B44F040)
#define AKPLAYLISTARRAY_END_OFFSET UNITYSDK_OFFSET(0x1B44F2E0)
#define AKPLAYLISTARRAY_ERASESWAP_OFFSET UNITYSDK_OFFSET(0x1B44F7B0)
#define AKPLAYLISTARRAY_ERASE_1_OFFSET UNITYSDK_OFFSET(0x1B44F6F0)
#define AKPLAYLISTARRAY_ERASE_OFFSET UNITYSDK_OFFSET(0x1B44F590)
#define AKPLAYLISTARRAY_EXISTS_OFFSET UNITYSDK_OFFSET(0x1B44FE60)
#define AKPLAYLISTARRAY_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B44F0F0)
#define AKPLAYLISTARRAY_FINDEX_OFFSET UNITYSDK_OFFSET(0x1B44F3E0)
#define AKPLAYLISTARRAY_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1B44EFF0)
#define AKPLAYLISTARRAY_GROWARRAY_1_OFFSET UNITYSDK_OFFSET(0x1B4509B0)
#define AKPLAYLISTARRAY_GROWARRAY_OFFSET UNITYSDK_OFFSET(0x1B450900)
#define AKPLAYLISTARRAY_INSERT_OFFSET UNITYSDK_OFFSET(0x1B4507F0)
#define AKPLAYLISTARRAY_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x1B44FDB0)
#define AKPLAYLISTARRAY_ISGROWINGALLOWED_OFFSET UNITYSDK_OFFSET(0x1B44F910)
#define AKPLAYLISTARRAY_ITEMATINDEX_OFFSET UNITYSDK_OFFSET(0x1B4506F0)
#define AKPLAYLISTARRAY_LAST_OFFSET UNITYSDK_OFFSET(0x1B450250)
#define AKPLAYLISTARRAY_LENGTH_OFFSET UNITYSDK_OFFSET(0x1B44FBE0)
#define AKPLAYLISTARRAY_REMOVEALL_OFFSET UNITYSDK_OFFSET(0x1B450640)
#define AKPLAYLISTARRAY_REMOVELAST_OFFSET UNITYSDK_OFFSET(0x1B450350)
#define AKPLAYLISTARRAY_REMOVESWAP_OFFSET UNITYSDK_OFFSET(0x1B450520)
#define AKPLAYLISTARRAY_REMOVE_OFFSET UNITYSDK_OFFSET(0x1B450400)
#define AKPLAYLISTARRAY_RESERVED_OFFSET UNITYSDK_OFFSET(0x1B44FA80)
#define AKPLAYLISTARRAY_RESERVE_OFFSET UNITYSDK_OFFSET(0x1B44F9C0)
#define AKPLAYLISTARRAY_RESIZE_OFFSET UNITYSDK_OFFSET(0x1B450A70)
#define AKPLAYLISTARRAY_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1B44E5A0)
#define AKPLAYLISTARRAY_TERM_OFFSET UNITYSDK_OFFSET(0x1B44FB30)
#define AKPLAYLISTARRAY_TRANSFER_OFFSET UNITYSDK_OFFSET(0x1B450B30)
#define AKPLAYLISTARRAY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B44F160)
#define AKPLAYLISTARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B44E470)

inline static constexpr unsigned int AkPlaylistArray_TypeDefinitionIndex = 41157;

class AkPlaylistArray : public ::System::Object
{
public:
	::System::IntPtr swigCPtr; // 0x10
	::System::Boolean swigCMemOwn; // 0x18

	::System::Void _ctor(::System::IntPtr a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKPLAYLISTARRAY__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPLAYLISTARRAY__CTOR_1_OFFSET))(this);
	}

	static ::System::IntPtr getCPtr(::AkPlaylistArray* a1)
	{
		return ((::System::IntPtr(*)(::AkPlaylistArray*))((::PBYTE)hIl2Cpp + AKPLAYLISTARRAY_GETCPTR_OFFSET))(a1);
	}

	::System::Void setCPtr(::System::IntPtr a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKPLAYLISTARRAY_SETCPTR_OFFSET))(this, a1);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPLAYLISTARRAY_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPLAYLISTARRAY_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKPLAYLISTARRAY_DISPOSE_1_OFFSET))(this, a1);
	}

	::AkIterator* Begin()
	{
		return ((::AkIterator*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPLAYLISTARRAY_BEGIN_OFFSET))(this);
	}

	::AkIterator* End()
	{
		return ((::AkIterator*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPLAYLISTARRAY_END_OFFSET))(this);
	}

	::AkIterator* FindEx(::AkPlaylistItem* a1)
	{
		return ((::AkIterator*(*)(::PVOID, ::AkPlaylistItem*))((::PBYTE)hIl2Cpp + AKPLAYLISTARRAY_FINDEX_OFFSET))(this, a1);
	}

	::AkIterator* Erase(::AkIterator* a1)
	{
		return ((::AkIterator*(*)(::PVOID, ::AkIterator*))((::PBYTE)hIl2Cpp + AKPLAYLISTARRAY_ERASE_OFFSET))(this, a1);
	}

	::System::Void Erase_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKPLAYLISTARRAY_ERASE_1_OFFSET))(this, a1);
	}

	::AkIterator* EraseSwap(::AkIterator* a1)
	{
		return ((::AkIterator*(*)(::PVOID, ::AkIterator*))((::PBYTE)hIl2Cpp + AKPLAYLISTARRAY_ERASESWAP_OFFSET))(this, a1);
	}

	::System::Boolean IsGrowingAllowed()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPLAYLISTARRAY_ISGROWINGALLOWED_OFFSET))(this);
	}

	::AKRESULT Reserve(::System::UInt32 a1)
	{
		return ((::AKRESULT(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKPLAYLISTARRAY_RESERVE_OFFSET))(this, a1);
	}

	::System::UInt32 Reserved()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPLAYLISTARRAY_RESERVED_OFFSET))(this);
	}

	::System::Void Term()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPLAYLISTARRAY_TERM_OFFSET))(this);
	}

	::System::UInt32 Length()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPLAYLISTARRAY_LENGTH_OFFSET))(this);
	}

	::AkPlaylistItem* Data()
	{
		return ((::AkPlaylistItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPLAYLISTARRAY_DATA_OFFSET))(this);
	}

	::System::Boolean IsEmpty()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPLAYLISTARRAY_ISEMPTY_OFFSET))(this);
	}

	::AkPlaylistItem* Exists(::AkPlaylistItem* a1)
	{
		return ((::AkPlaylistItem*(*)(::PVOID, ::AkPlaylistItem*))((::PBYTE)hIl2Cpp + AKPLAYLISTARRAY_EXISTS_OFFSET))(this, a1);
	}

	::AkPlaylistItem* AddLast()
	{
		return ((::AkPlaylistItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPLAYLISTARRAY_ADDLAST_OFFSET))(this);
	}

	::AkPlaylistItem* AddLast_1(::AkPlaylistItem* a1)
	{
		return ((::AkPlaylistItem*(*)(::PVOID, ::AkPlaylistItem*))((::PBYTE)hIl2Cpp + AKPLAYLISTARRAY_ADDLAST_1_OFFSET))(this, a1);
	}

	::AkPlaylistItem* Last()
	{
		return ((::AkPlaylistItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPLAYLISTARRAY_LAST_OFFSET))(this);
	}

	::System::Void RemoveLast()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPLAYLISTARRAY_REMOVELAST_OFFSET))(this);
	}

	::AKRESULT Remove(::AkPlaylistItem* a1)
	{
		return ((::AKRESULT(*)(::PVOID, ::AkPlaylistItem*))((::PBYTE)hIl2Cpp + AKPLAYLISTARRAY_REMOVE_OFFSET))(this, a1);
	}

	::AKRESULT RemoveSwap(::AkPlaylistItem* a1)
	{
		return ((::AKRESULT(*)(::PVOID, ::AkPlaylistItem*))((::PBYTE)hIl2Cpp + AKPLAYLISTARRAY_REMOVESWAP_OFFSET))(this, a1);
	}

	::System::Void RemoveAll()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPLAYLISTARRAY_REMOVEALL_OFFSET))(this);
	}

	::AkPlaylistItem* ItemAtIndex(::System::UInt32 a1)
	{
		return ((::AkPlaylistItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKPLAYLISTARRAY_ITEMATINDEX_OFFSET))(this, a1);
	}

	::AkPlaylistItem* Insert(::System::UInt32 a1)
	{
		return ((::AkPlaylistItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKPLAYLISTARRAY_INSERT_OFFSET))(this, a1);
	}

	::System::Boolean GrowArray()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPLAYLISTARRAY_GROWARRAY_OFFSET))(this);
	}

	::System::Boolean GrowArray_1(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKPLAYLISTARRAY_GROWARRAY_1_OFFSET))(this, a1);
	}

	::System::Boolean Resize(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKPLAYLISTARRAY_RESIZE_OFFSET))(this, a1);
	}

	::System::Void Transfer(::AkPlaylistArray* a1)
	{
		return ((::System::Void(*)(::PVOID, ::AkPlaylistArray*))((::PBYTE)hIl2Cpp + AKPLAYLISTARRAY_TRANSFER_OFFSET))(this, a1);
	}

	::AKRESULT Copy(::AkPlaylistArray* a1)
	{
		return ((::AKRESULT(*)(::PVOID, ::AkPlaylistArray*))((::PBYTE)hIl2Cpp + AKPLAYLISTARRAY_COPY_OFFSET))(this, a1);
	}
};
