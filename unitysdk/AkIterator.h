#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AkPlaylistItem;

#define AKITERATOR_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1F56E260)
#define AKITERATOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F56E070)
#define AKITERATOR_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1F56E190)
#define AKITERATOR_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1F56DFC0)
#define AKITERATOR_GETITEM_OFFSET UNITYSDK_OFFSET(0x1F56E870)
#define AKITERATOR_GET_PITEM_OFFSET UNITYSDK_OFFSET(0x1F56E560)
#define AKITERATOR_ISDIFFERENTFROM_OFFSET UNITYSDK_OFFSET(0x1F56EA90)
#define AKITERATOR_ISEQUALTO_OFFSET UNITYSDK_OFFSET(0x1F56E970)
#define AKITERATOR_NEXTITER_OFFSET UNITYSDK_OFFSET(0x1F56E670)
#define AKITERATOR_PREVITER_OFFSET UNITYSDK_OFFSET(0x1F56E770)
#define AKITERATOR_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1F56E010)
#define AKITERATOR_SET_PITEM_OFFSET UNITYSDK_OFFSET(0x1F56E440)
#define AKITERATOR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F56EBB0)
#define AKITERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1F56DFB0)

inline static constexpr unsigned int AkIterator_TypeDefinitionIndex = 44748;

class AkIterator : public ::System::Object
{
public:
	::System::IntPtr swigCPtr; // 0x10
	::System::Boolean swigCMemOwn; // 0x18

	::System::Void _ctor(::System::IntPtr a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKITERATOR__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKITERATOR__CTOR_1_OFFSET))(this);
	}

	static ::System::IntPtr getCPtr(::AkIterator* a1)
	{
		return ((::System::IntPtr(*)(::AkIterator*))((::PBYTE)hIl2Cpp + AKITERATOR_GETCPTR_OFFSET))(a1);
	}

	::System::Void setCPtr(::System::IntPtr a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKITERATOR_SETCPTR_OFFSET))(this, a1);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKITERATOR_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKITERATOR_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKITERATOR_DISPOSE_1_OFFSET))(this, a1);
	}

	::System::Void set_pItem(::AkPlaylistItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::AkPlaylistItem*))((::PBYTE)hIl2Cpp + AKITERATOR_SET_PITEM_OFFSET))(this, a1);
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

	::System::Boolean IsEqualTo(::AkIterator* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::AkIterator*))((::PBYTE)hIl2Cpp + AKITERATOR_ISEQUALTO_OFFSET))(this, a1);
	}

	::System::Boolean IsDifferentFrom(::AkIterator* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::AkIterator*))((::PBYTE)hIl2Cpp + AKITERATOR_ISDIFFERENTFROM_OFFSET))(this, a1);
	}
};
