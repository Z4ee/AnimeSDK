#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Text { class StringBuilder; }

#define CLASS_1_FB0DB21CD002050B_METHOD_1_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x164D56A0)
#define CLASS_1_FB0DB21CD002050B_METHOD_1_8B328B669368F123_OFFSET UNITYSDK_OFFSET(0x164D52F0)
#define CLASS_1_FB0DB21CD002050B_METHOD_1_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0x164D57D0)
#define CLASS_1_FB0DB21CD002050B__CCTOR_OFFSET UNITYSDK_OFFSET(0x164D5B40)

inline static constexpr unsigned int Class_1_FB0DB21CD002050B_TypeDefinitionIndex = 31945;

class Class_1_FB0DB21CD002050B : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::String*>** StaticGet_Field_1_3()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB0DB21CD002050B_TypeDefinitionIndex)->GetStaticField(0x40D90);
	}
	static ::System::Text::StringBuilder** StaticGet_Field_1_2()
	{
		return (::System::Text::StringBuilder**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB0DB21CD002050B_TypeDefinitionIndex)->GetStaticField(0x40D98);
	}
	static ::System::Int32* StaticGet_Field_1_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB0DB21CD002050B_TypeDefinitionIndex)->GetStaticField(0x11490);
	}
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB0DB21CD002050B_TypeDefinitionIndex)->GetStaticField(0x11494);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FB0DB21CD002050B__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_8B328B669368F123(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FB0DB21CD002050B_METHOD_1_8B328B669368F123_OFFSET))(a1);
	}

	static ::System::Void Method_1_41A074549EF25F63()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FB0DB21CD002050B_METHOD_1_41A074549EF25F63_OFFSET))();
	}

	static ::System::Void Method_1_AAD864A9DF964170()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FB0DB21CD002050B_METHOD_1_AAD864A9DF964170_OFFSET))();
	}
};
