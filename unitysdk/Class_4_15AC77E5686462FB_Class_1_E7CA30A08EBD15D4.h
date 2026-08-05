#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

#define CLASS_4_15AC77E5686462FB_CLASS_1_E7CA30A08EBD15D4_METHOD_1_A400B865627C9649_OFFSET UNITYSDK_OFFSET(0x122C6900)
#define CLASS_4_15AC77E5686462FB_CLASS_1_E7CA30A08EBD15D4__CTOR_OFFSET UNITYSDK_OFFSET(0x122C68F0)

inline static constexpr unsigned int Class_4_15AC77E5686462FB_Class_1_E7CA30A08EBD15D4_TypeDefinitionIndex = 50448;

class Class_4_15AC77E5686462FB_Class_1_E7CA30A08EBD15D4 : public ::System::Object
{
public:
	::MoleMole::HollowChessboard::HollowCell Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_15AC77E5686462FB_CLASS_1_E7CA30A08EBD15D4__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_A400B865627C9649(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_4_15AC77E5686462FB_CLASS_1_E7CA30A08EBD15D4_METHOD_1_A400B865627C9649_OFFSET))(this, a1);
	}
};
