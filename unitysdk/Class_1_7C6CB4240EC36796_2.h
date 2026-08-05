#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_7C6CB4240EC36796_2__CTOR_OFFSET UNITYSDK_OFFSET(0x12BD3E30)

inline static constexpr unsigned int Class_1_7C6CB4240EC36796_2_TypeDefinitionIndex = 64666;

class Class_1_7C6CB4240EC36796_2 : public ::System::Object
{
public:
	::MoleMole::HollowChessboard::HollowCell Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C6CB4240EC36796_2__CTOR_OFFSET))(this);
	}
};
