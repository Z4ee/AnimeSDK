#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_13264FE803E7E6C1;
class Class_1_412D29F0ED7D5587_Class_1_8DAA7D61C2E57B56;
class Class_1_412D29F0ED7D5587_Class_3_487EE6B302AC50B7_4;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_412D29F0ED7D5587_METHOD_1_1F130271093617A5_OFFSET UNITYSDK_OFFSET(0xA8F40A0)
#define CLASS_1_412D29F0ED7D5587_METHOD_1_85589F7311A62FA2_OFFSET UNITYSDK_OFFSET(0xA8F4460)
#define CLASS_1_412D29F0ED7D5587_METHOD_1_FFD7F21F32077B59_OFFSET UNITYSDK_OFFSET(0xA8F4930)
#define CLASS_1_412D29F0ED7D5587__CCTOR_OFFSET UNITYSDK_OFFSET(0xA8F4A70)

inline static constexpr unsigned int Class_1_412D29F0ED7D5587_TypeDefinitionIndex = 64787;

class Class_1_412D29F0ED7D5587 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_13264FE803E7E6C1*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_13264FE803E7E6C1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_412D29F0ED7D5587_TypeDefinitionIndex)->GetStaticField(0x67660);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_412D29F0ED7D5587_Class_1_8DAA7D61C2E57B56*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_412D29F0ED7D5587_Class_1_8DAA7D61C2E57B56*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_412D29F0ED7D5587_TypeDefinitionIndex)->GetStaticField(0x67668);
	}
	static ::System::Collections::Generic::List_1<::Class_1_13264FE803E7E6C1*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::List_1<::Class_1_13264FE803E7E6C1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_412D29F0ED7D5587_TypeDefinitionIndex)->GetStaticField(0x67670);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_412D29F0ED7D5587__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_1F130271093617A5()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_412D29F0ED7D5587_METHOD_1_1F130271093617A5_OFFSET))();
	}

	static ::System::Void Method_1_85589F7311A62FA2(::System::String* a1, ::Class_1_412D29F0ED7D5587_Class_3_487EE6B302AC50B7_4* a2)
	{
		return ((::System::Void(*)(::System::String*, ::Class_1_412D29F0ED7D5587_Class_3_487EE6B302AC50B7_4*))((::PBYTE)hIl2Cpp + CLASS_1_412D29F0ED7D5587_METHOD_1_85589F7311A62FA2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FFD7F21F32077B59(::System::String* a1, ::Class_1_412D29F0ED7D5587_Class_3_487EE6B302AC50B7_4* a2)
	{
		return ((::System::Void(*)(::System::String*, ::Class_1_412D29F0ED7D5587_Class_3_487EE6B302AC50B7_4*))((::PBYTE)hIl2Cpp + CLASS_1_412D29F0ED7D5587_METHOD_1_FFD7F21F32077B59_OFFSET))(a1, a2);
	}
};
