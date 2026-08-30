#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_6770BC9DDC5C458C_GET_FUNTITLEDESC_OFFSET UNITYSDK_OFFSET(0xC0758E0)
#define CLASS_1_6770BC9DDC5C458C_GET_FUNTITLENAME_OFFSET UNITYSDK_OFFSET(0xC0758C0)
#define CLASS_1_6770BC9DDC5C458C_GET_ID_OFFSET UNITYSDK_OFFSET(0xC0758A0)
#define CLASS_1_6770BC9DDC5C458C_SET_FUNTITLEDESC_OFFSET UNITYSDK_OFFSET(0xC0758F0)
#define CLASS_1_6770BC9DDC5C458C_SET_FUNTITLENAME_OFFSET UNITYSDK_OFFSET(0xC0758D0)
#define CLASS_1_6770BC9DDC5C458C_SET_ID_OFFSET UNITYSDK_OFFSET(0xC0758B0)
#define CLASS_1_6770BC9DDC5C458C__CTOR_OFFSET UNITYSDK_OFFSET(0xC075900)

inline static constexpr unsigned int Class_1_6770BC9DDC5C458C_TypeDefinitionIndex = 63903;

class Class_1_6770BC9DDC5C458C : public ::System::Object
{
public:
	::RPG::Client::TextID _FunTitleDesc_k__BackingField; // 0x10
	::RPG::Client::TextID _FunTitleName_k__BackingField; // 0x20
	::System::UInt32 _ID_k__BackingField; // 0x30

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
