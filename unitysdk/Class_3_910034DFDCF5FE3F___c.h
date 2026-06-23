#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_80012FE282D692CD;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_910034DFDCF5FE3F___C_METHOD_1_9A2CB7743AE49CA4_OFFSET UNITYSDK_OFFSET(0x115BCA90)
#define CLASS_3_910034DFDCF5FE3F___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x115BCA40)
#define CLASS_3_910034DFDCF5FE3F___C__CTOR_OFFSET UNITYSDK_OFFSET(0x115BCA80)

inline static constexpr unsigned int Class_3_910034DFDCF5FE3F___c_TypeDefinitionIndex = 47214;

class Class_3_910034DFDCF5FE3F___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_3_80012FE282D692CD*>** StaticGet___9__6_0()
	{
		return (::System::Action_1<::Class_3_80012FE282D692CD*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_910034DFDCF5FE3F___c_TypeDefinitionIndex)->GetStaticField(0x380A0);
	}
	static ::Class_3_910034DFDCF5FE3F___c** StaticGet___9()
	{
		return (::Class_3_910034DFDCF5FE3F___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_910034DFDCF5FE3F___c_TypeDefinitionIndex)->GetStaticField(0x380A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_910034DFDCF5FE3F___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_910034DFDCF5FE3F___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9A2CB7743AE49CA4(::Class_3_80012FE282D692CD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_80012FE282D692CD*))((::PBYTE)hIl2Cpp + CLASS_3_910034DFDCF5FE3F___C_METHOD_1_9A2CB7743AE49CA4_OFFSET))(this, a1);
	}
};
