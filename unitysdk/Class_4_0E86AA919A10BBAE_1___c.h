#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9465CC52E1CFB15A;
namespace System { template <typename T> class Action_1; }

#define CLASS_4_0E86AA919A10BBAE_1___C_METHOD_1_00EEAE1706DF4240_OFFSET UNITYSDK_OFFSET(0x1669EB50)
#define CLASS_4_0E86AA919A10BBAE_1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1669EB00)
#define CLASS_4_0E86AA919A10BBAE_1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1669EB40)

inline static constexpr unsigned int Class_4_0E86AA919A10BBAE_1___c_TypeDefinitionIndex = 54089;

class Class_4_0E86AA919A10BBAE_1___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_9465CC52E1CFB15A*>** StaticGet___9__5_0()
	{
		return (::System::Action_1<::Class_1_9465CC52E1CFB15A*>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_0E86AA919A10BBAE_1___c_TypeDefinitionIndex)->GetStaticField(0x391A0);
	}
	static ::Class_4_0E86AA919A10BBAE_1___c** StaticGet___9()
	{
		return (::Class_4_0E86AA919A10BBAE_1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_4_0E86AA919A10BBAE_1___c_TypeDefinitionIndex)->GetStaticField(0x391A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_0E86AA919A10BBAE_1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0E86AA919A10BBAE_1___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_00EEAE1706DF4240(::Class_1_9465CC52E1CFB15A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9465CC52E1CFB15A*))((::PBYTE)hIl2Cpp + CLASS_4_0E86AA919A10BBAE_1___C_METHOD_1_00EEAE1706DF4240_OFFSET))(this, a1);
	}
};
