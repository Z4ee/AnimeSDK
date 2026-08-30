#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_6770BC9DDC5C458C_3_GET_DAY_OFFSET UNITYSDK_OFFSET(0x19C43870)
#define CLASS_1_6770BC9DDC5C458C_3_GET_TALK_OFFSET UNITYSDK_OFFSET(0x19C43890)
#define CLASS_1_6770BC9DDC5C458C_3_SET_DAY_OFFSET UNITYSDK_OFFSET(0x19C43880)
#define CLASS_1_6770BC9DDC5C458C_3_SET_TALK_OFFSET UNITYSDK_OFFSET(0x19C438A0)
#define CLASS_1_6770BC9DDC5C458C_3__CTOR_OFFSET UNITYSDK_OFFSET(0x19C438B0)

inline static constexpr unsigned int Class_1_6770BC9DDC5C458C_3_TypeDefinitionIndex = 79745;

class Class_1_6770BC9DDC5C458C_3 : public ::System::Object
{
public:
	::System::UInt32 _Day_k__BackingField; // 0x10
	::RPG::Client::TextID _Talk_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6770BC9DDC5C458C_3__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_Day()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6770BC9DDC5C458C_3_GET_DAY_OFFSET))(this);
	}

	::System::Void set_Day(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6770BC9DDC5C458C_3_SET_DAY_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_Talk()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6770BC9DDC5C458C_3_GET_TALK_OFFSET))(this);
	}

	::System::Void set_Talk(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_6770BC9DDC5C458C_3_SET_TALK_OFFSET))(this, a1);
	}
};
