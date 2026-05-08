#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_7F6C97116390D317_METHOD_1_488EB5F0657579FA_OFFSET UNITYSDK_OFFSET(0x10220C20)
#define CLASS_1_7F6C97116390D317_METHOD_1_9B2E710EB9D49BA6_OFFSET UNITYSDK_OFFSET(0x102207A0)
#define CLASS_1_7F6C97116390D317_METHOD_1_D936FF1923FB59BE_OFFSET UNITYSDK_OFFSET(0x10220B80)
#define CLASS_1_7F6C97116390D317_METHOD_1_E84F19001ABFA9DF_OFFSET UNITYSDK_OFFSET(0x10220670)
#define CLASS_1_7F6C97116390D317__CCTOR_OFFSET UNITYSDK_OFFSET(0x102205D0)

inline static constexpr unsigned int Class_1_7F6C97116390D317_TypeDefinitionIndex = 65602;

class Class_1_7F6C97116390D317 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7F6C97116390D317_TypeDefinitionIndex)->GetStaticField(0x2AF10);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7F6C97116390D317__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_E84F19001ABFA9DF(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7F6C97116390D317_METHOD_1_E84F19001ABFA9DF_OFFSET))(a1);
	}

	static ::System::Void Method_1_9B2E710EB9D49BA6()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7F6C97116390D317_METHOD_1_9B2E710EB9D49BA6_OFFSET))();
	}

	static ::Il2CppArray<::System::String*>* Method_1_D936FF1923FB59BE(::System::String* a1)
	{
		return ((::Il2CppArray<::System::String*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7F6C97116390D317_METHOD_1_D936FF1923FB59BE_OFFSET))(a1);
	}

	static ::System::Void Method_1_488EB5F0657579FA(::System::String* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_7F6C97116390D317_METHOD_1_488EB5F0657579FA_OFFSET))(a1, a2);
	}
};
