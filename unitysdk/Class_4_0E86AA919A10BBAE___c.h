#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9465CC52E1CFB15A;
namespace System { template <typename T> class Action_1; }

#define CLASS_4_0E86AA919A10BBAE___C_METHOD_1_00EEAE1706DF4240_OFFSET UNITYSDK_OFFSET(0x12EA30B0)
#define CLASS_4_0E86AA919A10BBAE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12EA3060)
#define CLASS_4_0E86AA919A10BBAE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12EA30A0)

inline static constexpr unsigned int Class_4_0E86AA919A10BBAE___c_TypeDefinitionIndex = 57664;

class Class_4_0E86AA919A10BBAE___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_9465CC52E1CFB15A*>** StaticGet___9__5_0()
	{
		return (::System::Action_1<::Class_1_9465CC52E1CFB15A*>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_0E86AA919A10BBAE___c_TypeDefinitionIndex)->GetStaticField(0x49390);
	}
	static ::Class_4_0E86AA919A10BBAE___c** StaticGet___9()
	{
		return (::Class_4_0E86AA919A10BBAE___c**)Il2CppClass::FromTypeDefinitionIndex(Class_4_0E86AA919A10BBAE___c_TypeDefinitionIndex)->GetStaticField(0x49398);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_0E86AA919A10BBAE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0E86AA919A10BBAE___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_00EEAE1706DF4240(::Class_1_9465CC52E1CFB15A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9465CC52E1CFB15A*))((::PBYTE)hIl2Cpp + CLASS_4_0E86AA919A10BBAE___C_METHOD_1_00EEAE1706DF4240_OFFSET))(this, a1);
	}
};
