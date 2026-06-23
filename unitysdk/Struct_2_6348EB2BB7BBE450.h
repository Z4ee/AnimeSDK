#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_178;
class Class_0_16E4307DCC419505_583;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_6348EB2BB7BBE450_METHOD_2_0B9B14028145318F_OFFSET UNITYSDK_OFFSET(0x2B6D10)
#define STRUCT_2_6348EB2BB7BBE450_METHOD_2_566D4E5C6CEB9794_OFFSET UNITYSDK_OFFSET(0x794040)
#define STRUCT_2_6348EB2BB7BBE450_METHOD_2_6ABB14EEB4EB1CCC_OFFSET UNITYSDK_OFFSET(0x794030)
#define STRUCT_2_6348EB2BB7BBE450_METHOD_2_969D9516A75501DE_OFFSET UNITYSDK_OFFSET(0x246290)

inline static constexpr unsigned int Struct_2_6348EB2BB7BBE450_TypeDefinitionIndex = 66753;

struct alignas(8) Struct_2_6348EB2BB7BBE450
{
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_583*>* Field_2_0; // 0x10

	::System::Boolean Method_2_6ABB14EEB4EB1CCC(::Class_0_16E4307DCC419505_178* a1, ::Class_0_16E4307DCC419505_583*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_178*, ::Class_0_16E4307DCC419505_583*&))((::PBYTE)hIl2Cpp + STRUCT_2_6348EB2BB7BBE450_METHOD_2_6ABB14EEB4EB1CCC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0B9B14028145318F(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_583*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_583*>*))((::PBYTE)hIl2Cpp + STRUCT_2_6348EB2BB7BBE450_METHOD_2_0B9B14028145318F_OFFSET))(this, a1);
	}

	::System::Void Method_2_566D4E5C6CEB9794(::Class_0_16E4307DCC419505_583* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_583*))((::PBYTE)hIl2Cpp + STRUCT_2_6348EB2BB7BBE450_METHOD_2_566D4E5C6CEB9794_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_583*>* Method_2_969D9516A75501DE()
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_583*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_6348EB2BB7BBE450_METHOD_2_969D9516A75501DE_OFFSET))(this);
	}
};
