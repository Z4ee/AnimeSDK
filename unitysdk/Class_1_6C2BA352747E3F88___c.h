#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9C2ABEAE14C6A912;
namespace System { template <typename T> class Predicate_1; }

#define CLASS_1_6C2BA352747E3F88___C_METHOD_1_03C39BB8E09A79D2_OFFSET UNITYSDK_OFFSET(0x131C5A30)
#define CLASS_1_6C2BA352747E3F88___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x131C59E0)
#define CLASS_1_6C2BA352747E3F88___C__CTOR_OFFSET UNITYSDK_OFFSET(0x131C5A20)

inline static constexpr unsigned int Class_1_6C2BA352747E3F88___c_TypeDefinitionIndex = 74377;

class Class_1_6C2BA352747E3F88___c : public ::System::Object
{
public:
	static ::Class_1_6C2BA352747E3F88___c** StaticGet___9()
	{
		return (::Class_1_6C2BA352747E3F88___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6C2BA352747E3F88___c_TypeDefinitionIndex)->GetStaticField(0x3FA60);
	}
	static ::System::Predicate_1<::Class_1_9C2ABEAE14C6A912*>** StaticGet___9__18_0()
	{
		return (::System::Predicate_1<::Class_1_9C2ABEAE14C6A912*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6C2BA352747E3F88___c_TypeDefinitionIndex)->GetStaticField(0x3FA68);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6C2BA352747E3F88___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6C2BA352747E3F88___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_03C39BB8E09A79D2(::Class_1_9C2ABEAE14C6A912* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_9C2ABEAE14C6A912*))((::PBYTE)hIl2Cpp + CLASS_1_6C2BA352747E3F88___C_METHOD_1_03C39BB8E09A79D2_OFFSET))(this, a1);
	}
};
