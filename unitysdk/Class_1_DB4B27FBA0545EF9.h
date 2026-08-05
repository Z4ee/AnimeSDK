#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_D7FE77D6BC79ADBB.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_DB4B27FBA0545EF9_METHOD_1_EF9BC5C1B5A8CD8E_OFFSET UNITYSDK_OFFSET(0x13D24D40)
#define CLASS_1_DB4B27FBA0545EF9__CTOR_OFFSET UNITYSDK_OFFSET(0x13D24D30)

inline static constexpr unsigned int Class_1_DB4B27FBA0545EF9_TypeDefinitionIndex = 74745;

class Class_1_DB4B27FBA0545EF9 : public ::System::Object
{
public:
	::System::Int32 Field_1_0; // 0x10
	::System::Int32 Field_1_7; // 0x14
	::Enum_3_D7FE77D6BC79ADBB Field_1_1; // 0x18
	::System::Int32 Field_1_5; // 0x1C
	::System::Int32 Field_1_6; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB4B27FBA0545EF9__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_EF9BC5C1B5A8CD8E(::Enum_3_D7FE77D6BC79ADBB a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_D7FE77D6BC79ADBB, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_DB4B27FBA0545EF9_METHOD_1_EF9BC5C1B5A8CD8E_OFFSET))(this, a1, a2, a3);
	}
};
