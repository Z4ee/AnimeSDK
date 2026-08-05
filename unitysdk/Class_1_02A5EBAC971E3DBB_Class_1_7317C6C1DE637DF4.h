#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3835791E5DA3DB29.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

class Class_4_7B5A65E248106C68;
class Class_5_A6F8D19602712D95;

#define CLASS_1_02A5EBAC971E3DBB_CLASS_1_7317C6C1DE637DF4_METHOD_1_716BEB5B1EF6A20F_OFFSET UNITYSDK_OFFSET(0x11E873D0)
#define CLASS_1_02A5EBAC971E3DBB_CLASS_1_7317C6C1DE637DF4_METHOD_1_71C1AD1EEC51C027_OFFSET UNITYSDK_OFFSET(0x11E87350)
#define CLASS_1_02A5EBAC971E3DBB_CLASS_1_7317C6C1DE637DF4__CTOR_OFFSET UNITYSDK_OFFSET(0x11E87340)

inline static constexpr unsigned int Class_1_02A5EBAC971E3DBB_Class_1_7317C6C1DE637DF4_TypeDefinitionIndex = 85719;

class Class_1_02A5EBAC971E3DBB_Class_1_7317C6C1DE637DF4 : public ::System::Object
{
public:
	::Class_4_7B5A65E248106C68* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18
	::Enum_3_3835791E5DA3DB29 Field_1_7; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02A5EBAC971E3DBB_CLASS_1_7317C6C1DE637DF4__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_71C1AD1EEC51C027(::Class_5_A6F8D19602712D95* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_5_A6F8D19602712D95*))((::PBYTE)hIl2Cpp + CLASS_1_02A5EBAC971E3DBB_CLASS_1_7317C6C1DE637DF4_METHOD_1_71C1AD1EEC51C027_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_716BEB5B1EF6A20F(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_02A5EBAC971E3DBB_CLASS_1_7317C6C1DE637DF4_METHOD_1_716BEB5B1EF6A20F_OFFSET))(this, a1);
	}
};
