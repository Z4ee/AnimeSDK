#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkEventCallbackInfo.h"

#define AKMUSICPLAYLISTCALLBACKINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DA9A8C0)
#define AKMUSICPLAYLISTCALLBACKINFO_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1DA9A7A0)
#define AKMUSICPLAYLISTCALLBACKINFO_GET_PLAYLISTID_OFFSET UNITYSDK_OFFSET(0x1DA9AAB0)
#define AKMUSICPLAYLISTCALLBACKINFO_GET_UNUMPLAYLISTITEMS_OFFSET UNITYSDK_OFFSET(0x1DA9AB60)
#define AKMUSICPLAYLISTCALLBACKINFO_GET_UPLAYLISTITEMDONE_OFFSET UNITYSDK_OFFSET(0x1DA9ACC0)
#define AKMUSICPLAYLISTCALLBACKINFO_GET_UPLAYLISTSELECTION_OFFSET UNITYSDK_OFFSET(0x1DA9AC10)
#define AKMUSICPLAYLISTCALLBACKINFO_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1DA9A7F0)
#define AKMUSICPLAYLISTCALLBACKINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DA9AD70)
#define AKMUSICPLAYLISTCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA9A690)

inline static constexpr unsigned int AkMusicPlaylistCallbackInfo_TypeDefinitionIndex = 43575;

class AkMusicPlaylistCallbackInfo : public ::AkEventCallbackInfo
{
public:
	::System::IntPtr swigCPtr; // 0x28

	::System::Void _ctor(::System::IntPtr a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKMUSICPLAYLISTCALLBACKINFO__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMUSICPLAYLISTCALLBACKINFO__CTOR_1_OFFSET))(this);
	}

	static ::System::IntPtr getCPtr(::AkMusicPlaylistCallbackInfo* a1)
	{
		return ((::System::IntPtr(*)(::AkMusicPlaylistCallbackInfo*))((::PBYTE)hIl2Cpp + AKMUSICPLAYLISTCALLBACKINFO_GETCPTR_OFFSET))(a1);
	}

	::System::Void setCPtr(::System::IntPtr a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKMUSICPLAYLISTCALLBACKINFO_SETCPTR_OFFSET))(this, a1);
	}

	::System::Void Dispose(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKMUSICPLAYLISTCALLBACKINFO_DISPOSE_OFFSET))(this, a1);
	}

	::System::UInt32 get_playlistID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMUSICPLAYLISTCALLBACKINFO_GET_PLAYLISTID_OFFSET))(this);
	}

	::System::UInt32 get_uNumPlaylistItems()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMUSICPLAYLISTCALLBACKINFO_GET_UNUMPLAYLISTITEMS_OFFSET))(this);
	}

	::System::UInt32 get_uPlaylistSelection()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMUSICPLAYLISTCALLBACKINFO_GET_UPLAYLISTSELECTION_OFFSET))(this);
	}

	::System::UInt32 get_uPlaylistItemDone()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMUSICPLAYLISTCALLBACKINFO_GET_UPLAYLISTITEMDONE_OFFSET))(this);
	}
};
