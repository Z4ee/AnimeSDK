#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_247F37B7AF671735_Class_1_81FFAD80CEAD109D_Class_1_27667085B8A540C6;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class StreamWriter; }

#define CLASS_1_247F37B7AF671735_CLASS_1_81FFAD80CEAD109D_METHOD_1_0B34AA51B95C62BE_OFFSET UNITYSDK_OFFSET(0x134C9730)
#define CLASS_1_247F37B7AF671735_CLASS_1_81FFAD80CEAD109D_METHOD_1_284ABAE3993D16EE_OFFSET UNITYSDK_OFFSET(0x134C8C10)
#define CLASS_1_247F37B7AF671735_CLASS_1_81FFAD80CEAD109D_METHOD_1_3129803D51C66984_OFFSET UNITYSDK_OFFSET(0x134C8AE0)
#define CLASS_1_247F37B7AF671735_CLASS_1_81FFAD80CEAD109D_METHOD_1_BE1FDA3A35F9294A_OFFSET UNITYSDK_OFFSET(0x134C97A0)
#define CLASS_1_247F37B7AF671735_CLASS_1_81FFAD80CEAD109D_METHOD_1_DB7F172E223A649E_OFFSET UNITYSDK_OFFSET(0x134C99E0)
#define CLASS_1_247F37B7AF671735_CLASS_1_81FFAD80CEAD109D__CTOR_OFFSET UNITYSDK_OFFSET(0x134C89E0)

inline static constexpr unsigned int Class_1_247F37B7AF671735_Class_1_81FFAD80CEAD109D_TypeDefinitionIndex = 44700;

class Class_1_247F37B7AF671735_Class_1_81FFAD80CEAD109D : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	::System::Collections::Generic::List_1<::Class_1_247F37B7AF671735_Class_1_81FFAD80CEAD109D_Class_1_27667085B8A540C6*>* Field_1_1; // 0x10
	::System::String* Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_247F37B7AF671735_CLASS_1_81FFAD80CEAD109D__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_0B34AA51B95C62BE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_247F37B7AF671735_CLASS_1_81FFAD80CEAD109D_METHOD_1_0B34AA51B95C62BE_OFFSET))(this);
	}

	::System::Void Method_1_3129803D51C66984(::System::String* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_247F37B7AF671735_CLASS_1_81FFAD80CEAD109D_METHOD_1_3129803D51C66984_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_284ABAE3993D16EE(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_247F37B7AF671735_CLASS_1_81FFAD80CEAD109D_METHOD_1_284ABAE3993D16EE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_DB7F172E223A649E(::System::IO::StreamWriter* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::StreamWriter*))((::PBYTE)hIl2Cpp + CLASS_1_247F37B7AF671735_CLASS_1_81FFAD80CEAD109D_METHOD_1_DB7F172E223A649E_OFFSET))(this, a1);
	}

	::Il2CppArray<::System::Byte>* Method_1_BE1FDA3A35F9294A()
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_247F37B7AF671735_CLASS_1_81FFAD80CEAD109D_METHOD_1_BE1FDA3A35F9294A_OFFSET))(this);
	}
};
