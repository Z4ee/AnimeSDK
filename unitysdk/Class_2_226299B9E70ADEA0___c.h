#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }
namespace UnityEngine::Events { class UnityAction; }

#define CLASS_2_226299B9E70ADEA0___C_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x132CCCC0)
#define CLASS_2_226299B9E70ADEA0___C_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x132CCCD0)
#define CLASS_2_226299B9E70ADEA0___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x132CCC70)
#define CLASS_2_226299B9E70ADEA0___C__CTOR_OFFSET UNITYSDK_OFFSET(0x132CCCB0)

inline static constexpr unsigned int Class_2_226299B9E70ADEA0___c_TypeDefinitionIndex = 80632;

class Class_2_226299B9E70ADEA0___c : public ::System::Object
{
public:
	static ::UnityEngine::Events::UnityAction** StaticGet___9__18_17()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(Class_2_226299B9E70ADEA0___c_TypeDefinitionIndex)->GetStaticField(0x3B910);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__18_14()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_226299B9E70ADEA0___c_TypeDefinitionIndex)->GetStaticField(0x3B918);
	}
	static ::Class_2_226299B9E70ADEA0___c** StaticGet___9()
	{
		return (::Class_2_226299B9E70ADEA0___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_226299B9E70ADEA0___c_TypeDefinitionIndex)->GetStaticField(0x3B920);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_226299B9E70ADEA0___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_226299B9E70ADEA0___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_226299B9E70ADEA0___C_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_F8C7231308CD2C82()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_226299B9E70ADEA0___C_METHOD_1_F8C7231308CD2C82_OFFSET))(this);
	}
};
