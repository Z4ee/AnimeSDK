#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AkPlaylistItem;

#define AKITERATOR_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1E7FB410)
#define AKITERATOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E7FB2F0)
#define AKITERATOR_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1E7FB3A0)
#define AKITERATOR_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1E7FB230)
#define AKITERATOR_GETITEM_OFFSET UNITYSDK_OFFSET(0x1E7FB8E0)
#define AKITERATOR_GET_PITEM_OFFSET UNITYSDK_OFFSET(0x1E7FB660)
#define AKITERATOR_ISDIFFERENTFROM_OFFSET UNITYSDK_OFFSET(0x1E7FBA60)
#define AKITERATOR_ISEQUALTO_OFFSET UNITYSDK_OFFSET(0x1E7FB9B0)
#define AKITERATOR_NEXTITER_OFFSET UNITYSDK_OFFSET(0x1E7FB740)
#define AKITERATOR_PREVITER_OFFSET UNITYSDK_OFFSET(0x1E7FB810)
#define AKITERATOR_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1E7FB240)
#define AKITERATOR_SET_PITEM_OFFSET UNITYSDK_OFFSET(0x1E7FB5C0)
#define AKITERATOR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7FBB10)
#define AKITERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7FB220)

inline static constexpr unsigned int AkIterator_TypeDefinitionIndex = 32975;

class AkIterator : public ::System::Object
{
public:
	::System::IntPtr swigCPtr; // 0x10
	::System::Boolean swigCMemOwn; // 0x18

	::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKITERATOR__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKITERATOR__CTOR_1_OFFSET))(this);
	}

	static ::System::IntPtr getCPtr(::AkIterator* obj)
	{
		return ((::System::IntPtr(*)(::AkIterator*))((::PBYTE)hIl2Cpp + AKITERATOR_GETCPTR_OFFSET))(obj);
	}

	::System::Void setCPtr(::System::IntPtr cPtr)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKITERATOR_SETCPTR_OFFSET))(this, cPtr);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKITERATOR_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKITERATOR_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean disposing)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKITERATOR_DISPOSE_1_OFFSET))(this, disposing);
	}

	::System::Void set_pItem(::AkPlaylistItem* value)
	{
		return ((::System::Void(*)(::PVOID, ::AkPlaylistItem*))((::PBYTE)hIl2Cpp + AKITERATOR_SET_PITEM_OFFSET))(this, value);
	}

	::AkPlaylistItem* get_pItem()
	{
		return ((::AkPlaylistItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKITERATOR_GET_PITEM_OFFSET))(this);
	}

	::AkIterator* NextIter()
	{
		return ((::AkIterator*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKITERATOR_NEXTITER_OFFSET))(this);
	}

	::AkIterator* PrevIter()
	{
		return ((::AkIterator*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKITERATOR_PREVITER_OFFSET))(this);
	}

	::AkPlaylistItem* GetItem()
	{
		return ((::AkPlaylistItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKITERATOR_GETITEM_OFFSET))(this);
	}

	::System::Boolean IsEqualTo(::AkIterator* in_rOp)
	{
		return ((::System::Boolean(*)(::PVOID, ::AkIterator*))((::PBYTE)hIl2Cpp + AKITERATOR_ISEQUALTO_OFFSET))(this, in_rOp);
	}

	::System::Boolean IsDifferentFrom(::AkIterator* in_rOp)
	{
		return ((::System::Boolean(*)(::PVOID, ::AkIterator*))((::PBYTE)hIl2Cpp + AKITERATOR_ISDIFFERENTFROM_OFFSET))(this, in_rOp);
	}
};
