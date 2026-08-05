#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9C2ABEAE14C6A912;
namespace System { template <typename T> class Predicate_1; }

#define CLASS_1_3B44852A306CB584___C_METHOD_1_03C39BB8E09A79D2_OFFSET UNITYSDK_OFFSET(0xF7BAF10)
#define CLASS_1_3B44852A306CB584___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xF7BAEC0)
#define CLASS_1_3B44852A306CB584___C__CTOR_OFFSET UNITYSDK_OFFSET(0xF7BAF00)

inline static constexpr unsigned int Class_1_3B44852A306CB584___c_TypeDefinitionIndex = 43249;

class Class_1_3B44852A306CB584___c : public ::System::Object
{
public:
	static ::Class_1_3B44852A306CB584___c** StaticGet___9()
	{
		return (::Class_1_3B44852A306CB584___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3B44852A306CB584___c_TypeDefinitionIndex)->GetStaticField(0x30EF0);
	}
	static ::System::Predicate_1<::Class_1_9C2ABEAE14C6A912*>** StaticGet___9__18_0()
	{
		return (::System::Predicate_1<::Class_1_9C2ABEAE14C6A912*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3B44852A306CB584___c_TypeDefinitionIndex)->GetStaticField(0x30EF8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3B44852A306CB584___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B44852A306CB584___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_03C39BB8E09A79D2(::Class_1_9C2ABEAE14C6A912* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_9C2ABEAE14C6A912*))((::PBYTE)hIl2Cpp + CLASS_1_3B44852A306CB584___C_METHOD_1_03C39BB8E09A79D2_OFFSET))(this, a1);
	}
};
