#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_66D205985E1C3E7D_METHOD_1_1DCEF572AAED75CF_OFFSET UNITYSDK_OFFSET(0x8C47A00)
#define CLASS_1_66D205985E1C3E7D_METHOD_1_6407BF6CD6EB6954_OFFSET UNITYSDK_OFFSET(0x8C47B60)
#define CLASS_1_66D205985E1C3E7D__CTOR_OFFSET UNITYSDK_OFFSET(0x8C47D50)

inline static constexpr unsigned int Class_1_66D205985E1C3E7D_TypeDefinitionIndex = 50624;

class Class_1_66D205985E1C3E7D : public ::System::Object
{
public:
	static ::System::Collections::Generic::Queue_1<::System::String*>** StaticGet_Field_1_6()
	{
		return (::System::Collections::Generic::Queue_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_66D205985E1C3E7D_TypeDefinitionIndex)->GetStaticField(0x211D0);
	}
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_66D205985E1C3E7D_TypeDefinitionIndex)->GetStaticField(0x8C10);
	}
	static ::System::Single* StaticGet_Field_1_4()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_66D205985E1C3E7D_TypeDefinitionIndex)->GetStaticField(0x8C14);
	}
	static ::System::Single* StaticGet_Field_1_2()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_66D205985E1C3E7D_TypeDefinitionIndex)->GetStaticField(0x8C18);
	}
	static ::System::Single* StaticGet_Field_1_3()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_66D205985E1C3E7D_TypeDefinitionIndex)->GetStaticField(0x8C1C);
	}
	static ::System::Single* StaticGet_Field_1_1()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_66D205985E1C3E7D_TypeDefinitionIndex)->GetStaticField(0x8C20);
	}
	// static const ::System::Int32 Field_1_5 = 0x14; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_66D205985E1C3E7D__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_1DCEF572AAED75CF(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_66D205985E1C3E7D_METHOD_1_1DCEF572AAED75CF_OFFSET))(a1);
	}

	static ::System::String* Method_1_6407BF6CD6EB6954()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_66D205985E1C3E7D_METHOD_1_6407BF6CD6EB6954_OFFSET))();
	}
};
