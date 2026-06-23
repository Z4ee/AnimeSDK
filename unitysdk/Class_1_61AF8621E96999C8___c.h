#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_61AF8621E96999C8;
namespace System { template <typename T> class Predicate_1; }

#define CLASS_1_61AF8621E96999C8___C_METHOD_1_2B1EE579146AF826_OFFSET UNITYSDK_OFFSET(0x142E2A10)
#define CLASS_1_61AF8621E96999C8___C_METHOD_1_A974B4EB1BD1FF0F_OFFSET UNITYSDK_OFFSET(0x142E29F0)
#define CLASS_1_61AF8621E96999C8___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x142E29A0)
#define CLASS_1_61AF8621E96999C8___C__CTOR_OFFSET UNITYSDK_OFFSET(0x142E29E0)

inline static constexpr unsigned int Class_1_61AF8621E96999C8___c_TypeDefinitionIndex = 56506;

class Class_1_61AF8621E96999C8___c : public ::System::Object
{
public:
	static ::System::Predicate_1<::Class_1_61AF8621E96999C8*>** StaticGet___9__26_0()
	{
		return (::System::Predicate_1<::Class_1_61AF8621E96999C8*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_61AF8621E96999C8___c_TypeDefinitionIndex)->GetStaticField(0x423A0);
	}
	static ::System::Predicate_1<::Class_1_61AF8621E96999C8*>** StaticGet___9__26_1()
	{
		return (::System::Predicate_1<::Class_1_61AF8621E96999C8*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_61AF8621E96999C8___c_TypeDefinitionIndex)->GetStaticField(0x423A8);
	}
	static ::Class_1_61AF8621E96999C8___c** StaticGet___9()
	{
		return (::Class_1_61AF8621E96999C8___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_61AF8621E96999C8___c_TypeDefinitionIndex)->GetStaticField(0x423B0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_61AF8621E96999C8___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61AF8621E96999C8___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_A974B4EB1BD1FF0F(::Class_1_61AF8621E96999C8* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_61AF8621E96999C8*))((::PBYTE)hIl2Cpp + CLASS_1_61AF8621E96999C8___C_METHOD_1_A974B4EB1BD1FF0F_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_2B1EE579146AF826(::Class_1_61AF8621E96999C8* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_61AF8621E96999C8*))((::PBYTE)hIl2Cpp + CLASS_1_61AF8621E96999C8___C_METHOD_1_2B1EE579146AF826_OFFSET))(this, a1);
	}
};
