#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_E2FB7E5A9E3705C7_2_GET_DESCASNEXTLEVEL_OFFSET UNITYSDK_OFFSET(0xBA98BD0)
#define CLASS_1_E2FB7E5A9E3705C7_2_GET_DESCASPRELEVEL_OFFSET UNITYSDK_OFFSET(0xBA98BB0)
#define CLASS_1_E2FB7E5A9E3705C7_2_GET_DESC_OFFSET UNITYSDK_OFFSET(0xBA98B90)
#define CLASS_1_E2FB7E5A9E3705C7_2_GET_ICON128PATH_OFFSET UNITYSDK_OFFSET(0xBA98BF0)
#define CLASS_1_E2FB7E5A9E3705C7_2_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xBA98B50)
#define CLASS_1_E2FB7E5A9E3705C7_2_GET_NAME_OFFSET UNITYSDK_OFFSET(0xBA98B70)
#define CLASS_1_E2FB7E5A9E3705C7_2_GET_SKILLID_OFFSET UNITYSDK_OFFSET(0xBA98B30)
#define CLASS_1_E2FB7E5A9E3705C7_2_SET_DESCASNEXTLEVEL_OFFSET UNITYSDK_OFFSET(0xBA98BE0)
#define CLASS_1_E2FB7E5A9E3705C7_2_SET_DESCASPRELEVEL_OFFSET UNITYSDK_OFFSET(0xBA98BC0)
#define CLASS_1_E2FB7E5A9E3705C7_2_SET_DESC_OFFSET UNITYSDK_OFFSET(0xBA98BA0)
#define CLASS_1_E2FB7E5A9E3705C7_2_SET_ICON128PATH_OFFSET UNITYSDK_OFFSET(0xBA98C00)
#define CLASS_1_E2FB7E5A9E3705C7_2_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xBA98B60)
#define CLASS_1_E2FB7E5A9E3705C7_2_SET_NAME_OFFSET UNITYSDK_OFFSET(0xBA98B80)
#define CLASS_1_E2FB7E5A9E3705C7_2_SET_SKILLID_OFFSET UNITYSDK_OFFSET(0xBA98B40)
#define CLASS_1_E2FB7E5A9E3705C7_2__CTOR_OFFSET UNITYSDK_OFFSET(0xBA98C10)

inline static constexpr unsigned int Class_1_E2FB7E5A9E3705C7_2_TypeDefinitionIndex = 80368;

class Class_1_E2FB7E5A9E3705C7_2 : public ::System::Object
{
public:
	::System::String* _Icon128Path_k__BackingField; // 0x10
	::RPG::Client::TextID _Name_k__BackingField; // 0x18
	::RPG::Client::TextID _DescAsPreLevel_k__BackingField; // 0x28
	::System::UInt32 _Level_k__BackingField; // 0x38
	::System::UInt32 _SkillID_k__BackingField; // 0x3C
	::RPG::Client::TextID _Desc_k__BackingField; // 0x40
	::RPG::Client::TextID _DescAsNextLevel_k__BackingField; // 0x50

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
