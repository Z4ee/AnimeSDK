#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7DB0AAEAFBAE8CC7_Class_1_3509374B7F78953F;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T1, typename T2> class Class_2_1908F2437AE347F8;

#define CLASS_1_7DB0AAEAFBAE8CC7_METHOD_1_32D9AFD68D0FE33A_OFFSET UNITYSDK_OFFSET(0x14D0E6F0)
#define CLASS_1_7DB0AAEAFBAE8CC7_METHOD_1_C5F529AC413B7B7D_OFFSET UNITYSDK_OFFSET(0x14D0E5E0)
#define CLASS_1_7DB0AAEAFBAE8CC7__CTOR_OFFSET UNITYSDK_OFFSET(0x14D0E530)

inline static constexpr unsigned int Class_1_7DB0AAEAFBAE8CC7_TypeDefinitionIndex = 58533;

class Class_1_7DB0AAEAFBAE8CC7 : public ::System::Object
{
public:
	::Class_2_1908F2437AE347F8<::System::Int32, ::Class_1_7DB0AAEAFBAE8CC7_Class_1_3509374B7F78953F*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DB0AAEAFBAE8CC7__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_C5F529AC413B7B7D(::System::Int32 a1, ::System::Collections::Generic::List_1<::Class_1_7DB0AAEAFBAE8CC7_Class_1_3509374B7F78953F*>*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::Class_1_7DB0AAEAFBAE8CC7_Class_1_3509374B7F78953F*>*&))((::PBYTE)hIl2Cpp + CLASS_1_7DB0AAEAFBAE8CC7_METHOD_1_C5F529AC413B7B7D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_32D9AFD68D0FE33A(::System::Int32 a1, ::System::Int32 a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7DB0AAEAFBAE8CC7_METHOD_1_32D9AFD68D0FE33A_OFFSET))(this, a1, a2, a3);
	}
};
