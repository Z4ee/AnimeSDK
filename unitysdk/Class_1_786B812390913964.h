#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_786B812390913964_Class_1_D286C645543D4D03;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace System::Diagnostics { class Stopwatch; }

#define CLASS_1_786B812390913964_METHOD_1_2C95AFAD0256302F_OFFSET UNITYSDK_OFFSET(0x134E22F0)
#define CLASS_1_786B812390913964_METHOD_1_652E996B985F5ACB_OFFSET UNITYSDK_OFFSET(0x134E2000)
#define CLASS_1_786B812390913964_METHOD_1_7E0102A7D81125F5_OFFSET UNITYSDK_OFFSET(0x134E20C0)
#define CLASS_1_786B812390913964_METHOD_1_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x134E1EC0)
#define CLASS_1_786B812390913964__CCTOR_OFFSET UNITYSDK_OFFSET(0x134E2490)

inline static constexpr unsigned int Class_1_786B812390913964_TypeDefinitionIndex = 50417;

class Class_1_786B812390913964 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Stack_1<::System::Diagnostics::Stopwatch*>** StaticGet_IMNLIHHEAKE()
	{
		return (::System::Collections::Generic::Stack_1<::System::Diagnostics::Stopwatch*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_786B812390913964_TypeDefinitionIndex)->GetStaticField(0x19C70);
	}
	static ::System::Collections::Generic::Stack_1<::System::String*>** StaticGet_KPPMDCAFMLG()
	{
		return (::System::Collections::Generic::Stack_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_786B812390913964_TypeDefinitionIndex)->GetStaticField(0x19C78);
	}
	static ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::System::Int64>>** StaticGet_GJEMIPOHMJF()
	{
		return (::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::System::Int64>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_786B812390913964_TypeDefinitionIndex)->GetStaticField(0x19C80);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_786B812390913964__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_AA169839CB93802A()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_786B812390913964_METHOD_1_AA169839CB93802A_OFFSET))();
	}

	static ::Class_1_786B812390913964_Class_1_D286C645543D4D03* Method_1_652E996B985F5ACB()
	{
		return ((::Class_1_786B812390913964_Class_1_D286C645543D4D03*(*)())((::PBYTE)hIl2Cpp + CLASS_1_786B812390913964_METHOD_1_652E996B985F5ACB_OFFSET))();
	}

	static ::System::Void Method_1_7E0102A7D81125F5(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_786B812390913964_METHOD_1_7E0102A7D81125F5_OFFSET))(a1);
	}

	static ::System::Void Method_1_2C95AFAD0256302F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_786B812390913964_METHOD_1_2C95AFAD0256302F_OFFSET))();
	}
};
