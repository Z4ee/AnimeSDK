#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_9D0DA3B61DDF2467.h"
#include "unitysdk/Enum_3_DFCB42601400F441_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_3B362B30E3290693__CCTOR_OFFSET UNITYSDK_OFFSET(0x1355A2D0)

inline static constexpr unsigned int Class_1_3B362B30E3290693_TypeDefinitionIndex = 59215;

class Class_1_3B362B30E3290693 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::Enum_3_9D0DA3B61DDF2467, ::System::String*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::Enum_3_9D0DA3B61DDF2467, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3B362B30E3290693_TypeDefinitionIndex)->GetStaticField(0x42BF0);
	}
	static ::System::Collections::Generic::Dictionary_2<::Enum_3_DFCB42601400F441_1, ::Il2CppArray<::Enum_3_9D0DA3B61DDF2467>*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::Enum_3_DFCB42601400F441_1, ::Il2CppArray<::Enum_3_9D0DA3B61DDF2467>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3B362B30E3290693_TypeDefinitionIndex)->GetStaticField(0x42BF8);
	}
	static ::Il2CppArray<::Enum_3_9D0DA3B61DDF2467>** StaticGet_Field_1_3()
	{
		return (::Il2CppArray<::Enum_3_9D0DA3B61DDF2467>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3B362B30E3290693_TypeDefinitionIndex)->GetStaticField(0x42C00);
	}
	static ::System::Collections::Generic::Dictionary_2<::Enum_3_DFCB42601400F441_1, ::System::String*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::Enum_3_DFCB42601400F441_1, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3B362B30E3290693_TypeDefinitionIndex)->GetStaticField(0x42C08);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3B362B30E3290693__CCTOR_OFFSET))();
	}
};
