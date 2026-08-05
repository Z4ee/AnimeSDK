#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_28F0414D4F296993;
class Class_1_9465CC52E1CFB15A;
class Class_1_B7E341C5F1A6F199;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define CLASS_4_0E86AA919A10BBAE___C_METHOD_1_1DB5F16875027F17_OFFSET UNITYSDK_OFFSET(0x1584E2B0)
#define CLASS_4_0E86AA919A10BBAE___C_METHOD_1_E9D938B6A30770AD_OFFSET UNITYSDK_OFFSET(0x1584E250)
#define CLASS_4_0E86AA919A10BBAE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1584E200)
#define CLASS_4_0E86AA919A10BBAE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1584E240)

inline static constexpr unsigned int Class_4_0E86AA919A10BBAE___c_TypeDefinitionIndex = 53650;

class Class_4_0E86AA919A10BBAE___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_9465CC52E1CFB15A*>** StaticGet___9__3_0()
	{
		return (::System::Action_1<::Class_1_9465CC52E1CFB15A*>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_0E86AA919A10BBAE___c_TypeDefinitionIndex)->GetStaticField(0x31BF0);
	}
	static ::Class_4_0E86AA919A10BBAE___c** StaticGet___9()
	{
		return (::Class_4_0E86AA919A10BBAE___c**)Il2CppClass::FromTypeDefinitionIndex(Class_4_0E86AA919A10BBAE___c_TypeDefinitionIndex)->GetStaticField(0x31BF8);
	}
	static ::System::Action_2<::Class_1_28F0414D4F296993*, ::Class_1_B7E341C5F1A6F199*>** StaticGet___9__5_0()
	{
		return (::System::Action_2<::Class_1_28F0414D4F296993*, ::Class_1_B7E341C5F1A6F199*>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_0E86AA919A10BBAE___c_TypeDefinitionIndex)->GetStaticField(0x31C00);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_0E86AA919A10BBAE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0E86AA919A10BBAE___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E9D938B6A30770AD(::Class_1_9465CC52E1CFB15A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9465CC52E1CFB15A*))((::PBYTE)hIl2Cpp + CLASS_4_0E86AA919A10BBAE___C_METHOD_1_E9D938B6A30770AD_OFFSET))(this, a1);
	}

	::System::Void Method_1_1DB5F16875027F17(::Class_1_28F0414D4F296993* a1, ::Class_1_B7E341C5F1A6F199* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_28F0414D4F296993*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_4_0E86AA919A10BBAE___C_METHOD_1_1DB5F16875027F17_OFFSET))(this, a1, a2);
	}
};
