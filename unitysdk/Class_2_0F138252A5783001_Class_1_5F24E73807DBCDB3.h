#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_7C9A70DC3FC57CDC;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_0F138252A5783001_CLASS_1_5F24E73807DBCDB3_METHOD_1_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x14A64250)
#define CLASS_2_0F138252A5783001_CLASS_1_5F24E73807DBCDB3__CTOR_OFFSET UNITYSDK_OFFSET(0x14A64240)

inline static constexpr unsigned int Class_2_0F138252A5783001_Class_1_5F24E73807DBCDB3_TypeDefinitionIndex = 64421;

class Class_2_0F138252A5783001_Class_1_5F24E73807DBCDB3 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_2_7C9A70DC3FC57CDC*>*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F138252A5783001_CLASS_1_5F24E73807DBCDB3__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_0F138252A5783001_CLASS_1_5F24E73807DBCDB3_METHOD_1_C450A961450309C9_OFFSET))(this, a1);
	}
};
