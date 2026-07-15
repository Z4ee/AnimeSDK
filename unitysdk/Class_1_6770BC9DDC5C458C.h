#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_6770BC9DDC5C458C_GET_NAME_OFFSET UNITYSDK_OFFSET(0x13A4B380)
#define CLASS_1_6770BC9DDC5C458C_GET_RARITY_OFFSET UNITYSDK_OFFSET(0x13A4B3A0)
#define CLASS_1_6770BC9DDC5C458C_METHOD_1_C46B21EB390BA1CF_OFFSET UNITYSDK_OFFSET(0x13A4B2B0)
#define CLASS_1_6770BC9DDC5C458C_SET_NAME_OFFSET UNITYSDK_OFFSET(0x13A4B390)
#define CLASS_1_6770BC9DDC5C458C_SET_RARITY_OFFSET UNITYSDK_OFFSET(0x13A4B3B0)
#define CLASS_1_6770BC9DDC5C458C__CTOR_OFFSET UNITYSDK_OFFSET(0x13A4B370)

inline static constexpr unsigned int Class_1_6770BC9DDC5C458C_TypeDefinitionIndex = 71473;

class Class_1_6770BC9DDC5C458C : public ::System::Object
{
public:
	::System::UInt32 _Rarity_k__BackingField; // 0x10
	::RPG::Client::TextID _Name_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6770BC9DDC5C458C__CTOR_OFFSET))(this);
	}

	static ::Class_1_6770BC9DDC5C458C* Method_1_C46B21EB390BA1CF(::System::UInt32 a1)
	{
		return ((::Class_1_6770BC9DDC5C458C*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6770BC9DDC5C458C_METHOD_1_C46B21EB390BA1CF_OFFSET))(a1);
	}

	::RPG::Client::TextID get_Name()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6770BC9DDC5C458C_GET_NAME_OFFSET))(this);
	}

	::System::Void set_Name(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_6770BC9DDC5C458C_SET_NAME_OFFSET))(this, a1);
	}

	::System::UInt32 get_Rarity()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6770BC9DDC5C458C_GET_RARITY_OFFSET))(this);
	}

	::System::Void set_Rarity(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6770BC9DDC5C458C_SET_RARITY_OFFSET))(this, a1);
	}
};
