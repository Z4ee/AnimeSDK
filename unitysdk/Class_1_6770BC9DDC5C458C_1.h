#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_6770BC9DDC5C458C_1_GET_DESC_OFFSET UNITYSDK_OFFSET(0x15EA7FE0)
#define CLASS_1_6770BC9DDC5C458C_1_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x15EA7FA0)
#define CLASS_1_6770BC9DDC5C458C_1_GET_NAME_OFFSET UNITYSDK_OFFSET(0x15EA7FC0)
#define CLASS_1_6770BC9DDC5C458C_1_SET_DESC_OFFSET UNITYSDK_OFFSET(0x15EA7FF0)
#define CLASS_1_6770BC9DDC5C458C_1_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x15EA7FB0)
#define CLASS_1_6770BC9DDC5C458C_1_SET_NAME_OFFSET UNITYSDK_OFFSET(0x15EA7FD0)
#define CLASS_1_6770BC9DDC5C458C_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15EA8000)

inline static constexpr unsigned int Class_1_6770BC9DDC5C458C_1_TypeDefinitionIndex = 75791;

class Class_1_6770BC9DDC5C458C_1 : public ::System::Object
{
public:
	::System::UInt32 _Level_k__BackingField; // 0x10
	::RPG::Client::TextID _Desc_k__BackingField; // 0x18
	::RPG::Client::TextID _Name_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6770BC9DDC5C458C_1__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_Level()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6770BC9DDC5C458C_1_GET_LEVEL_OFFSET))(this);
	}

	::System::Void set_Level(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6770BC9DDC5C458C_1_SET_LEVEL_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_Name()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6770BC9DDC5C458C_1_GET_NAME_OFFSET))(this);
	}

	::System::Void set_Name(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_6770BC9DDC5C458C_1_SET_NAME_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_Desc()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6770BC9DDC5C458C_1_GET_DESC_OFFSET))(this);
	}

	::System::Void set_Desc(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_6770BC9DDC5C458C_1_SET_DESC_OFFSET))(this, a1);
	}
};
