#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/System/Object.h"

class Class_4_E3326DFD13ACBEC5;
class Class_5_A6F8D19602712D95;

#define CLASS_4_E3326DFD13ACBEC5_CLASS_1_8A620AB789EA8A22_METHOD_1_44BAB1D0DFEB4302_OFFSET UNITYSDK_OFFSET(0x12546530)
#define CLASS_4_E3326DFD13ACBEC5_CLASS_1_8A620AB789EA8A22_METHOD_1_F2A1D3C2AD5054B1_OFFSET UNITYSDK_OFFSET(0x12546770)
#define CLASS_4_E3326DFD13ACBEC5_CLASS_1_8A620AB789EA8A22__CTOR_OFFSET UNITYSDK_OFFSET(0x12546520)

inline static constexpr unsigned int Class_4_E3326DFD13ACBEC5_Class_1_8A620AB789EA8A22_TypeDefinitionIndex = 40725;

class Class_4_E3326DFD13ACBEC5_Class_1_8A620AB789EA8A22 : public ::System::Object
{
public:
	::Il2CppArray<::System::Single>* Field_1_2; // 0x10
	::Class_4_E3326DFD13ACBEC5* Field_1_3; // 0x18
	::MoleMole::HollowChessboard::HollowCell Field_1_0; // 0x20
	::MoleMole::Vector2Int Field_1_1; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E3326DFD13ACBEC5_CLASS_1_8A620AB789EA8A22__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_44BAB1D0DFEB4302(::Class_5_A6F8D19602712D95* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_5_A6F8D19602712D95*))((::PBYTE)hIl2Cpp + CLASS_4_E3326DFD13ACBEC5_CLASS_1_8A620AB789EA8A22_METHOD_1_44BAB1D0DFEB4302_OFFSET))(this, a1);
	}

	::System::Void Method_1_F2A1D3C2AD5054B1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E3326DFD13ACBEC5_CLASS_1_8A620AB789EA8A22_METHOD_1_F2A1D3C2AD5054B1_OFFSET))(this);
	}
};
