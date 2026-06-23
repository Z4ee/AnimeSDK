#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKRESULT.h"
#include "unitysdk/System/Object.h"

class AkIterator;
class AkPlaylistItem;

#define AKPLAYLISTARRAY_ADDLAST_1_OFFSET UNITYSDK_OFFSET(0x1D9127F0)
#define AKPLAYLISTARRAY_ADDLAST_OFFSET UNITYSDK_OFFSET(0x1D912710)
#define AKPLAYLISTARRAY_BEGIN_OFFSET UNITYSDK_OFFSET(0x1D911D30)
#define AKPLAYLISTARRAY_COPY_OFFSET UNITYSDK_OFFSET(0x1D912FF0)
#define AKPLAYLISTARRAY_DATA_OFFSET UNITYSDK_OFFSET(0x1D9124B0)
#define AKPLAYLISTARRAY_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1D911B00)
#define AKPLAYLISTARRAY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D9119E0)
#define AKPLAYLISTARRAY_END_OFFSET UNITYSDK_OFFSET(0x1D911E00)
#define AKPLAYLISTARRAY_ERASESWAP_OFFSET UNITYSDK_OFFSET(0x1D912130)
#define AKPLAYLISTARRAY_ERASE_1_OFFSET UNITYSDK_OFFSET(0x1D9120B0)
#define AKPLAYLISTARRAY_ERASE_OFFSET UNITYSDK_OFFSET(0x1D911FC0)
#define AKPLAYLISTARRAY_EXISTS_OFFSET UNITYSDK_OFFSET(0x1D912610)
#define AKPLAYLISTARRAY_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1D911A90)
#define AKPLAYLISTARRAY_FINDEX_OFFSET UNITYSDK_OFFSET(0x1D911ED0)
#define AKPLAYLISTARRAY_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1D911920)
#define AKPLAYLISTARRAY_GROWARRAY_1_OFFSET UNITYSDK_OFFSET(0x1D912E30)
#define AKPLAYLISTARRAY_GROWARRAY_OFFSET UNITYSDK_OFFSET(0x1D912DB0)
#define AKPLAYLISTARRAY_INSERT_OFFSET UNITYSDK_OFFSET(0x1D912CD0)
#define AKPLAYLISTARRAY_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x1D912590)
#define AKPLAYLISTARRAY_ISGROWINGALLOWED_OFFSET UNITYSDK_OFFSET(0x1D912220)
#define AKPLAYLISTARRAY_ITEMATINDEX_OFFSET UNITYSDK_OFFSET(0x1D912C00)
#define AKPLAYLISTARRAY_LAST_OFFSET UNITYSDK_OFFSET(0x1D9128F0)
#define AKPLAYLISTARRAY_LENGTH_OFFSET UNITYSDK_OFFSET(0x1D912430)
#define AKPLAYLISTARRAY_REMOVEALL_OFFSET UNITYSDK_OFFSET(0x1D912B80)
#define AKPLAYLISTARRAY_REMOVELAST_OFFSET UNITYSDK_OFFSET(0x1D9129C0)
#define AKPLAYLISTARRAY_REMOVESWAP_OFFSET UNITYSDK_OFFSET(0x1D912AE0)
#define AKPLAYLISTARRAY_REMOVE_OFFSET UNITYSDK_OFFSET(0x1D912A40)
#define AKPLAYLISTARRAY_RESERVED_OFFSET UNITYSDK_OFFSET(0x1D912330)
#define AKPLAYLISTARRAY_RESERVE_OFFSET UNITYSDK_OFFSET(0x1D9122A0)
#define AKPLAYLISTARRAY_RESIZE_OFFSET UNITYSDK_OFFSET(0x1D912EC0)
#define AKPLAYLISTARRAY_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1D911930)
#define AKPLAYLISTARRAY_TERM_OFFSET UNITYSDK_OFFSET(0x1D9123B0)
#define AKPLAYLISTARRAY_TRANSFER_OFFSET UNITYSDK_OFFSET(0x1D912F50)
#define AKPLAYLISTARRAY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D911CB0)
#define AKPLAYLISTARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D911910)

inline static constexpr unsigned int AkPlaylistArray_TypeDefinitionIndex = 33002;

class AkPlaylistArray : public ::System::Object
{
public:
	::System::Boolean swigCMemOwn; // 0x10
	::System::IntPtr swigCPtr; // 0x18

	::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKPLAYLISTARRAY__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPLAYLISTARRAY__CTOR_1_OFFSET))(this);
	}

	static ::System::IntPtr getCPtr(::AkPlaylistArray* obj)
	{
		return ((::System::IntPtr(*)(::AkPlaylistArray*))((::PBYTE)hIl2Cpp + AKPLAYLISTARRAY_GETCPTR_OFFSET))(obj);
	}

	::System::Void setCPtr(::System::IntPtr cPtr)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKPLAYLISTARRAY_SETCPTR_OFFSET))(this, cPtr);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPLAYLISTARRAY_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPLAYLISTARRAY_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean disposing)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKPLAYLISTARRAY_DISPOSE_1_OFFSET))(this, disposing);
	}

	::AkIterator* Begin()
	{
		return ((::AkIterator*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPLAYLISTARRAY_BEGIN_OFFSET))(this);
	}

	::AkIterator* End()
	{
		return ((::AkIterator*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPLAYLISTARRAY_END_OFFSET))(this);
	}

	::AkIterator* FindEx(::AkPlaylistItem* in_Item)
	{
		return ((::AkIterator*(*)(::PVOID, ::AkPlaylistItem*))((::PBYTE)hIl2Cpp + AKPLAYLISTARRAY_FINDEX_OFFSET))(this, in_Item);
	}

	::AkIterator* Erase(::AkIterator* in_rIter)
	{
		return ((::AkIterator*(*)(::PVOID, ::AkIterator*))((::PBYTE)hIl2Cpp + AKPLAYLISTARRAY_ERASE_OFFSET))(this, in_rIter);
	}

	::System::Void Erase_1(::System::UInt32 in_uIndex)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKPLAYLISTARRAY_ERASE_1_OFFSET))(this, in_uIndex);
	}

	::AkIterator* EraseSwap(::AkIterator* in_rIter)
	{
		return ((::AkIterator*(*)(::PVOID, ::AkIterator*))((::PBYTE)hIl2Cpp + AKPLAYLISTARRAY_ERASESWAP_OFFSET))(this, in_rIter);
	}

	::System::Boolean IsGrowingAllowed()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPLAYLISTARRAY_ISGROWINGALLOWED_OFFSET))(this);
	}

	::AKRESULT Reserve(::System::UInt32 in_ulReserve)
	{
		return ((::AKRESULT(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKPLAYLISTARRAY_RESERVE_OFFSET))(this, in_ulReserve);
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

	::AkPlaylistItem* Exists(::AkPlaylistItem* in_Item)
	{
		return ((::AkPlaylistItem*(*)(::PVOID, ::AkPlaylistItem*))((::PBYTE)hIl2Cpp + AKPLAYLISTARRAY_EXISTS_OFFSET))(this, in_Item);
	}

	::AkPlaylistItem* AddLast()
	{
		return ((::AkPlaylistItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPLAYLISTARRAY_ADDLAST_OFFSET))(this);
	}

	::AkPlaylistItem* AddLast_1(::AkPlaylistItem* in_rItem)
	{
		return ((::AkPlaylistItem*(*)(::PVOID, ::AkPlaylistItem*))((::PBYTE)hIl2Cpp + AKPLAYLISTARRAY_ADDLAST_1_OFFSET))(this, in_rItem);
	}

	::AkPlaylistItem* Last()
	{
		return ((::AkPlaylistItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPLAYLISTARRAY_LAST_OFFSET))(this);
	}

	::System::Void RemoveLast()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPLAYLISTARRAY_REMOVELAST_OFFSET))(this);
	}

	::AKRESULT Remove(::AkPlaylistItem* in_rItem)
	{
		return ((::AKRESULT(*)(::PVOID, ::AkPlaylistItem*))((::PBYTE)hIl2Cpp + AKPLAYLISTARRAY_REMOVE_OFFSET))(this, in_rItem);
	}

	::AKRESULT RemoveSwap(::AkPlaylistItem* in_rItem)
	{
		return ((::AKRESULT(*)(::PVOID, ::AkPlaylistItem*))((::PBYTE)hIl2Cpp + AKPLAYLISTARRAY_REMOVESWAP_OFFSET))(this, in_rItem);
	}

	::System::Void RemoveAll()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPLAYLISTARRAY_REMOVEALL_OFFSET))(this);
	}

	::AkPlaylistItem* ItemAtIndex(::System::UInt32 uiIndex)
	{
		return ((::AkPlaylistItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKPLAYLISTARRAY_ITEMATINDEX_OFFSET))(this, uiIndex);
	}

	::AkPlaylistItem* Insert(::System::UInt32 in_uIndex)
	{
		return ((::AkPlaylistItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKPLAYLISTARRAY_INSERT_OFFSET))(this, in_uIndex);
	}

	::System::Boolean GrowArray()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPLAYLISTARRAY_GROWARRAY_OFFSET))(this);
	}

	::System::Boolean GrowArray_1(::System::UInt32 in_uGrowBy)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKPLAYLISTARRAY_GROWARRAY_1_OFFSET))(this, in_uGrowBy);
	}

	::System::Boolean Resize(::System::UInt32 in_uiSize)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKPLAYLISTARRAY_RESIZE_OFFSET))(this, in_uiSize);
	}

	::System::Void Transfer(::AkPlaylistArray* in_rSource)
	{
		return ((::System::Void(*)(::PVOID, ::AkPlaylistArray*))((::PBYTE)hIl2Cpp + AKPLAYLISTARRAY_TRANSFER_OFFSET))(this, in_rSource);
	}

	::AKRESULT Copy(::AkPlaylistArray* in_rSource)
	{
		return ((::AKRESULT(*)(::PVOID, ::AkPlaylistArray*))((::PBYTE)hIl2Cpp + AKPLAYLISTARRAY_COPY_OFFSET))(this, in_rSource);
	}
};
