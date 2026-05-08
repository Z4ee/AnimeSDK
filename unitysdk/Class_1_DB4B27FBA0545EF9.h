#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_2271A294FCCB3EAE.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_DB4B27FBA0545EF9_METHOD_1_EF9BC5C1B5A8CD8E_OFFSET UNITYSDK_OFFSET(0x12092A20)
#define CLASS_1_DB4B27FBA0545EF9__CTOR_OFFSET UNITYSDK_OFFSET(0x12092A10)

inline static constexpr unsigned int Class_1_DB4B27FBA0545EF9_TypeDefinitionIndex = 51605;

class Class_1_DB4B27FBA0545EF9 : public ::System::Object
{
public:
	::System::Int32 Field_1_1; // 0x10
	::System::Int32 Field_1_3; // 0x14
	::Enum_3_2271A294FCCB3EAE Field_1_0; // 0x18
	::System::Int32 Field_1_4; // 0x1C
	::System::Int32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB4B27FBA0545EF9__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_EF9BC5C1B5A8CD8E(::Enum_3_2271A294FCCB3EAE a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_2271A294FCCB3EAE, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_DB4B27FBA0545EF9_METHOD_1_EF9BC5C1B5A8CD8E_OFFSET))(this, a1, a2, a3);
	}
};
