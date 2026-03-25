#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BE097CDA27AD83B1_Class_1_5471DE95B98B5E61_Class_1_27667085B8A540C6;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class StreamWriter; }

#define CLASS_1_BE097CDA27AD83B1_CLASS_1_5471DE95B98B5E61_METHOD_1_0B34AA51B95C62BE_OFFSET UNITYSDK_OFFSET(0x8D76FE0)
#define CLASS_1_BE097CDA27AD83B1_CLASS_1_5471DE95B98B5E61_METHOD_1_A6DB211235148F84_OFFSET UNITYSDK_OFFSET(0x8D77430)
#define CLASS_1_BE097CDA27AD83B1_CLASS_1_5471DE95B98B5E61_METHOD_1_BE1FDA3A35F9294A_OFFSET UNITYSDK_OFFSET(0x8D77050)
#define CLASS_1_BE097CDA27AD83B1_CLASS_1_5471DE95B98B5E61_METHOD_1_C15AB6CD4AC39CC9_OFFSET UNITYSDK_OFFSET(0x8D77510)
#define CLASS_1_BE097CDA27AD83B1_CLASS_1_5471DE95B98B5E61_METHOD_1_FCA4D1E25C68D4F8_OFFSET UNITYSDK_OFFSET(0x8D77350)
#define CLASS_1_BE097CDA27AD83B1_CLASS_1_5471DE95B98B5E61__CTOR_OFFSET UNITYSDK_OFFSET(0x8D77250)

inline static constexpr unsigned int Class_1_BE097CDA27AD83B1_Class_1_5471DE95B98B5E61_TypeDefinitionIndex = 38270;

class Class_1_BE097CDA27AD83B1_Class_1_5471DE95B98B5E61 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	::System::Collections::Generic::List_1<::Class_1_BE097CDA27AD83B1_Class_1_5471DE95B98B5E61_Class_1_27667085B8A540C6*>* Field_1_2; // 0x10
	::System::String* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE097CDA27AD83B1_CLASS_1_5471DE95B98B5E61__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_0B34AA51B95C62BE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE097CDA27AD83B1_CLASS_1_5471DE95B98B5E61_METHOD_1_0B34AA51B95C62BE_OFFSET))(this);
	}

	::System::Void Method_1_FCA4D1E25C68D4F8(::System::String* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BE097CDA27AD83B1_CLASS_1_5471DE95B98B5E61_METHOD_1_FCA4D1E25C68D4F8_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_A6DB211235148F84(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BE097CDA27AD83B1_CLASS_1_5471DE95B98B5E61_METHOD_1_A6DB211235148F84_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_C15AB6CD4AC39CC9(::System::IO::StreamWriter* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::StreamWriter*))((::PBYTE)hIl2Cpp + CLASS_1_BE097CDA27AD83B1_CLASS_1_5471DE95B98B5E61_METHOD_1_C15AB6CD4AC39CC9_OFFSET))(this, a1);
	}

	::Il2CppArray<::System::Byte>* Method_1_BE1FDA3A35F9294A()
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE097CDA27AD83B1_CLASS_1_5471DE95B98B5E61_METHOD_1_BE1FDA3A35F9294A_OFFSET))(this);
	}
};
