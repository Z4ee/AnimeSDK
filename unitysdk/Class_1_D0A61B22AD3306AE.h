#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D0A61B22AD3306AE_Class_1_04A718CFB2B0DB18_26;
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D0A61B22AD3306AE_METHOD_1_18CC1247FB597807_OFFSET UNITYSDK_OFFSET(0xA93C630)
#define CLASS_1_D0A61B22AD3306AE_METHOD_1_BDD6A14F1008A0A6_OFFSET UNITYSDK_OFFSET(0xA93C920)
#define CLASS_1_D0A61B22AD3306AE__CCTOR_OFFSET UNITYSDK_OFFSET(0xA93C5A0)

inline static constexpr unsigned int Class_1_D0A61B22AD3306AE_TypeDefinitionIndex = 80489;

class Class_1_D0A61B22AD3306AE : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::Class_1_D0A61B22AD3306AE_Class_1_04A718CFB2B0DB18_26*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::List_1<::Class_1_D0A61B22AD3306AE_Class_1_04A718CFB2B0DB18_26*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D0A61B22AD3306AE_TypeDefinitionIndex)->GetStaticField(0x48D80);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D0A61B22AD3306AE_TypeDefinitionIndex)->GetStaticField(0x11940);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D0A61B22AD3306AE__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_18CC1247FB597807(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D0A61B22AD3306AE_METHOD_1_18CC1247FB597807_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_BDD6A14F1008A0A6(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_D0A61B22AD3306AE_METHOD_1_BDD6A14F1008A0A6_OFFSET))(a1);
	}
};
