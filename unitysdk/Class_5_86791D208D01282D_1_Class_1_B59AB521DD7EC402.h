#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

class Class_4_B1EAD8476216C1D8;
class Class_5_86791D208D01282D_1;
class Class_5_F638703ACD0FA08E;

#define CLASS_5_86791D208D01282D_1_CLASS_1_B59AB521DD7EC402__CTOR_OFFSET UNITYSDK_OFFSET(0x1208CAA0)

inline static constexpr unsigned int Class_5_86791D208D01282D_1_Class_1_B59AB521DD7EC402_TypeDefinitionIndex = 58346;

class Class_5_86791D208D01282D_1_Class_1_B59AB521DD7EC402 : public ::System::Object
{
public:
	::Class_5_86791D208D01282D_1* Field_1_2; // 0x10
	::Class_5_F638703ACD0FA08E* Field_1_3; // 0x18
	::Class_4_B1EAD8476216C1D8* Field_1_1; // 0x20
	::MoleMole::HollowChessboard::HollowCell Field_1_4; // 0x28
	::MoleMole::HollowChessboard::HollowCell Field_1_0; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_86791D208D01282D_1_CLASS_1_B59AB521DD7EC402__CTOR_OFFSET))(this);
	}
};
