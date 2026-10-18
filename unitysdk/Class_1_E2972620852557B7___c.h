#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D05699509194BF9B;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_E2972620852557B7___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB28B9B0)
#define CLASS_1_E2972620852557B7___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB28B9F0)
#define CLASS_1_E2972620852557B7___C__HANDLEENTERED_B__13_0_OFFSET UNITYSDK_OFFSET(0xB28BA00)

inline static constexpr unsigned int Class_1_E2972620852557B7___c_TypeDefinitionIndex = 79535;

class Class_1_E2972620852557B7___c : public ::System::Object
{
public:
	static ::Class_1_E2972620852557B7___c** StaticGet___9()
	{
		return (::Class_1_E2972620852557B7___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E2972620852557B7___c_TypeDefinitionIndex)->GetStaticField(0x22FD0);
	}
	static ::System::Func_2<::Class_1_D05699509194BF9B*, ::System::Boolean>** StaticGet___9__13_0()
	{
		return (::System::Func_2<::Class_1_D05699509194BF9B*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E2972620852557B7___c_TypeDefinitionIndex)->GetStaticField(0x22FD8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E2972620852557B7___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2972620852557B7___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _HandleEntered_b__13_0(::Class_1_D05699509194BF9B* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D05699509194BF9B*))((::PBYTE)hIl2Cpp + CLASS_1_E2972620852557B7___C__HANDLEENTERED_B__13_0_OFFSET))(this, a1);
	}
};
