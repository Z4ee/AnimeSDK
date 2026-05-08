#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_17084610E266B2F1;
class Class_3_46E613428B30FCCD;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_D741FAB818ED0EC3___C_METHOD_1_925B6EF9634A264B_OFFSET UNITYSDK_OFFSET(0x110E4C90)
#define CLASS_3_D741FAB818ED0EC3___C_METHOD_1_CA252EB53D5BC15A_OFFSET UNITYSDK_OFFSET(0x110E4CA0)
#define CLASS_3_D741FAB818ED0EC3___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x110E4C40)
#define CLASS_3_D741FAB818ED0EC3___C__CTOR_OFFSET UNITYSDK_OFFSET(0x110E4C80)

inline static constexpr unsigned int Class_3_D741FAB818ED0EC3___c_TypeDefinitionIndex = 40149;

class Class_3_D741FAB818ED0EC3___c : public ::System::Object
{
public:
	static ::Class_3_D741FAB818ED0EC3___c** StaticGet___9()
	{
		return (::Class_3_D741FAB818ED0EC3___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_D741FAB818ED0EC3___c_TypeDefinitionIndex)->GetStaticField(0x3BB80);
	}
	static ::System::Action_1<::Class_3_46E613428B30FCCD*>** StaticGet___9__43_0()
	{
		return (::System::Action_1<::Class_3_46E613428B30FCCD*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_D741FAB818ED0EC3___c_TypeDefinitionIndex)->GetStaticField(0x3BB88);
	}
	static ::System::Action_1<::Class_1_17084610E266B2F1*>** StaticGet___9__53_0()
	{
		return (::System::Action_1<::Class_1_17084610E266B2F1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_D741FAB818ED0EC3___c_TypeDefinitionIndex)->GetStaticField(0x3BB90);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_925B6EF9634A264B(::Class_1_17084610E266B2F1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_17084610E266B2F1*))((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3___C_METHOD_1_925B6EF9634A264B_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA252EB53D5BC15A(::Class_3_46E613428B30FCCD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_46E613428B30FCCD*))((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3___C_METHOD_1_CA252EB53D5BC15A_OFFSET))(this, a1);
	}
};
