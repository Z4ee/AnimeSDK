#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E3D6F8A293A67E6A.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_2_3CA29E439968070B___C_METHOD_1_1C84932E14E85809_OFFSET UNITYSDK_OFFSET(0x1423FC80)
#define CLASS_2_3CA29E439968070B___C_METHOD_1_970B895AF1841F3E_OFFSET UNITYSDK_OFFSET(0x1423FC90)
#define CLASS_2_3CA29E439968070B___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1423FC30)
#define CLASS_2_3CA29E439968070B___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1423FC70)

inline static constexpr unsigned int Class_2_3CA29E439968070B___c_TypeDefinitionIndex = 71190;

class Class_2_3CA29E439968070B___c : public ::System::Object
{
public:
	static ::System::Action_2<::System::Int32, ::System::Int32>** StaticGet___9__0_1()
	{
		return (::System::Action_2<::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_3CA29E439968070B___c_TypeDefinitionIndex)->GetStaticField(0x42750);
	}
	static ::Class_2_3CA29E439968070B___c** StaticGet___9()
	{
		return (::Class_2_3CA29E439968070B___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_3CA29E439968070B___c_TypeDefinitionIndex)->GetStaticField(0x42758);
	}
	static ::System::Action_2<::Enum_3_E3D6F8A293A67E6A, ::Enum_3_E3D6F8A293A67E6A>** StaticGet___9__0_0()
	{
		return (::System::Action_2<::Enum_3_E3D6F8A293A67E6A, ::Enum_3_E3D6F8A293A67E6A>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_3CA29E439968070B___c_TypeDefinitionIndex)->GetStaticField(0x42760);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_3CA29E439968070B___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CA29E439968070B___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1C84932E14E85809(::Enum_3_E3D6F8A293A67E6A a1, ::Enum_3_E3D6F8A293A67E6A a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E3D6F8A293A67E6A, ::Enum_3_E3D6F8A293A67E6A))((::PBYTE)hIl2Cpp + CLASS_2_3CA29E439968070B___C_METHOD_1_1C84932E14E85809_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_970B895AF1841F3E(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_3CA29E439968070B___C_METHOD_1_970B895AF1841F3E_OFFSET))(this, a1, a2);
	}
};
