#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_54.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

#define CLASS_2_02F8012D93B36838__CTOR_OFFSET UNITYSDK_OFFSET(0x1415F090)

inline static constexpr unsigned int Class_2_02F8012D93B36838_TypeDefinitionIndex = 72222;

class Class_2_02F8012D93B36838 : public ::Class_1_43BD383C98B4C0C5_54
{
public:
	::System::Boolean Field_2_0; // 0x10
	::MoleMole::HollowChessboard::HollowCell Field_2_1; // 0x14

	::System::Void _ctor(::MoleMole::HollowChessboard::HollowCell a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_02F8012D93B36838__CTOR_OFFSET))(this, a1, a2);
	}
};
