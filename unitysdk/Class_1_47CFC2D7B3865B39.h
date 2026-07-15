#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TeamTowersPlayerSkillType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_47CFC2D7B3865B39_GET_DESC_OFFSET UNITYSDK_OFFSET(0x16D96040)
#define CLASS_1_47CFC2D7B3865B39_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x16D96020)
#define CLASS_1_47CFC2D7B3865B39_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x16D96000)
#define CLASS_1_47CFC2D7B3865B39_GET_NAME_OFFSET UNITYSDK_OFFSET(0x16D96060)
#define CLASS_1_47CFC2D7B3865B39_GET_SKILLID_OFFSET UNITYSDK_OFFSET(0x16D95FE0)
#define CLASS_1_47CFC2D7B3865B39_GET_SKILLTYPE_OFFSET UNITYSDK_OFFSET(0x16D960A0)
#define CLASS_1_47CFC2D7B3865B39_GET_VIDEOID_OFFSET UNITYSDK_OFFSET(0x16D96080)
#define CLASS_1_47CFC2D7B3865B39_SET_DESC_OFFSET UNITYSDK_OFFSET(0x16D96050)
#define CLASS_1_47CFC2D7B3865B39_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x16D96030)
#define CLASS_1_47CFC2D7B3865B39_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x16D96010)
#define CLASS_1_47CFC2D7B3865B39_SET_NAME_OFFSET UNITYSDK_OFFSET(0x16D96070)
#define CLASS_1_47CFC2D7B3865B39_SET_SKILLID_OFFSET UNITYSDK_OFFSET(0x16D95FF0)
#define CLASS_1_47CFC2D7B3865B39_SET_SKILLTYPE_OFFSET UNITYSDK_OFFSET(0x16D960B0)
#define CLASS_1_47CFC2D7B3865B39_SET_VIDEOID_OFFSET UNITYSDK_OFFSET(0x16D96090)
#define CLASS_1_47CFC2D7B3865B39__CTOR_OFFSET UNITYSDK_OFFSET(0x16D95F00)

inline static constexpr unsigned int Class_1_47CFC2D7B3865B39_TypeDefinitionIndex = 75063;

class Class_1_47CFC2D7B3865B39 : public ::System::Object
{
public:
	::System::String* _IconPath_k__BackingField; // 0x10
	::RPG::Client::TextID _Desc_k__BackingField; // 0x18
	::RPG::GameCore::TeamTowersPlayerSkillType _SkillType_k__BackingField; // 0x28
	::System::UInt32 _Level_k__BackingField; // 0x2C
	::System::UInt32 _VideoID_k__BackingField; // 0x30
	::System::UInt32 _SkillID_k__BackingField; // 0x34
	::RPG::Client::TextID _Name_k__BackingField; // 0x38

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_47CFC2D7B3865B39__CTOR_OFFSET))(this, a1, a2);
	}

	::System::UInt32 get_SkillID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47CFC2D7B3865B39_GET_SKILLID_OFFSET))(this);
	}

	::System::Void set_SkillID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_47CFC2D7B3865B39_SET_SKILLID_OFFSET))(this, a1);
	}

	::System::UInt32 get_Level()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47CFC2D7B3865B39_GET_LEVEL_OFFSET))(this);
	}

	::System::Void set_Level(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_47CFC2D7B3865B39_SET_LEVEL_OFFSET))(this, a1);
	}

	::System::String* get_IconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47CFC2D7B3865B39_GET_ICONPATH_OFFSET))(this);
	}

	::System::Void set_IconPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_47CFC2D7B3865B39_SET_ICONPATH_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_Desc()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47CFC2D7B3865B39_GET_DESC_OFFSET))(this);
	}

	::System::Void set_Desc(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_47CFC2D7B3865B39_SET_DESC_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_Name()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47CFC2D7B3865B39_GET_NAME_OFFSET))(this);
	}

	::System::Void set_Name(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_47CFC2D7B3865B39_SET_NAME_OFFSET))(this, a1);
	}

	::System::UInt32 get_VideoID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47CFC2D7B3865B39_GET_VIDEOID_OFFSET))(this);
	}

	::System::Void set_VideoID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_47CFC2D7B3865B39_SET_VIDEOID_OFFSET))(this, a1);
	}

	::RPG::GameCore::TeamTowersPlayerSkillType get_SkillType()
	{
		return ((::RPG::GameCore::TeamTowersPlayerSkillType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47CFC2D7B3865B39_GET_SKILLTYPE_OFFSET))(this);
	}

	::System::Void set_SkillType(::RPG::GameCore::TeamTowersPlayerSkillType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TeamTowersPlayerSkillType))((::PBYTE)hIl2Cpp + CLASS_1_47CFC2D7B3865B39_SET_SKILLTYPE_OFFSET))(this, a1);
	}
};
