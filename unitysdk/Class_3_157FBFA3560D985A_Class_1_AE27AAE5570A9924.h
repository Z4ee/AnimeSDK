#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

class Class_4_ECB9B143594E136B;

#define CLASS_3_157FBFA3560D985A_CLASS_1_AE27AAE5570A9924_METHOD_1_702FFC05D788B55B_OFFSET UNITYSDK_OFFSET(0x159480C0)
#define CLASS_3_157FBFA3560D985A_CLASS_1_AE27AAE5570A9924__CTOR_OFFSET UNITYSDK_OFFSET(0x159480B0)

inline static constexpr unsigned int Class_3_157FBFA3560D985A_Class_1_AE27AAE5570A9924_TypeDefinitionIndex = 76900;

class Class_3_157FBFA3560D985A_Class_1_AE27AAE5570A9924 : public ::System::Object
{
public:
	::System::Int32 Field_1_1; // 0x10
	::System::UInt32 Field_1_3; // 0x14
	::System::UInt32 Field_1_2; // 0x18
	::MoleMole::HollowChessboard::HollowCell Field_1_0; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_157FBFA3560D985A_CLASS_1_AE27AAE5570A9924__CTOR_OFFSET))(this);
	}

	static ::Class_3_157FBFA3560D985A_Class_1_AE27AAE5570A9924* Method_1_702FFC05D788B55B(::Class_4_ECB9B143594E136B* a1, ::Class_4_ECB9B143594E136B* a2, ::MoleMole::HollowChessboard::HollowCell a3)
	{
		return ((::Class_3_157FBFA3560D985A_Class_1_AE27AAE5570A9924*(*)(::Class_4_ECB9B143594E136B*, ::Class_4_ECB9B143594E136B*, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_157FBFA3560D985A_CLASS_1_AE27AAE5570A9924_METHOD_1_702FFC05D788B55B_OFFSET))(a1, a2, a3);
	}
};
