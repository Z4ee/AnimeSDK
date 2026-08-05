#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_9D0DA3B61DDF2467.h"
#include "unitysdk/Enum_3_DFCB42601400F441_2.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_3C5D3ADBC5C739AB__CCTOR_OFFSET UNITYSDK_OFFSET(0x1406C300)

inline static constexpr unsigned int Class_1_3C5D3ADBC5C739AB_TypeDefinitionIndex = 47850;

class Class_1_3C5D3ADBC5C739AB : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::Enum_3_9D0DA3B61DDF2467, ::System::String*>** StaticGet_Field_1_7()
	{
		return (::System::Collections::Generic::Dictionary_2<::Enum_3_9D0DA3B61DDF2467, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3C5D3ADBC5C739AB_TypeDefinitionIndex)->GetStaticField(0x33750);
	}
	static ::System::Collections::Generic::Dictionary_2<::Enum_3_DFCB42601400F441_2, ::Il2CppArray<::Enum_3_9D0DA3B61DDF2467>*>** StaticGet_Field_1_6()
	{
		return (::System::Collections::Generic::Dictionary_2<::Enum_3_DFCB42601400F441_2, ::Il2CppArray<::Enum_3_9D0DA3B61DDF2467>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3C5D3ADBC5C739AB_TypeDefinitionIndex)->GetStaticField(0x33758);
	}
	static ::Il2CppArray<::Enum_3_9D0DA3B61DDF2467>** StaticGet_Field_1_5()
	{
		return (::Il2CppArray<::Enum_3_9D0DA3B61DDF2467>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3C5D3ADBC5C739AB_TypeDefinitionIndex)->GetStaticField(0x33760);
	}
	static ::System::Collections::Generic::Dictionary_2<::Enum_3_DFCB42601400F441_2, ::System::String*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::Enum_3_DFCB42601400F441_2, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3C5D3ADBC5C739AB_TypeDefinitionIndex)->GetStaticField(0x33768);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3C5D3ADBC5C739AB__CCTOR_OFFSET))();
	}
};
