#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Text { class StringBuilder; }

#define CLASS_1_FB0DB21CD002050B_METHOD_1_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x1BF9D000)
#define CLASS_1_FB0DB21CD002050B_METHOD_1_739DB9F245C7FAD0_OFFSET UNITYSDK_OFFSET(0x1BF9D130)
#define CLASS_1_FB0DB21CD002050B_METHOD_1_8B328B669368F123_OFFSET UNITYSDK_OFFSET(0x1BF9CC50)
#define CLASS_1_FB0DB21CD002050B__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BF9D500)

inline static constexpr unsigned int Class_1_FB0DB21CD002050B_TypeDefinitionIndex = 40077;

class Class_1_FB0DB21CD002050B : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::String*>** StaticGet_BFDMLAFFNCG()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB0DB21CD002050B_TypeDefinitionIndex)->GetStaticField(0x17BC0);
	}
	static ::System::Text::StringBuilder** StaticGet_LIOJKFIGGIJ()
	{
		return (::System::Text::StringBuilder**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB0DB21CD002050B_TypeDefinitionIndex)->GetStaticField(0x17BC8);
	}
	static ::System::Int32* StaticGet_GIBBAFIIBAI()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB0DB21CD002050B_TypeDefinitionIndex)->GetStaticField(0x8DC0);
	}
	static ::System::Boolean* StaticGet_KLICCELODLB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB0DB21CD002050B_TypeDefinitionIndex)->GetStaticField(0x8DC4);
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

	static ::System::Void Method_1_739DB9F245C7FAD0()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FB0DB21CD002050B_METHOD_1_739DB9F245C7FAD0_OFFSET))();
	}
};
