#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

class Class_4_5B6053BCF731B667;

#define CLASS_3_157FBFA3560D985A_CLASS_1_AE27AAE5570A9924_METHOD_1_702FFC05D788B55B_OFFSET UNITYSDK_OFFSET(0x100800C0)
#define CLASS_3_157FBFA3560D985A_CLASS_1_AE27AAE5570A9924__CTOR_OFFSET UNITYSDK_OFFSET(0x100800B0)

inline static constexpr unsigned int Class_3_157FBFA3560D985A_Class_1_AE27AAE5570A9924_TypeDefinitionIndex = 49019;

class Class_3_157FBFA3560D985A_Class_1_AE27AAE5570A9924 : public ::System::Object
{
public:
	::System::UInt32 Field_1_0; // 0x10
	::System::Int32 Field_1_2; // 0x14
	::MoleMole::HollowChessboard::HollowCell Field_1_3; // 0x18
	::System::UInt32 Field_1_1; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_157FBFA3560D985A_CLASS_1_AE27AAE5570A9924__CTOR_OFFSET))(this);
	}

	static ::Class_3_157FBFA3560D985A_Class_1_AE27AAE5570A9924* Method_1_702FFC05D788B55B(::Class_4_5B6053BCF731B667* a1, ::Class_4_5B6053BCF731B667* a2, ::MoleMole::HollowChessboard::HollowCell a3)
	{
		return ((::Class_3_157FBFA3560D985A_Class_1_AE27AAE5570A9924*(*)(::Class_4_5B6053BCF731B667*, ::Class_4_5B6053BCF731B667*, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_157FBFA3560D985A_CLASS_1_AE27AAE5570A9924_METHOD_1_702FFC05D788B55B_OFFSET))(a1, a2, a3);
	}
};
