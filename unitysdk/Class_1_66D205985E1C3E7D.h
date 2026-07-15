#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_66D205985E1C3E7D_METHOD_1_1DCEF572AAED75CF_OFFSET UNITYSDK_OFFSET(0x18ACD910)
#define CLASS_1_66D205985E1C3E7D_METHOD_1_33AFA49D239A6650_OFFSET UNITYSDK_OFFSET(0x18ACDA70)
#define CLASS_1_66D205985E1C3E7D__CTOR_OFFSET UNITYSDK_OFFSET(0x18ACDE20)

inline static constexpr unsigned int Class_1_66D205985E1C3E7D_TypeDefinitionIndex = 59561;

class Class_1_66D205985E1C3E7D : public ::System::Object
{
public:
	static ::System::Collections::Generic::Queue_1<::System::String*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Queue_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_66D205985E1C3E7D_TypeDefinitionIndex)->GetStaticField(0x30770);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_66D205985E1C3E7D_TypeDefinitionIndex)->GetStaticField(0x8520);
	}
	static ::System::Single* StaticGet_Field_1_2()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_66D205985E1C3E7D_TypeDefinitionIndex)->GetStaticField(0x8524);
	}
	static ::System::Single* StaticGet_Field_1_3()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_66D205985E1C3E7D_TypeDefinitionIndex)->GetStaticField(0x8528);
	}
	static ::System::Single* StaticGet_Field_1_4()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_66D205985E1C3E7D_TypeDefinitionIndex)->GetStaticField(0x852C);
	}
	static ::System::Single* StaticGet_Field_1_5()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_66D205985E1C3E7D_TypeDefinitionIndex)->GetStaticField(0x8530);
	}
	// static const ::System::Int32 Field_1_6 = 0x14; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_66D205985E1C3E7D__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_1DCEF572AAED75CF(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_66D205985E1C3E7D_METHOD_1_1DCEF572AAED75CF_OFFSET))(a1);
	}

	static ::System::String* Method_1_33AFA49D239A6650()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_66D205985E1C3E7D_METHOD_1_33AFA49D239A6650_OFFSET))();
	}
};
