#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_6293765FEB857026_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x11B13710)
#define CLASS_1_6293765FEB857026_GET_INITIALPOINT_OFFSET UNITYSDK_OFFSET(0x11B13730)
#define CLASS_1_6293765FEB857026_GET_ISPLAYERTEAM_OFFSET UNITYSDK_OFFSET(0x11B13750)
#define CLASS_1_6293765FEB857026_GET_NAME_OFFSET UNITYSDK_OFFSET(0x11B136F0)
#define CLASS_1_6293765FEB857026_GET_TEAMID_OFFSET UNITYSDK_OFFSET(0x11B136D0)
#define CLASS_1_6293765FEB857026_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x11B13720)
#define CLASS_1_6293765FEB857026_SET_INITIALPOINT_OFFSET UNITYSDK_OFFSET(0x11B13740)
#define CLASS_1_6293765FEB857026_SET_ISPLAYERTEAM_OFFSET UNITYSDK_OFFSET(0x11B13760)
#define CLASS_1_6293765FEB857026_SET_NAME_OFFSET UNITYSDK_OFFSET(0x11B13700)
#define CLASS_1_6293765FEB857026_SET_TEAMID_OFFSET UNITYSDK_OFFSET(0x11B136E0)
#define CLASS_1_6293765FEB857026__CTOR_OFFSET UNITYSDK_OFFSET(0x11B13770)

inline static constexpr unsigned int Class_1_6293765FEB857026_TypeDefinitionIndex = 80396;

class Class_1_6293765FEB857026 : public ::System::Object
{
public:
	::System::String* _IconPath_k__BackingField; // 0x10
	::System::Boolean _IsPlayerTeam_k__BackingField; // 0x18
	::System::UInt32 _InitialPoint_k__BackingField; // 0x1C
	::RPG::Client::TextID _Name_k__BackingField; // 0x20
	::System::UInt32 _TeamID_k__BackingField; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6293765FEB857026__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_TeamID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6293765FEB857026_GET_TEAMID_OFFSET))(this);
	}

	::System::Void set_TeamID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6293765FEB857026_SET_TEAMID_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_Name()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6293765FEB857026_GET_NAME_OFFSET))(this);
	}

	::System::Void set_Name(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_6293765FEB857026_SET_NAME_OFFSET))(this, a1);
	}

	::System::String* get_IconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6293765FEB857026_GET_ICONPATH_OFFSET))(this);
	}

	::System::Void set_IconPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6293765FEB857026_SET_ICONPATH_OFFSET))(this, a1);
	}

	::System::UInt32 get_InitialPoint()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6293765FEB857026_GET_INITIALPOINT_OFFSET))(this);
	}

	::System::Void set_InitialPoint(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6293765FEB857026_SET_INITIALPOINT_OFFSET))(this, a1);
	}

	::System::Boolean get_IsPlayerTeam()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6293765FEB857026_GET_ISPLAYERTEAM_OFFSET))(this);
	}

	::System::Void set_IsPlayerTeam(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6293765FEB857026_SET_ISPLAYERTEAM_OFFSET))(this, a1);
	}
};
