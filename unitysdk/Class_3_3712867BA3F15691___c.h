#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_4_B48EE42F47680F98;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_3712867BA3F15691___C_METHOD_1_C7C4399D2E9567C9_OFFSET UNITYSDK_OFFSET(0x1E2D3130)
#define CLASS_3_3712867BA3F15691___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2D30E0)
#define CLASS_3_3712867BA3F15691___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2D3120)

inline static constexpr unsigned int Class_3_3712867BA3F15691___c_TypeDefinitionIndex = 28831;

class Class_3_3712867BA3F15691___c : public ::System::Object
{
public:
	static ::Class_3_3712867BA3F15691___c** StaticGet___9()
	{
		return (::Class_3_3712867BA3F15691___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_3712867BA3F15691___c_TypeDefinitionIndex)->GetStaticField(0x236D0);
	}
	static ::System::Action_1<::Class_4_B48EE42F47680F98*>** StaticGet___9__5_0()
	{
		return (::System::Action_1<::Class_4_B48EE42F47680F98*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_3712867BA3F15691___c_TypeDefinitionIndex)->GetStaticField(0x236D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_3712867BA3F15691___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3712867BA3F15691___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C7C4399D2E9567C9(::Class_4_B48EE42F47680F98* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_B48EE42F47680F98*))((::PBYTE)hIl2Cpp + CLASS_3_3712867BA3F15691___C_METHOD_1_C7C4399D2E9567C9_OFFSET))(this, a1);
	}
};
