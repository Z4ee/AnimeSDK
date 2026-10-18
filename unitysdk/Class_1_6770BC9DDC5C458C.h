#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_6770BC9DDC5C458C_GET_FUNTITLEDESC_OFFSET UNITYSDK_OFFSET(0xBF619F0)
#define CLASS_1_6770BC9DDC5C458C_GET_FUNTITLENAME_OFFSET UNITYSDK_OFFSET(0xBF619D0)
#define CLASS_1_6770BC9DDC5C458C_GET_ID_OFFSET UNITYSDK_OFFSET(0xBF619B0)
#define CLASS_1_6770BC9DDC5C458C_SET_FUNTITLEDESC_OFFSET UNITYSDK_OFFSET(0xBF61A00)
#define CLASS_1_6770BC9DDC5C458C_SET_FUNTITLENAME_OFFSET UNITYSDK_OFFSET(0xBF619E0)
#define CLASS_1_6770BC9DDC5C458C_SET_ID_OFFSET UNITYSDK_OFFSET(0xBF619C0)
#define CLASS_1_6770BC9DDC5C458C__CTOR_OFFSET UNITYSDK_OFFSET(0xBF61A10)

inline static constexpr unsigned int Class_1_6770BC9DDC5C458C_TypeDefinitionIndex = 63841;

class Class_1_6770BC9DDC5C458C : public ::System::Object
{
public:
	::RPG::Client::TextID _FunTitleDesc_k__BackingField; // 0x10
	::System::UInt32 _ID_k__BackingField; // 0x20
	::RPG::Client::TextID _FunTitleName_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6770BC9DDC5C458C__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_ID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6770BC9DDC5C458C_GET_ID_OFFSET))(this);
	}

	::System::Void set_ID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6770BC9DDC5C458C_SET_ID_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_FunTitleName()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6770BC9DDC5C458C_GET_FUNTITLENAME_OFFSET))(this);
	}

	::System::Void set_FunTitleName(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_6770BC9DDC5C458C_SET_FUNTITLENAME_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_FunTitleDesc()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6770BC9DDC5C458C_GET_FUNTITLEDESC_OFFSET))(this);
	}

	::System::Void set_FunTitleDesc(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_6770BC9DDC5C458C_SET_FUNTITLEDESC_OFFSET))(this, a1);
	}
};
