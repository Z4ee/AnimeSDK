#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKRESULT.h"
#include "unitysdk/AkPlaylistArray.h"

class AkExternalSourceInfoArray;

#define AKPLAYLIST_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EEE69A0)
#define AKPLAYLIST_ENQUEUE_1_OFFSET UNITYSDK_OFFSET(0x1EEE6E80)
#define AKPLAYLIST_ENQUEUE_2_OFFSET UNITYSDK_OFFSET(0x1EEE6F70)
#define AKPLAYLIST_ENQUEUE_3_OFFSET UNITYSDK_OFFSET(0x1EEE7050)
#define AKPLAYLIST_ENQUEUE_4_OFFSET UNITYSDK_OFFSET(0x1EEE7120)
#define AKPLAYLIST_ENQUEUE_OFFSET UNITYSDK_OFFSET(0x1EEE6D70)
#define AKPLAYLIST_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1EEE67F0)
#define AKPLAYLIST_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1EEE6840)
#define AKPLAYLIST__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EEE71E0)
#define AKPLAYLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEE6750)

inline static constexpr unsigned int AkPlaylist_TypeDefinitionIndex = 43582;

class AkPlaylist : public ::AkPlaylistArray
{
public:
	::System::IntPtr swigCPtr; // 0x20

	::System::Void _ctor(::System::IntPtr a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKPLAYLIST__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPLAYLIST__CTOR_1_OFFSET))(this);
	}

	static ::System::IntPtr getCPtr(::AkPlaylist* a1)
	{
		return ((::System::IntPtr(*)(::AkPlaylist*))((::PBYTE)hIl2Cpp + AKPLAYLIST_GETCPTR_OFFSET))(a1);
	}

	::System::Void setCPtr(::System::IntPtr a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKPLAYLIST_SETCPTR_OFFSET))(this, a1);
	}

	::System::Void Dispose(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKPLAYLIST_DISPOSE_OFFSET))(this, a1);
	}

	::AKRESULT Enqueue(::System::UInt32 a1, ::System::Int32 a2, ::System::IntPtr a3, ::System::UInt32 a4, ::AkExternalSourceInfoArray* a5)
	{
		return ((::AKRESULT(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::IntPtr, ::System::UInt32, ::AkExternalSourceInfoArray*))((::PBYTE)hIl2Cpp + AKPLAYLIST_ENQUEUE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::AKRESULT Enqueue_1(::System::UInt32 a1, ::System::Int32 a2, ::System::IntPtr a3, ::System::UInt32 a4)
	{
		return ((::AKRESULT(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::IntPtr, ::System::UInt32))((::PBYTE)hIl2Cpp + AKPLAYLIST_ENQUEUE_1_OFFSET))(this, a1, a2, a3, a4);
	}

	::AKRESULT Enqueue_2(::System::UInt32 a1, ::System::Int32 a2, ::System::IntPtr a3)
	{
		return ((::AKRESULT(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKPLAYLIST_ENQUEUE_2_OFFSET))(this, a1, a2, a3);
	}

	::AKRESULT Enqueue_3(::System::UInt32 a1, ::System::Int32 a2)
	{
		return ((::AKRESULT(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + AKPLAYLIST_ENQUEUE_3_OFFSET))(this, a1, a2);
	}

	::AKRESULT Enqueue_4(::System::UInt32 a1)
	{
		return ((::AKRESULT(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKPLAYLIST_ENQUEUE_4_OFFSET))(this, a1);
	}
};
