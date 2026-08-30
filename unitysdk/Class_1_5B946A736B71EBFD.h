#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_FE49D2686B15EB31.h"
#include "unitysdk/System/Object.h"

class Class_1_2F293706394A94E6;
namespace System { class Random; }
namespace System { class String; }

#define CLASS_1_5B946A736B71EBFD_METHOD_1_0B002F98131AB192_OFFSET UNITYSDK_OFFSET(0x1BF94870)
#define CLASS_1_5B946A736B71EBFD_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1BF946F0)
#define CLASS_1_5B946A736B71EBFD_METHOD_1_4BA2C8D2814B7E15_OFFSET UNITYSDK_OFFSET(0x1BF95C00)
#define CLASS_1_5B946A736B71EBFD_METHOD_1_660DC82396266CCA_OFFSET UNITYSDK_OFFSET(0x1BF95B00)
#define CLASS_1_5B946A736B71EBFD_METHOD_1_9123E7AE4C1ABB04_OFFSET UNITYSDK_OFFSET(0x1BF95D30)
#define CLASS_1_5B946A736B71EBFD_METHOD_1_EE7A41C190351096_OFFSET UNITYSDK_OFFSET(0x1BF95EC0)
#define CLASS_1_5B946A736B71EBFD_METHOD_1_F0BD65B017F2AC0B_OFFSET UNITYSDK_OFFSET(0x1BF94700)
#define CLASS_1_5B946A736B71EBFD_METHOD_1_FD00866FF781302D_OFFSET UNITYSDK_OFFSET(0x1BF95130)
#define CLASS_1_5B946A736B71EBFD__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BF95FA0)
#define CLASS_1_5B946A736B71EBFD__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF95F40)

inline static constexpr unsigned int Class_1_5B946A736B71EBFD_TypeDefinitionIndex = 40220;

class Class_1_5B946A736B71EBFD : public ::System::Object
{
public:
	static ::System::Random** StaticGet_OLEEIPHBJKB()
	{
		return (::System::Random**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B946A736B71EBFD_TypeDefinitionIndex)->GetStaticField(0x171E0);
	}
	static ::System::UInt32* StaticGet_MMIPPDHLFFC()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B946A736B71EBFD_TypeDefinitionIndex)->GetStaticField(0x8B70);
	}
	static ::System::Boolean* StaticGet_FKDBKPHFEKF()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B946A736B71EBFD_TypeDefinitionIndex)->GetStaticField(0x8B74);
	}
	// static const ::System::Double HAMBMFPEOOK; // 0x0
	::Il2CppArray<::System::String*>* GMIODKLGJHD; // 0x10
	::Il2CppArray<::System::UInt32>* EMKFBDEACMI; // 0x18
	::Class_1_2F293706394A94E6* DCOPELFHOLO; // 0x20
	::System::Double MDDJDEINLPM; // 0x28
	::System::Boolean BANLOOPBKLF; // 0x30
	::System::Boolean HKMGIBJNCFE; // 0x31
	::System::UInt32 CMFNKDKKGGI; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B946A736B71EBFD__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B946A736B71EBFD__CCTOR_OFFSET))();
	}

	::Class_1_2F293706394A94E6* Method_1_24748FC20F375725()
	{
		return ((::Class_1_2F293706394A94E6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B946A736B71EBFD_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_F0BD65B017F2AC0B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B946A736B71EBFD_METHOD_1_F0BD65B017F2AC0B_OFFSET))(this);
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

	::System::Void Method_1_FD00866FF781302D(::System::Int32 a1, ::Il2CppArray<::Struct_2_FE49D2686B15EB31>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::Struct_2_FE49D2686B15EB31>*))((::PBYTE)hIl2Cpp + CLASS_1_5B946A736B71EBFD_METHOD_1_FD00866FF781302D_OFFSET))(this, a1, a2);
	}
};
