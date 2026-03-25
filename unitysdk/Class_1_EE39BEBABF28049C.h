#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3807A6AE84986224.h"
#include "unitysdk/System/Object.h"

class Class_1_2E57B88467AF63C8_5;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_EE39BEBABF28049C_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x117A4AC0)
#define CLASS_1_EE39BEBABF28049C__CTOR_OFFSET UNITYSDK_OFFSET(0x117A4B60)

inline static constexpr unsigned int Class_1_EE39BEBABF28049C_TypeDefinitionIndex = 50435;

class Class_1_EE39BEBABF28049C : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_2E57B88467AF63C8_5*>* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::Struct_2_3807A6AE84986224>* Field_1_2; // 0x18
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE39BEBABF28049C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE39BEBABF28049C_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}
};
