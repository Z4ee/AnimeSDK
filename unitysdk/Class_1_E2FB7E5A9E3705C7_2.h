#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_E2FB7E5A9E3705C7_2_GET_DESCASNEXTLEVEL_OFFSET UNITYSDK_OFFSET(0xB9597A0)
#define CLASS_1_E2FB7E5A9E3705C7_2_GET_DESCASPRELEVEL_OFFSET UNITYSDK_OFFSET(0xB959780)
#define CLASS_1_E2FB7E5A9E3705C7_2_GET_DESC_OFFSET UNITYSDK_OFFSET(0xB959760)
#define CLASS_1_E2FB7E5A9E3705C7_2_GET_ICON128PATH_OFFSET UNITYSDK_OFFSET(0xB9597C0)
#define CLASS_1_E2FB7E5A9E3705C7_2_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xB959720)
#define CLASS_1_E2FB7E5A9E3705C7_2_GET_NAME_OFFSET UNITYSDK_OFFSET(0xB959740)
#define CLASS_1_E2FB7E5A9E3705C7_2_GET_SKILLID_OFFSET UNITYSDK_OFFSET(0xB959700)
#define CLASS_1_E2FB7E5A9E3705C7_2_SET_DESCASNEXTLEVEL_OFFSET UNITYSDK_OFFSET(0xB9597B0)
#define CLASS_1_E2FB7E5A9E3705C7_2_SET_DESCASPRELEVEL_OFFSET UNITYSDK_OFFSET(0xB959790)
#define CLASS_1_E2FB7E5A9E3705C7_2_SET_DESC_OFFSET UNITYSDK_OFFSET(0xB959770)
#define CLASS_1_E2FB7E5A9E3705C7_2_SET_ICON128PATH_OFFSET UNITYSDK_OFFSET(0xB9597D0)
#define CLASS_1_E2FB7E5A9E3705C7_2_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xB959730)
#define CLASS_1_E2FB7E5A9E3705C7_2_SET_NAME_OFFSET UNITYSDK_OFFSET(0xB959750)
#define CLASS_1_E2FB7E5A9E3705C7_2_SET_SKILLID_OFFSET UNITYSDK_OFFSET(0xB959710)
#define CLASS_1_E2FB7E5A9E3705C7_2__CTOR_OFFSET UNITYSDK_OFFSET(0xB9597E0)

inline static constexpr unsigned int Class_1_E2FB7E5A9E3705C7_2_TypeDefinitionIndex = 81695;

class Class_1_E2FB7E5A9E3705C7_2 : public ::System::Object
{
public:
	::System::String* _Icon128Path_k__BackingField; // 0x10
	::RPG::Client::TextID _DescAsNextLevel_k__BackingField; // 0x18
	::System::UInt32 _Level_k__BackingField; // 0x28
	::System::UInt32 _SkillID_k__BackingField; // 0x2C
	::RPG::Client::TextID _Name_k__BackingField; // 0x30
	::RPG::Client::TextID _Desc_k__BackingField; // 0x40
	::RPG::Client::TextID _DescAsPreLevel_k__BackingField; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2FB7E5A9E3705C7_2__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_SkillID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2FB7E5A9E3705C7_2_GET_SKILLID_OFFSET))(this);
	}

	::System::Void set_SkillID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E2FB7E5A9E3705C7_2_SET_SKILLID_OFFSET))(this, a1);
	}

	::System::UInt32 get_Level()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2FB7E5A9E3705C7_2_GET_LEVEL_OFFSET))(this);
	}

	::System::Void set_Level(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E2FB7E5A9E3705C7_2_SET_LEVEL_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_Name()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2FB7E5A9E3705C7_2_GET_NAME_OFFSET))(this);
	}

	::System::Void set_Name(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_E2FB7E5A9E3705C7_2_SET_NAME_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_Desc()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2FB7E5A9E3705C7_2_GET_DESC_OFFSET))(this);
	}

	::System::Void set_Desc(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_E2FB7E5A9E3705C7_2_SET_DESC_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_DescAsPreLevel()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2FB7E5A9E3705C7_2_GET_DESCASPRELEVEL_OFFSET))(this);
	}

	::System::Void set_DescAsPreLevel(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_E2FB7E5A9E3705C7_2_SET_DESCASPRELEVEL_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_DescAsNextLevel()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2FB7E5A9E3705C7_2_GET_DESCASNEXTLEVEL_OFFSET))(this);
	}

	::System::Void set_DescAsNextLevel(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_E2FB7E5A9E3705C7_2_SET_DESCASNEXTLEVEL_OFFSET))(this, a1);
	}

	::System::String* get_Icon128Path()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2FB7E5A9E3705C7_2_GET_ICON128PATH_OFFSET))(this);
	}

	::System::Void set_Icon128Path(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E2FB7E5A9E3705C7_2_SET_ICON128PATH_OFFSET))(this, a1);
	}
};
