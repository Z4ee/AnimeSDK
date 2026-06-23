#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_494E7B65012EFD41_METHOD_1_47FCE72550F759BF_OFFSET UNITYSDK_OFFSET(0x1960D260)
#define CLASS_1_494E7B65012EFD41__CTOR_OFFSET UNITYSDK_OFFSET(0x1960D250)

inline static constexpr unsigned int Class_1_494E7B65012EFD41_TypeDefinitionIndex = 54165;

class Class_1_494E7B65012EFD41 : public ::System::Object
{
public:
	::System::Int32 Field_1_3; // 0x10
	::System::Int32 Field_1_4; // 0x14
	::System::Int32 Field_1_1; // 0x18
	::System::Int32 Field_1_2; // 0x1C
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_494E7B65012EFD41__CTOR_OFFSET))(this);
	}

	::Class_1_494E7B65012EFD41* Method_1_47FCE72550F759BF()
	{
		return ((::Class_1_494E7B65012EFD41*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_494E7B65012EFD41_METHOD_1_47FCE72550F759BF_OFFSET))(this);
	}
};
