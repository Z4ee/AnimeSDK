#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

class Class_2_56BC10214551AC7B;
class Class_2_C03EC65F99EF4B16;

#define CLASS_2_56BC10214551AC7B_CLASS_1_CA69DA866BACE112_METHOD_1_2AE8FC9F554531E6_OFFSET UNITYSDK_OFFSET(0x12BB19C0)
#define CLASS_2_56BC10214551AC7B_CLASS_1_CA69DA866BACE112_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x12BB1990)
#define CLASS_2_56BC10214551AC7B_CLASS_1_CA69DA866BACE112__CTOR_OFFSET UNITYSDK_OFFSET(0x12BB1980)

inline static constexpr unsigned int Class_2_56BC10214551AC7B_Class_1_CA69DA866BACE112_TypeDefinitionIndex = 60971;

class Class_2_56BC10214551AC7B_Class_1_CA69DA866BACE112 : public ::System::Object
{
public:
	::Class_2_C03EC65F99EF4B16* Field_1_1; // 0x10
	::Class_2_56BC10214551AC7B* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56BC10214551AC7B_CLASS_1_CA69DA866BACE112__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56BC10214551AC7B_CLASS_1_CA69DA866BACE112_METHOD_1_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_1_2AE8FC9F554531E6(::MoleMole::HollowChessboard::HollowCell a1, ::MoleMole::HollowChessboard::HollowCell a2, ::MoleMole::HollowChessboard::HollowCell a3, ::MoleMole::HollowChessboard::HollowCell a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_2_56BC10214551AC7B_CLASS_1_CA69DA866BACE112_METHOD_1_2AE8FC9F554531E6_OFFSET))(this, a1, a2, a3, a4);
	}
};
