#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_0_16E4307DCC419505_337;
class Class_1_3A777E66EA6AD860_Class_1_D0DFCF45C67CF35E;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define CLASS_1_3A777E66EA6AD860_METHOD_1_0D7638DBC93E5002_OFFSET UNITYSDK_OFFSET(0x1AA22020)
#define CLASS_1_3A777E66EA6AD860_METHOD_1_2C95AFAD0256302F_OFFSET UNITYSDK_OFFSET(0x1AA21E90)
#define CLASS_1_3A777E66EA6AD860_METHOD_1_87A62F1205FA5743_OFFSET UNITYSDK_OFFSET(0x1AA221B0)
#define CLASS_1_3A777E66EA6AD860_METHOD_1_C97E5F6C9B8478DF_OFFSET UNITYSDK_OFFSET(0x1AA21200)
#define CLASS_1_3A777E66EA6AD860_METHOD_1_CCC0A17CE3ED0CF0_OFFSET UNITYSDK_OFFSET(0x1AA21CB0)
#define CLASS_1_3A777E66EA6AD860_METHOD_1_CFF8F8BC33D3811D_OFFSET UNITYSDK_OFFSET(0x1AA219C0)
#define CLASS_1_3A777E66EA6AD860__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AA21170)

inline static constexpr unsigned int Class_1_3A777E66EA6AD860_TypeDefinitionIndex = 78702;

class Class_1_3A777E66EA6AD860 : public ::System::Object
{
public:
	static ::Class_1_3A777E66EA6AD860_Class_1_D0DFCF45C67CF35E** StaticGet_Field_1_1()
	{
		return (::Class_1_3A777E66EA6AD860_Class_1_D0DFCF45C67CF35E**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3A777E66EA6AD860_TypeDefinitionIndex)->GetStaticField(0x3B630);
	}
	static ::System::Collections::Generic::List_1<::Class_1_3A777E66EA6AD860_Class_1_D0DFCF45C67CF35E*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::List_1<::Class_1_3A777E66EA6AD860_Class_1_D0DFCF45C67CF35E*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3A777E66EA6AD860_TypeDefinitionIndex)->GetStaticField(0x3B638);
	}
	static ::System::Boolean* StaticGet_Field_1_2()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3A777E66EA6AD860_TypeDefinitionIndex)->GetStaticField(0xE9A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3A777E66EA6AD860__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_C97E5F6C9B8478DF(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_3A777E66EA6AD860_METHOD_1_C97E5F6C9B8478DF_OFFSET))(a1);
	}

	static ::System::Void Method_1_CCC0A17CE3ED0CF0(::UnityEngine::RectTransform* a1, ::Class_0_16E4307DCC419505_337* a2)
	{
		return ((::System::Void(*)(::UnityEngine::RectTransform*, ::Class_0_16E4307DCC419505_337*))((::PBYTE)hIl2Cpp + CLASS_1_3A777E66EA6AD860_METHOD_1_CCC0A17CE3ED0CF0_OFFSET))(a1, a2);
	}

	static ::Class_1_3A777E66EA6AD860_Class_1_D0DFCF45C67CF35E* Method_1_CFF8F8BC33D3811D(::UnityEngine::Transform* a1)
	{
		return ((::Class_1_3A777E66EA6AD860_Class_1_D0DFCF45C67CF35E*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_3A777E66EA6AD860_METHOD_1_CFF8F8BC33D3811D_OFFSET))(a1);
	}

	static ::System::Void Method_1_0D7638DBC93E5002()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3A777E66EA6AD860_METHOD_1_0D7638DBC93E5002_OFFSET))();
	}

	static ::System::Void Method_1_87A62F1205FA5743(::UnityEngine::RectTransform* a1)
	{
		return ((::System::Void(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + CLASS_1_3A777E66EA6AD860_METHOD_1_87A62F1205FA5743_OFFSET))(a1);
	}

	static ::System::Void Method_1_2C95AFAD0256302F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3A777E66EA6AD860_METHOD_1_2C95AFAD0256302F_OFFSET))();
	}
};
