#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EE60750735AAF463;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_6DBA34B103B833EA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x156C8D90)
#define CLASS_1_6DBA34B103B833EA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x156C8DC0)
#define CLASS_1_6DBA34B103B833EA___C___CTOR_B__2_0_OFFSET UNITYSDK_OFFSET(0x156C8DD0)

inline static constexpr unsigned int Class_1_6DBA34B103B833EA___c_TypeDefinitionIndex = 80834;

class Class_1_6DBA34B103B833EA___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_1_EE60750735AAF463*, ::System::Boolean>** StaticGet___9__2_0()
	{
		return (::System::Func_2<::Class_1_EE60750735AAF463*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6DBA34B103B833EA___c_TypeDefinitionIndex)->GetStaticField(0x25510);
	}
	static ::Class_1_6DBA34B103B833EA___c** StaticGet___9()
	{
		return (::Class_1_6DBA34B103B833EA___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6DBA34B103B833EA___c_TypeDefinitionIndex)->GetStaticField(0x25518);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6DBA34B103B833EA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DBA34B103B833EA___C__CTOR_OFFSET))(this);
	}

	::System::Boolean __ctor_b__2_0(::Class_1_EE60750735AAF463* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_EE60750735AAF463*))((::PBYTE)hIl2Cpp + CLASS_1_6DBA34B103B833EA___C___CTOR_B__2_0_OFFSET))(this, a1);
	}
};
