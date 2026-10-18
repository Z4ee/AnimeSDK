#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_E2FB7E5A9E3705C7_2_GET_DESCASNEXTLEVEL_OFFSET UNITYSDK_OFFSET(0xB95F850)
#define CLASS_1_E2FB7E5A9E3705C7_2_GET_DESCASPRELEVEL_OFFSET UNITYSDK_OFFSET(0xB95F830)
#define CLASS_1_E2FB7E5A9E3705C7_2_GET_DESC_OFFSET UNITYSDK_OFFSET(0xB95F810)
#define CLASS_1_E2FB7E5A9E3705C7_2_GET_ICON128PATH_OFFSET UNITYSDK_OFFSET(0xB95F870)
#define CLASS_1_E2FB7E5A9E3705C7_2_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xB95F7D0)
#define CLASS_1_E2FB7E5A9E3705C7_2_GET_NAME_OFFSET UNITYSDK_OFFSET(0xB95F7F0)
#define CLASS_1_E2FB7E5A9E3705C7_2_GET_SKILLID_OFFSET UNITYSDK_OFFSET(0xB95F7B0)
#define CLASS_1_E2FB7E5A9E3705C7_2_SET_DESCASNEXTLEVEL_OFFSET UNITYSDK_OFFSET(0xB95F860)
#define CLASS_1_E2FB7E5A9E3705C7_2_SET_DESCASPRELEVEL_OFFSET UNITYSDK_OFFSET(0xB95F840)
#define CLASS_1_E2FB7E5A9E3705C7_2_SET_DESC_OFFSET UNITYSDK_OFFSET(0xB95F820)
#define CLASS_1_E2FB7E5A9E3705C7_2_SET_ICON128PATH_OFFSET UNITYSDK_OFFSET(0xB95F880)
#define CLASS_1_E2FB7E5A9E3705C7_2_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xB95F7E0)
#define CLASS_1_E2FB7E5A9E3705C7_2_SET_NAME_OFFSET UNITYSDK_OFFSET(0xB95F800)
#define CLASS_1_E2FB7E5A9E3705C7_2_SET_SKILLID_OFFSET UNITYSDK_OFFSET(0xB95F7C0)
#define CLASS_1_E2FB7E5A9E3705C7_2__CTOR_OFFSET UNITYSDK_OFFSET(0xB95F890)

inline static constexpr unsigned int Class_1_E2FB7E5A9E3705C7_2_TypeDefinitionIndex = 81696;

class Class_1_E2FB7E5A9E3705C7_2 : public ::System::Object
{
public:
	::System::String* _Icon128Path_k__BackingField; // 0x10
	::RPG::Client::TextID _DescAsPreLevel_k__BackingField; // 0x18
	::RPG::Client::TextID _DescAsNextLevel_k__BackingField; // 0x28
	::RPG::Client::TextID _Name_k__BackingField; // 0x38
	::System::UInt32 _Level_k__BackingField; // 0x48
	::System::UInt32 _SkillID_k__BackingField; // 0x4C
	::RPG::Client::TextID _Desc_k__BackingField; // 0x50

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
