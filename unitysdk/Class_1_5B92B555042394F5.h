#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_07C4412B5A0F6218.h"
#include "unitysdk/Enum_3_47595C20DEDAE9BB.h"
#include "unitysdk/Enum_3_7E8524D85A16B539.h"
#include "unitysdk/System/Object.h"

class Class_2_AF4036FBC298303A;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_5B92B555042394F5_METHOD_1_9C82365D24B60E96_OFFSET UNITYSDK_OFFSET(0x16FE5640)
#define CLASS_1_5B92B555042394F5_METHOD_1_B38D0BE69E42199B_OFFSET UNITYSDK_OFFSET(0x16FE5C50)
#define CLASS_1_5B92B555042394F5__CCTOR_OFFSET UNITYSDK_OFFSET(0x16FE5020)

inline static constexpr unsigned int Class_1_5B92B555042394F5_TypeDefinitionIndex = 50654;

class Class_1_5B92B555042394F5 : public ::System::Object
{
public:
	static ::Class_2_AF4036FBC298303A** StaticGet_Field_1_6()
	{
		return (::Class_2_AF4036FBC298303A**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B92B555042394F5_TypeDefinitionIndex)->GetStaticField(0x334B0);
	}
	static ::System::String** StaticGet_Field_1_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B92B555042394F5_TypeDefinitionIndex)->GetStaticField(0x334B8);
	}
	static ::System::Collections::Generic::Dictionary_2<::Enum_3_47595C20DEDAE9BB, ::System::String*>** StaticGet_Field_1_3()
	{
		return (::System::Collections::Generic::Dictionary_2<::Enum_3_47595C20DEDAE9BB, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B92B555042394F5_TypeDefinitionIndex)->GetStaticField(0x334C0);
	}
	static ::System::Collections::Generic::Dictionary_2<::Enum_3_07C4412B5A0F6218, ::System::String*>** StaticGet_Field_1_5()
	{
		return (::System::Collections::Generic::Dictionary_2<::Enum_3_07C4412B5A0F6218, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B92B555042394F5_TypeDefinitionIndex)->GetStaticField(0x334C8);
	}
	static ::System::Collections::Generic::Dictionary_2<::Enum_3_7E8524D85A16B539, ::System::String*>** StaticGet_Field_1_4()
	{
		return (::System::Collections::Generic::Dictionary_2<::Enum_3_7E8524D85A16B539, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B92B555042394F5_TypeDefinitionIndex)->GetStaticField(0x334D0);
	}
	static ::System::String** StaticGet_Field_1_2()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B92B555042394F5_TypeDefinitionIndex)->GetStaticField(0x334D8);
	}
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B92B555042394F5_TypeDefinitionIndex)->GetStaticField(0x334E0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B92B555042394F5__CCTOR_OFFSET))();
	}

	static ::System::String* Method_1_9C82365D24B60E96(::System::String* a1, ::System::String* a2, ::System::Collections::Generic::IEnumerable_1<::System::String*>* a3)
	{
		return ((::System::String*(*)(::System::String*, ::System::String*, ::System::Collections::Generic::IEnumerable_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_5B92B555042394F5_METHOD_1_9C82365D24B60E96_OFFSET))(a1, a2, a3);
	}

	static ::System::String* Method_1_B38D0BE69E42199B(::System::String* a1, ::System::String* a2, ::System::Collections::Generic::IEnumerable_1<::System::Int32>* a3)
	{
		return ((::System::String*(*)(::System::String*, ::System::String*, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_5B92B555042394F5_METHOD_1_B38D0BE69E42199B_OFFSET))(a1, a2, a3);
	}
};
