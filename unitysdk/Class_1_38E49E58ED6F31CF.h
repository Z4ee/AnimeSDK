#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_50459AA2C7E65196;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_38E49E58ED6F31CF_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x130C7C60)
#define CLASS_1_38E49E58ED6F31CF_METHOD_1_6BB86695870EFBD1_OFFSET UNITYSDK_OFFSET(0x130C7B10)
#define CLASS_1_38E49E58ED6F31CF__CTOR_OFFSET UNITYSDK_OFFSET(0x130C7A30)

inline static constexpr unsigned int Class_1_38E49E58ED6F31CF_TypeDefinitionIndex = 50470;

class Class_1_38E49E58ED6F31CF : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_2; // 0x10
	::System::Collections::Generic::List_1<::Class_1_50459AA2C7E65196*>* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_3; // 0x20
	::System::Int32 Field_1_5; // 0x28
	::System::Boolean Field_1_6; // 0x2C
	::System::Boolean Field_1_4; // 0x2D
	::System::Single Field_1_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_38E49E58ED6F31CF__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6BB86695870EFBD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_38E49E58ED6F31CF_METHOD_1_6BB86695870EFBD1_OFFSET))(this);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_38E49E58ED6F31CF_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}
};
