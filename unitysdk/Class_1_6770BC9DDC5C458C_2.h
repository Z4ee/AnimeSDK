#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_6770BC9DDC5C458C_2_GET_DESC_OFFSET UNITYSDK_OFFSET(0xC2585F0)
#define CLASS_1_6770BC9DDC5C458C_2_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xC2585B0)
#define CLASS_1_6770BC9DDC5C458C_2_GET_NAME_OFFSET UNITYSDK_OFFSET(0xC2585D0)
#define CLASS_1_6770BC9DDC5C458C_2_SET_DESC_OFFSET UNITYSDK_OFFSET(0xC258600)
#define CLASS_1_6770BC9DDC5C458C_2_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xC2585C0)
#define CLASS_1_6770BC9DDC5C458C_2_SET_NAME_OFFSET UNITYSDK_OFFSET(0xC2585E0)
#define CLASS_1_6770BC9DDC5C458C_2__CTOR_OFFSET UNITYSDK_OFFSET(0xC258610)

inline static constexpr unsigned int Class_1_6770BC9DDC5C458C_2_TypeDefinitionIndex = 80749;

class Class_1_6770BC9DDC5C458C_2 : public ::System::Object
{
public:
	::System::UInt32 _Level_k__BackingField; // 0x10
	::RPG::Client::TextID _Desc_k__BackingField; // 0x18
	::RPG::Client::TextID _Name_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6770BC9DDC5C458C_2__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_Level()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6770BC9DDC5C458C_2_GET_LEVEL_OFFSET))(this);
	}

	::System::Void set_Level(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6770BC9DDC5C458C_2_SET_LEVEL_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_Name()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6770BC9DDC5C458C_2_GET_NAME_OFFSET))(this);
	}

	::System::Void set_Name(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_6770BC9DDC5C458C_2_SET_NAME_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_Desc()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6770BC9DDC5C458C_2_GET_DESC_OFFSET))(this);
	}

	::System::Void set_Desc(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_6770BC9DDC5C458C_2_SET_DESC_OFFSET))(this, a1);
	}
};
