#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3BC6FFBFA6077E08;
class Class_1_9465CC52E1CFB15A;
class Class_1_B7E341C5F1A6F199;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define CLASS_4_61219FA9FF32C72E___C_METHOD_1_0C679A091108BBB0_OFFSET UNITYSDK_OFFSET(0x12464A40)
#define CLASS_4_61219FA9FF32C72E___C_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x124649A0)
#define CLASS_4_61219FA9FF32C72E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12464950)
#define CLASS_4_61219FA9FF32C72E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12464990)

inline static constexpr unsigned int Class_4_61219FA9FF32C72E___c_TypeDefinitionIndex = 42872;

class Class_4_61219FA9FF32C72E___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_9465CC52E1CFB15A*>** StaticGet___9__1_0()
	{
		return (::System::Action_1<::Class_1_9465CC52E1CFB15A*>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_61219FA9FF32C72E___c_TypeDefinitionIndex)->GetStaticField(0x3E080);
	}
	static ::Class_4_61219FA9FF32C72E___c** StaticGet___9()
	{
		return (::Class_4_61219FA9FF32C72E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_4_61219FA9FF32C72E___c_TypeDefinitionIndex)->GetStaticField(0x3E088);
	}
	static ::System::Action_2<::Class_1_3BC6FFBFA6077E08*, ::Class_1_B7E341C5F1A6F199*>** StaticGet___9__3_0()
	{
		return (::System::Action_2<::Class_1_3BC6FFBFA6077E08*, ::Class_1_B7E341C5F1A6F199*>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_61219FA9FF32C72E___c_TypeDefinitionIndex)->GetStaticField(0x3E090);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_61219FA9FF32C72E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_61219FA9FF32C72E___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0C7CBCE710B3F112(::Class_1_9465CC52E1CFB15A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9465CC52E1CFB15A*))((::PBYTE)hIl2Cpp + CLASS_4_61219FA9FF32C72E___C_METHOD_1_0C7CBCE710B3F112_OFFSET))(this, a1);
	}

	::System::Void Method_1_0C679A091108BBB0(::Class_1_3BC6FFBFA6077E08* a1, ::Class_1_B7E341C5F1A6F199* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3BC6FFBFA6077E08*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_4_61219FA9FF32C72E___C_METHOD_1_0C679A091108BBB0_OFFSET))(this, a1, a2);
	}
};
