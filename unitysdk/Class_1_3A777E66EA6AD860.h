#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_0_16E4307DCC419505_645;
class Class_1_3A777E66EA6AD860_Class_1_D0DFCF45C67CF35E;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define CLASS_1_3A777E66EA6AD860_METHOD_1_08DCF72FBE01FF99_OFFSET UNITYSDK_OFFSET(0x1719A840)
#define CLASS_1_3A777E66EA6AD860_METHOD_1_41BF7BAF10EE4E61_OFFSET UNITYSDK_OFFSET(0x1719A3C0)
#define CLASS_1_3A777E66EA6AD860_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x171995E0)
#define CLASS_1_3A777E66EA6AD860_METHOD_1_A1F8484F99A51C8D_OFFSET UNITYSDK_OFFSET(0x17199910)
#define CLASS_1_3A777E66EA6AD860_METHOD_1_CCC0A17CE3ED0CF0_OFFSET UNITYSDK_OFFSET(0x17199730)
#define CLASS_1_3A777E66EA6AD860_METHOD_1_CFF8F8BC33D3811D_OFFSET UNITYSDK_OFFSET(0x1719A0C0)
#define CLASS_1_3A777E66EA6AD860__CCTOR_OFFSET UNITYSDK_OFFSET(0x17199550)

inline static constexpr unsigned int Class_1_3A777E66EA6AD860_TypeDefinitionIndex = 80340;

class Class_1_3A777E66EA6AD860 : public ::System::Object
{
public:
	static ::Class_1_3A777E66EA6AD860_Class_1_D0DFCF45C67CF35E** StaticGet_Field_1_1()
	{
		return (::Class_1_3A777E66EA6AD860_Class_1_D0DFCF45C67CF35E**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3A777E66EA6AD860_TypeDefinitionIndex)->GetStaticField(0x4F560);
	}
	static ::System::Collections::Generic::List_1<::Class_1_3A777E66EA6AD860_Class_1_D0DFCF45C67CF35E*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::List_1<::Class_1_3A777E66EA6AD860_Class_1_D0DFCF45C67CF35E*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3A777E66EA6AD860_TypeDefinitionIndex)->GetStaticField(0x4F568);
	}
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3A777E66EA6AD860_TypeDefinitionIndex)->GetStaticField(0x12490);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3A777E66EA6AD860__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3A777E66EA6AD860_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_CCC0A17CE3ED0CF0(::UnityEngine::RectTransform* a1, ::Class_0_16E4307DCC419505_645* a2)
	{
		return ((::System::Void(*)(::UnityEngine::RectTransform*, ::Class_0_16E4307DCC419505_645*))((::PBYTE)hIl2Cpp + CLASS_1_3A777E66EA6AD860_METHOD_1_CCC0A17CE3ED0CF0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A1F8484F99A51C8D(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_3A777E66EA6AD860_METHOD_1_A1F8484F99A51C8D_OFFSET))(a1);
	}

	static ::Class_1_3A777E66EA6AD860_Class_1_D0DFCF45C67CF35E* Method_1_CFF8F8BC33D3811D(::UnityEngine::Transform* a1)
	{
		return ((::Class_1_3A777E66EA6AD860_Class_1_D0DFCF45C67CF35E*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_3A777E66EA6AD860_METHOD_1_CFF8F8BC33D3811D_OFFSET))(a1);
	}

	static ::System::Void Method_1_41BF7BAF10EE4E61(::UnityEngine::RectTransform* a1)
	{
		return ((::System::Void(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + CLASS_1_3A777E66EA6AD860_METHOD_1_41BF7BAF10EE4E61_OFFSET))(a1);
	}

	static ::System::Void Method_1_08DCF72FBE01FF99()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3A777E66EA6AD860_METHOD_1_08DCF72FBE01FF99_OFFSET))();
	}
};
