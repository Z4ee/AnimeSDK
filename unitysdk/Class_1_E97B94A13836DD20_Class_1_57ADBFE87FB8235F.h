#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

class Class_1_E97B94A13836DD20_Class_1_81E07EDA2624E706;

#define CLASS_1_E97B94A13836DD20_CLASS_1_57ADBFE87FB8235F_METHOD_1_A9D8E7767B6545AD_OFFSET UNITYSDK_OFFSET(0x18C98420)
#define CLASS_1_E97B94A13836DD20_CLASS_1_57ADBFE87FB8235F__CTOR_OFFSET UNITYSDK_OFFSET(0x18C98410)

inline static constexpr unsigned int Class_1_E97B94A13836DD20_Class_1_57ADBFE87FB8235F_TypeDefinitionIndex = 53085;

class Class_1_E97B94A13836DD20_Class_1_57ADBFE87FB8235F : public ::System::Object
{
public:
	::Class_1_E97B94A13836DD20_Class_1_81E07EDA2624E706* Field_1_1; // 0x10
	::MoleMole::HollowChessboard::HollowCell Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_CLASS_1_57ADBFE87FB8235F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A9D8E7767B6545AD(::MoleMole::HollowChessboard::HollowCell a1, ::MoleMole::HollowChessboard::HollowCell a2, ::MoleMole::HollowChessboard::HollowCell a3, ::MoleMole::HollowChessboard::HollowCell a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_CLASS_1_57ADBFE87FB8235F_METHOD_1_A9D8E7767B6545AD_OFFSET))(this, a1, a2, a3, a4);
	}
};
