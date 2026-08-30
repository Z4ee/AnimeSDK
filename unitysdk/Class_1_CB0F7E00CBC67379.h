#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_CB0F7E00CBC67379_GET_DARKMINIMAPPATH_OFFSET UNITYSDK_OFFSET(0xB7D62E0)
#define CLASS_1_CB0F7E00CBC67379_GET_LITTLEGAMECONFIGPATH_OFFSET UNITYSDK_OFFSET(0xB7D62A0)
#define CLASS_1_CB0F7E00CBC67379_GET_MINIMAPPATH_OFFSET UNITYSDK_OFFSET(0xB7D62C0)
#define CLASS_1_CB0F7E00CBC67379_GET_NAME_OFFSET UNITYSDK_OFFSET(0xB7D6280)
#define CLASS_1_CB0F7E00CBC67379_GET_RECORDDRIVERICONPATH_OFFSET UNITYSDK_OFFSET(0xB7D6340)
#define CLASS_1_CB0F7E00CBC67379_GET_RECORDDRIVERNAME_OFFSET UNITYSDK_OFFSET(0xB7D6320)
#define CLASS_1_CB0F7E00CBC67379_GET_RECORDTIME_OFFSET UNITYSDK_OFFSET(0xB7D6360)
#define CLASS_1_CB0F7E00CBC67379_GET_TOTALLAP_OFFSET UNITYSDK_OFFSET(0xB7D6300)
#define CLASS_1_CB0F7E00CBC67379_GET_TRACKID_OFFSET UNITYSDK_OFFSET(0xB7D6260)
#define CLASS_1_CB0F7E00CBC67379_SET_DARKMINIMAPPATH_OFFSET UNITYSDK_OFFSET(0xB7D62F0)
#define CLASS_1_CB0F7E00CBC67379_SET_LITTLEGAMECONFIGPATH_OFFSET UNITYSDK_OFFSET(0xB7D62B0)
#define CLASS_1_CB0F7E00CBC67379_SET_MINIMAPPATH_OFFSET UNITYSDK_OFFSET(0xB7D62D0)
#define CLASS_1_CB0F7E00CBC67379_SET_NAME_OFFSET UNITYSDK_OFFSET(0xB7D6290)
#define CLASS_1_CB0F7E00CBC67379_SET_RECORDDRIVERICONPATH_OFFSET UNITYSDK_OFFSET(0xB7D6350)
#define CLASS_1_CB0F7E00CBC67379_SET_RECORDDRIVERNAME_OFFSET UNITYSDK_OFFSET(0xB7D6330)
#define CLASS_1_CB0F7E00CBC67379_SET_RECORDTIME_OFFSET UNITYSDK_OFFSET(0xB7D6370)
#define CLASS_1_CB0F7E00CBC67379_SET_TOTALLAP_OFFSET UNITYSDK_OFFSET(0xB7D6310)
#define CLASS_1_CB0F7E00CBC67379_SET_TRACKID_OFFSET UNITYSDK_OFFSET(0xB7D6270)
#define CLASS_1_CB0F7E00CBC67379__CTOR_OFFSET UNITYSDK_OFFSET(0xB7D6380)

inline static constexpr unsigned int Class_1_CB0F7E00CBC67379_TypeDefinitionIndex = 80343;

class Class_1_CB0F7E00CBC67379 : public ::System::Object
{
public:
	::System::String* _DarkMiniMapPath_k__BackingField; // 0x10
	::System::String* _RecordDriverIconPath_k__BackingField; // 0x18
	::System::String* _MinimapPath_k__BackingField; // 0x20
	::System::String* _LittleGameConfigPath_k__BackingField; // 0x28
	::RPG::Client::TextID _Name_k__BackingField; // 0x30
	::System::Single _RecordTime_k__BackingField; // 0x40
	::System::UInt32 _TotalLap_k__BackingField; // 0x44
	::RPG::Client::TextID _RecordDriverName_k__BackingField; // 0x48
	::System::UInt32 _TrackID_k__BackingField; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB0F7E00CBC67379__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_TrackID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB0F7E00CBC67379_GET_TRACKID_OFFSET))(this);
	}

	::System::Void set_TrackID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CB0F7E00CBC67379_SET_TRACKID_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_Name()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB0F7E00CBC67379_GET_NAME_OFFSET))(this);
	}

	::System::Void set_Name(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_CB0F7E00CBC67379_SET_NAME_OFFSET))(this, a1);
	}

	::System::String* get_LittleGameConfigPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB0F7E00CBC67379_GET_LITTLEGAMECONFIGPATH_OFFSET))(this);
	}

	::System::Void set_LittleGameConfigPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CB0F7E00CBC67379_SET_LITTLEGAMECONFIGPATH_OFFSET))(this, a1);
	}

	::System::String* get_MinimapPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB0F7E00CBC67379_GET_MINIMAPPATH_OFFSET))(this);
	}

	::System::Void set_MinimapPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CB0F7E00CBC67379_SET_MINIMAPPATH_OFFSET))(this, a1);
	}

	::System::String* get_DarkMiniMapPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB0F7E00CBC67379_GET_DARKMINIMAPPATH_OFFSET))(this);
	}

	::System::Void set_DarkMiniMapPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CB0F7E00CBC67379_SET_DARKMINIMAPPATH_OFFSET))(this, a1);
	}

	::System::UInt32 get_TotalLap()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB0F7E00CBC67379_GET_TOTALLAP_OFFSET))(this);
	}

	::System::Void set_TotalLap(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CB0F7E00CBC67379_SET_TOTALLAP_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_RecordDriverName()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB0F7E00CBC67379_GET_RECORDDRIVERNAME_OFFSET))(this);
	}

	::System::Void set_RecordDriverName(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_CB0F7E00CBC67379_SET_RECORDDRIVERNAME_OFFSET))(this, a1);
	}

	::System::String* get_RecordDriverIconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB0F7E00CBC67379_GET_RECORDDRIVERICONPATH_OFFSET))(this);
	}

	::System::Void set_RecordDriverIconPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CB0F7E00CBC67379_SET_RECORDDRIVERICONPATH_OFFSET))(this, a1);
	}

	::System::Single get_RecordTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB0F7E00CBC67379_GET_RECORDTIME_OFFSET))(this);
	}

	::System::Void set_RecordTime(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CB0F7E00CBC67379_SET_RECORDTIME_OFFSET))(this, a1);
	}
};
