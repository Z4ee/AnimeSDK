#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SpecialAvatarType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_6D00CC7200247FB9_GET_ISAUTOBATTLE_OFFSET UNITYSDK_OFFSET(0x1156AE40)
#define CLASS_1_6D00CC7200247FB9_GET_ISDISABLESWITCH_OFFSET UNITYSDK_OFFSET(0x1156AE20)
#define CLASS_1_6D00CC7200247FB9_GET_JSONCONFIGPATH_OFFSET UNITYSDK_OFFSET(0x1156ADE0)
#define CLASS_1_6D00CC7200247FB9_GET_LOCKBATTLEINFO_OFFSET UNITYSDK_OFFSET(0x1156ADC0)
#define CLASS_1_6D00CC7200247FB9_GET_PLAYERJSONCONFIGPATH_OFFSET UNITYSDK_OFFSET(0x1156AE00)
#define CLASS_1_6D00CC7200247FB9_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1156AD80)
#define CLASS_1_6D00CC7200247FB9_GET_WORLDLEVEL_OFFSET UNITYSDK_OFFSET(0x1156ADA0)
#define CLASS_1_6D00CC7200247FB9_SET_ISAUTOBATTLE_OFFSET UNITYSDK_OFFSET(0x1156AE50)
#define CLASS_1_6D00CC7200247FB9_SET_ISDISABLESWITCH_OFFSET UNITYSDK_OFFSET(0x1156AE30)
#define CLASS_1_6D00CC7200247FB9_SET_JSONCONFIGPATH_OFFSET UNITYSDK_OFFSET(0x1156ADF0)
#define CLASS_1_6D00CC7200247FB9_SET_LOCKBATTLEINFO_OFFSET UNITYSDK_OFFSET(0x1156ADD0)
#define CLASS_1_6D00CC7200247FB9_SET_PLAYERJSONCONFIGPATH_OFFSET UNITYSDK_OFFSET(0x1156AE10)
#define CLASS_1_6D00CC7200247FB9_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x1156AD90)
#define CLASS_1_6D00CC7200247FB9_SET_WORLDLEVEL_OFFSET UNITYSDK_OFFSET(0x1156ADB0)
#define CLASS_1_6D00CC7200247FB9__CTOR_OFFSET UNITYSDK_OFFSET(0x1156AE60)

inline static constexpr unsigned int Class_1_6D00CC7200247FB9_TypeDefinitionIndex = 41995;

class Class_1_6D00CC7200247FB9 : public ::System::Object
{
public:
	::System::String* _PlayerJsonConfigPath_k__BackingField; // 0x10
	::System::String* _JsonConfigPath_k__BackingField; // 0x18
	::RPG::GameCore::SpecialAvatarType _Type_k__BackingField; // 0x20
	::System::Boolean _IsDisableSwitch_k__BackingField; // 0x24
	::System::Boolean _IsAutoBattle_k__BackingField; // 0x25
	::System::Boolean _LockBattleInfo_k__BackingField; // 0x26
	::System::UInt32 _WorldLevel_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D00CC7200247FB9__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::SpecialAvatarType get_Type()
	{
		return ((::RPG::GameCore::SpecialAvatarType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D00CC7200247FB9_GET_TYPE_OFFSET))(this);
	}

	::System::Void set_Type(::RPG::GameCore::SpecialAvatarType value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SpecialAvatarType))((::PBYTE)hIl2Cpp + CLASS_1_6D00CC7200247FB9_SET_TYPE_OFFSET))(this, value);
	}

	::System::UInt32 get_WorldLevel()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D00CC7200247FB9_GET_WORLDLEVEL_OFFSET))(this);
	}

	::System::Void set_WorldLevel(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6D00CC7200247FB9_SET_WORLDLEVEL_OFFSET))(this, value);
	}

	::System::Boolean get_LockBattleInfo()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D00CC7200247FB9_GET_LOCKBATTLEINFO_OFFSET))(this);
	}

	::System::Void set_LockBattleInfo(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6D00CC7200247FB9_SET_LOCKBATTLEINFO_OFFSET))(this, value);
	}

	::System::String* get_JsonConfigPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D00CC7200247FB9_GET_JSONCONFIGPATH_OFFSET))(this);
	}

	::System::Void set_JsonConfigPath(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6D00CC7200247FB9_SET_JSONCONFIGPATH_OFFSET))(this, value);
	}

	::System::String* get_PlayerJsonConfigPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D00CC7200247FB9_GET_PLAYERJSONCONFIGPATH_OFFSET))(this);
	}

	::System::Void set_PlayerJsonConfigPath(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6D00CC7200247FB9_SET_PLAYERJSONCONFIGPATH_OFFSET))(this, value);
	}

	::System::Boolean get_IsDisableSwitch()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D00CC7200247FB9_GET_ISDISABLESWITCH_OFFSET))(this);
	}

	::System::Void set_IsDisableSwitch(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6D00CC7200247FB9_SET_ISDISABLESWITCH_OFFSET))(this, value);
	}

	::System::Boolean get_IsAutoBattle()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D00CC7200247FB9_GET_ISAUTOBATTLE_OFFSET))(this);
	}

	::System::Void set_IsAutoBattle(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6D00CC7200247FB9_SET_ISAUTOBATTLE_OFFSET))(this, value);
	}
};
