#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_28F0414D4F296993;
class Class_1_9465CC52E1CFB15A;
class Class_1_B7E341C5F1A6F199;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define CLASS_4_61219FA9FF32C72E_1___C_METHOD_1_0C679A091108BBB0_OFFSET UNITYSDK_OFFSET(0x12943AE0)
#define CLASS_4_61219FA9FF32C72E_1___C_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x12943A40)
#define CLASS_4_61219FA9FF32C72E_1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x129439F0)
#define CLASS_4_61219FA9FF32C72E_1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12943A30)

inline static constexpr unsigned int Class_4_61219FA9FF32C72E_1___c_TypeDefinitionIndex = 76196;

class Class_4_61219FA9FF32C72E_1___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_9465CC52E1CFB15A*>** StaticGet___9__1_0()
	{
		return (::System::Action_1<::Class_1_9465CC52E1CFB15A*>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_61219FA9FF32C72E_1___c_TypeDefinitionIndex)->GetStaticField(0x4CC00);
	}
	static ::System::Action_2<::Class_1_28F0414D4F296993*, ::Class_1_B7E341C5F1A6F199*>** StaticGet___9__3_0()
	{
		return (::System::Action_2<::Class_1_28F0414D4F296993*, ::Class_1_B7E341C5F1A6F199*>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_61219FA9FF32C72E_1___c_TypeDefinitionIndex)->GetStaticField(0x4CC08);
	}
	static ::Class_4_61219FA9FF32C72E_1___c** StaticGet___9()
	{
		return (::Class_4_61219FA9FF32C72E_1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_4_61219FA9FF32C72E_1___c_TypeDefinitionIndex)->GetStaticField(0x4CC10);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_61219FA9FF32C72E_1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_61219FA9FF32C72E_1___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0C7CBCE710B3F112(::Class_1_9465CC52E1CFB15A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9465CC52E1CFB15A*))((::PBYTE)hIl2Cpp + CLASS_4_61219FA9FF32C72E_1___C_METHOD_1_0C7CBCE710B3F112_OFFSET))(this, a1);
	}

	::System::Void Method_1_0C679A091108BBB0(::Class_1_28F0414D4F296993* a1, ::Class_1_B7E341C5F1A6F199* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_28F0414D4F296993*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_4_61219FA9FF32C72E_1___C_METHOD_1_0C679A091108BBB0_OFFSET))(this, a1, a2);
	}
};
