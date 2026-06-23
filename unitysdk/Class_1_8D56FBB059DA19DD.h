#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_9D0DA3B61DDF2467.h"
#include "unitysdk/Enum_3_DFCB42601400F441.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_8D56FBB059DA19DD__CCTOR_OFFSET UNITYSDK_OFFSET(0xF5BFF10)

inline static constexpr unsigned int Class_1_8D56FBB059DA19DD_TypeDefinitionIndex = 77411;

class Class_1_8D56FBB059DA19DD : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::Enum_3_DFCB42601400F441, ::System::String*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::Enum_3_DFCB42601400F441, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D56FBB059DA19DD_TypeDefinitionIndex)->GetStaticField(0x36A60);
	}
	static ::Il2CppArray<::Enum_3_9D0DA3B61DDF2467>** StaticGet_Field_1_3()
	{
		return (::Il2CppArray<::Enum_3_9D0DA3B61DDF2467>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D56FBB059DA19DD_TypeDefinitionIndex)->GetStaticField(0x36A68);
	}
	static ::System::Collections::Generic::Dictionary_2<::Enum_3_9D0DA3B61DDF2467, ::System::String*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::Enum_3_9D0DA3B61DDF2467, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D56FBB059DA19DD_TypeDefinitionIndex)->GetStaticField(0x36A70);
	}
	static ::System::Collections::Generic::Dictionary_2<::Enum_3_DFCB42601400F441, ::Il2CppArray<::Enum_3_9D0DA3B61DDF2467>*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::Enum_3_DFCB42601400F441, ::Il2CppArray<::Enum_3_9D0DA3B61DDF2467>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D56FBB059DA19DD_TypeDefinitionIndex)->GetStaticField(0x36A78);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8D56FBB059DA19DD__CCTOR_OFFSET))();
	}
};
