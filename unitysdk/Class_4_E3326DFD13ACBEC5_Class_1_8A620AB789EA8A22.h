#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/System/Object.h"

class Class_4_E3326DFD13ACBEC5;
class Class_5_A6F8D19602712D95;

#define CLASS_4_E3326DFD13ACBEC5_CLASS_1_8A620AB789EA8A22_METHOD_1_44BAB1D0DFEB4302_OFFSET UNITYSDK_OFFSET(0x12FBB800)
#define CLASS_4_E3326DFD13ACBEC5_CLASS_1_8A620AB789EA8A22_METHOD_1_CB8CF89038C44C8A_OFFSET UNITYSDK_OFFSET(0x12FBBA40)
#define CLASS_4_E3326DFD13ACBEC5_CLASS_1_8A620AB789EA8A22__CTOR_OFFSET UNITYSDK_OFFSET(0x12FBB7F0)

inline static constexpr unsigned int Class_4_E3326DFD13ACBEC5_Class_1_8A620AB789EA8A22_TypeDefinitionIndex = 87072;

class Class_4_E3326DFD13ACBEC5_Class_1_8A620AB789EA8A22 : public ::System::Object
{
public:
	::Il2CppArray<::System::Single>* Field_1_1; // 0x10
	::Class_4_E3326DFD13ACBEC5* Field_1_0; // 0x18
	::MoleMole::Vector2Int Field_1_2; // 0x20
	::MoleMole::HollowChessboard::HollowCell Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E3326DFD13ACBEC5_CLASS_1_8A620AB789EA8A22__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_44BAB1D0DFEB4302(::Class_5_A6F8D19602712D95* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_5_A6F8D19602712D95*))((::PBYTE)hIl2Cpp + CLASS_4_E3326DFD13ACBEC5_CLASS_1_8A620AB789EA8A22_METHOD_1_44BAB1D0DFEB4302_OFFSET))(this, a1);
	}

	::System::Void Method_1_CB8CF89038C44C8A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E3326DFD13ACBEC5_CLASS_1_8A620AB789EA8A22_METHOD_1_CB8CF89038C44C8A_OFFSET))(this);
	}
};
