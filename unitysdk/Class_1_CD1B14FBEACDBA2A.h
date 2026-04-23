#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_E21F6DE9B7FA4D05;
namespace System { class String; }

#define CLASS_1_CD1B14FBEACDBA2A__CTOR_OFFSET UNITYSDK_OFFSET(0x11DC1D50)

inline static constexpr unsigned int Class_1_CD1B14FBEACDBA2A_TypeDefinitionIndex = 51841;

class Class_1_CD1B14FBEACDBA2A : public ::System::Object
{
public:
	::Class_3_E21F6DE9B7FA4D05* Field_1_6; // 0x10
	::Class_3_E21F6DE9B7FA4D05* Field_1_5; // 0x18
	::System::String* Field_1_0; // 0x20
	::System::Boolean Field_1_4; // 0x28
	::System::Boolean Field_1_3; // 0x29
	::System::Boolean Field_1_1; // 0x2A
	::System::Boolean Field_1_2; // 0x2B

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD1B14FBEACDBA2A__CTOR_OFFSET))(this);
	}
};
