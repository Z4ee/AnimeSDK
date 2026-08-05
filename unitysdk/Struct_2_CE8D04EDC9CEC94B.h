#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_212;
class Class_0_16E4307DCC419505_375;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_CE8D04EDC9CEC94B_METHOD_2_0B9B14028145318F_OFFSET UNITYSDK_OFFSET(0x324D50)
#define STRUCT_2_CE8D04EDC9CEC94B_METHOD_2_56036F387869A947_OFFSET UNITYSDK_OFFSET(0xA13370)
#define STRUCT_2_CE8D04EDC9CEC94B_METHOD_2_566D4E5C6CEB9794_OFFSET UNITYSDK_OFFSET(0xA13380)
#define STRUCT_2_CE8D04EDC9CEC94B_METHOD_2_969D9516A75501DE_OFFSET UNITYSDK_OFFSET(0x259D70)

inline static constexpr unsigned int Struct_2_CE8D04EDC9CEC94B_TypeDefinitionIndex = 70308;

struct alignas(8) Struct_2_CE8D04EDC9CEC94B
{
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_375*>* Field_2_0; // 0x10

	::System::Boolean Method_2_56036F387869A947(::Class_0_16E4307DCC419505_212* a1, ::Class_0_16E4307DCC419505_375*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_212*, ::Class_0_16E4307DCC419505_375*&))((::PBYTE)hIl2Cpp + STRUCT_2_CE8D04EDC9CEC94B_METHOD_2_56036F387869A947_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_566D4E5C6CEB9794(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + STRUCT_2_CE8D04EDC9CEC94B_METHOD_2_566D4E5C6CEB9794_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_375*>* Method_2_969D9516A75501DE()
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_375*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CE8D04EDC9CEC94B_METHOD_2_969D9516A75501DE_OFFSET))(this);
	}

	::System::Void Method_2_0B9B14028145318F(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_375*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_375*>*))((::PBYTE)hIl2Cpp + STRUCT_2_CE8D04EDC9CEC94B_METHOD_2_0B9B14028145318F_OFFSET))(this, a1);
	}
};
