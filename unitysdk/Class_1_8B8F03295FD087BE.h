#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SpecialAvatarType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_8B8F03295FD087BE_GET_ISAUTOBATTLE_OFFSET UNITYSDK_OFFSET(0xBD55530)
#define CLASS_1_8B8F03295FD087BE_GET_ISDISABLESWITCH_OFFSET UNITYSDK_OFFSET(0xBD55510)
#define CLASS_1_8B8F03295FD087BE_GET_JSONCONFIGPATH_OFFSET UNITYSDK_OFFSET(0xBD554D0)
#define CLASS_1_8B8F03295FD087BE_GET_LOCKBATTLEINFO_OFFSET UNITYSDK_OFFSET(0xBD554B0)
#define CLASS_1_8B8F03295FD087BE_GET_PLAYERJSONCONFIGPATH_OFFSET UNITYSDK_OFFSET(0xBD554F0)
#define CLASS_1_8B8F03295FD087BE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xBD55470)
#define CLASS_1_8B8F03295FD087BE_GET_WORLDLEVEL_OFFSET UNITYSDK_OFFSET(0xBD55490)
#define CLASS_1_8B8F03295FD087BE_SET_ISAUTOBATTLE_OFFSET UNITYSDK_OFFSET(0xBD55540)
#define CLASS_1_8B8F03295FD087BE_SET_ISDISABLESWITCH_OFFSET UNITYSDK_OFFSET(0xBD55520)
#define CLASS_1_8B8F03295FD087BE_SET_JSONCONFIGPATH_OFFSET UNITYSDK_OFFSET(0xBD554E0)
#define CLASS_1_8B8F03295FD087BE_SET_LOCKBATTLEINFO_OFFSET UNITYSDK_OFFSET(0xBD554C0)
#define CLASS_1_8B8F03295FD087BE_SET_PLAYERJSONCONFIGPATH_OFFSET UNITYSDK_OFFSET(0xBD55500)
#define CLASS_1_8B8F03295FD087BE_SET_TYPE_OFFSET UNITYSDK_OFFSET(0xBD55480)
#define CLASS_1_8B8F03295FD087BE_SET_WORLDLEVEL_OFFSET UNITYSDK_OFFSET(0xBD554A0)
#define CLASS_1_8B8F03295FD087BE__CTOR_OFFSET UNITYSDK_OFFSET(0xBD55550)

inline static constexpr unsigned int Class_1_8B8F03295FD087BE_TypeDefinitionIndex = 51955;

class Class_1_8B8F03295FD087BE : public ::System::Object
{
public:
	::System::String* _PlayerJsonConfigPath_k__BackingField; // 0x10
	::System::String* _JsonConfigPath_k__BackingField; // 0x18
	::RPG::GameCore::SpecialAvatarType _Type_k__BackingField; // 0x20
	::System::UInt32 _WorldLevel_k__BackingField; // 0x24
	::System::Boolean _IsDisableSwitch_k__BackingField; // 0x28
	::System::Boolean _IsAutoBattle_k__BackingField; // 0x29
	::System::Boolean _LockBattleInfo_k__BackingField; // 0x2A

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B8F03295FD087BE__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::SpecialAvatarType get_Type()
	{
		return ((::RPG::GameCore::SpecialAvatarType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B8F03295FD087BE_GET_TYPE_OFFSET))(this);
	}

	::System::Void set_Type(::RPG::GameCore::SpecialAvatarType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SpecialAvatarType))((::PBYTE)hIl2Cpp + CLASS_1_8B8F03295FD087BE_SET_TYPE_OFFSET))(this, a1);
	}

	::System::UInt32 get_WorldLevel()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B8F03295FD087BE_GET_WORLDLEVEL_OFFSET))(this);
	}

	::System::Void set_WorldLevel(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8B8F03295FD087BE_SET_WORLDLEVEL_OFFSET))(this, a1);
	}

	::System::Boolean get_LockBattleInfo()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B8F03295FD087BE_GET_LOCKBATTLEINFO_OFFSET))(this);
	}

	::System::Void set_LockBattleInfo(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8B8F03295FD087BE_SET_LOCKBATTLEINFO_OFFSET))(this, a1);
	}

	::System::String* get_JsonConfigPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B8F03295FD087BE_GET_JSONCONFIGPATH_OFFSET))(this);
	}

	::System::Void set_JsonConfigPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8B8F03295FD087BE_SET_JSONCONFIGPATH_OFFSET))(this, a1);
	}

	::System::String* get_PlayerJsonConfigPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B8F03295FD087BE_GET_PLAYERJSONCONFIGPATH_OFFSET))(this);
	}

	::System::Void set_PlayerJsonConfigPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8B8F03295FD087BE_SET_PLAYERJSONCONFIGPATH_OFFSET))(this, a1);
	}

	::System::Boolean get_IsDisableSwitch()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B8F03295FD087BE_GET_ISDISABLESWITCH_OFFSET))(this);
	}

	::System::Void set_IsDisableSwitch(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8B8F03295FD087BE_SET_ISDISABLESWITCH_OFFSET))(this, a1);
	}

	::System::Boolean get_IsAutoBattle()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B8F03295FD087BE_GET_ISAUTOBATTLE_OFFSET))(this);
	}

	::System::Void set_IsAutoBattle(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8B8F03295FD087BE_SET_ISAUTOBATTLE_OFFSET))(this, a1);
	}
};
