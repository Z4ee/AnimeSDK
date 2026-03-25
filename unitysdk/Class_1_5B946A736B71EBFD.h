#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_FE49D2686B15EB31.h"
#include "unitysdk/System/Object.h"

class Class_1_15BDC0992978ED9A;
namespace System { class Random; }
namespace System { class String; }

#define CLASS_1_5B946A736B71EBFD_METHOD_1_0B002F98131AB192_OFFSET UNITYSDK_OFFSET(0x16543290)
#define CLASS_1_5B946A736B71EBFD_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x16543170)
#define CLASS_1_5B946A736B71EBFD_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16543180)
#define CLASS_1_5B946A736B71EBFD_METHOD_1_4BA2C8D2814B7E15_OFFSET UNITYSDK_OFFSET(0x16543840)
#define CLASS_1_5B946A736B71EBFD_METHOD_1_660DC82396266CCA_OFFSET UNITYSDK_OFFSET(0x16543740)
#define CLASS_1_5B946A736B71EBFD_METHOD_1_831AD0EF7CEB650C_OFFSET UNITYSDK_OFFSET(0x165435A0)
#define CLASS_1_5B946A736B71EBFD_METHOD_1_9123E7AE4C1ABB04_OFFSET UNITYSDK_OFFSET(0x16543980)
#define CLASS_1_5B946A736B71EBFD_METHOD_1_EE7A41C190351096_OFFSET UNITYSDK_OFFSET(0x16543B40)
#define CLASS_1_5B946A736B71EBFD__CCTOR_OFFSET UNITYSDK_OFFSET(0x16543C20)
#define CLASS_1_5B946A736B71EBFD__CTOR_OFFSET UNITYSDK_OFFSET(0x16543BD0)

inline static constexpr unsigned int Class_1_5B946A736B71EBFD_TypeDefinitionIndex = 32085;

class Class_1_5B946A736B71EBFD : public ::System::Object
{
public:
	static ::System::Random** StaticGet_Field_1_9()
	{
		return (::System::Random**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B946A736B71EBFD_TypeDefinitionIndex)->GetStaticField(0x57A0);
	}
	static ::System::Boolean* StaticGet_Field_1_7()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B946A736B71EBFD_TypeDefinitionIndex)->GetStaticField(0x3510);
	}
	static ::System::UInt32* StaticGet_Field_1_8()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B946A736B71EBFD_TypeDefinitionIndex)->GetStaticField(0x3514);
	}
	// static const ::System::Double Field_1_3; // 0x0
	::Il2CppArray<::System::String*>* Field_1_0; // 0x10
	::Class_1_15BDC0992978ED9A* Field_1_10; // 0x18
	::Il2CppArray<::System::UInt32>* Field_1_6; // 0x20
	::System::UInt32 Field_1_5; // 0x28
	::System::Boolean Field_1_2; // 0x2C
	::System::Boolean Field_1_1; // 0x2D
	::System::Double Field_1_4; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B946A736B71EBFD__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B946A736B71EBFD__CCTOR_OFFSET))();
	}

	::Class_1_15BDC0992978ED9A* Method_1_24748FC20F375725()
	{
		return ((::Class_1_15BDC0992978ED9A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B946A736B71EBFD_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B946A736B71EBFD_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Boolean Method_1_0B002F98131AB192(::Il2CppArray<::System::Byte>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_5B946A736B71EBFD_METHOD_1_0B002F98131AB192_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_660DC82396266CCA(::Il2CppArray<::System::String*>* a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5B946A736B71EBFD_METHOD_1_660DC82396266CCA_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_4BA2C8D2814B7E15(::Il2CppArray<::System::String*>* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5B946A736B71EBFD_METHOD_1_4BA2C8D2814B7E15_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_9123E7AE4C1ABB04(::System::String* a1, ::Il2CppArray<::System::Byte>* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_5B946A736B71EBFD_METHOD_1_9123E7AE4C1ABB04_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_EE7A41C190351096(::System::Int32 a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5B946A736B71EBFD_METHOD_1_EE7A41C190351096_OFFSET))(this, a1);
	}

	::System::Void Method_1_831AD0EF7CEB650C(::System::Int32 a1, ::Il2CppArray<::Struct_2_FE49D2686B15EB31>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::Struct_2_FE49D2686B15EB31>*))((::PBYTE)hIl2Cpp + CLASS_1_5B946A736B71EBFD_METHOD_1_831AD0EF7CEB650C_OFFSET))(this, a1, a2);
	}
};
