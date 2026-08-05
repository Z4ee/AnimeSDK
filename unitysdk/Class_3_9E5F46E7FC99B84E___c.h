#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_32CD10484486A703;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_9E5F46E7FC99B84E___C_METHOD_1_FB9C52ACB0959B87_OFFSET UNITYSDK_OFFSET(0x12556EE0)
#define CLASS_3_9E5F46E7FC99B84E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12556E90)
#define CLASS_3_9E5F46E7FC99B84E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12556ED0)

inline static constexpr unsigned int Class_3_9E5F46E7FC99B84E___c_TypeDefinitionIndex = 57800;

class Class_3_9E5F46E7FC99B84E___c : public ::System::Object
{
public:
	static ::Class_3_9E5F46E7FC99B84E___c** StaticGet___9()
	{
		return (::Class_3_9E5F46E7FC99B84E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_9E5F46E7FC99B84E___c_TypeDefinitionIndex)->GetStaticField(0x3E560);
	}
	static ::System::Action_1<::Class_3_32CD10484486A703*>** StaticGet___9__5_0()
	{
		return (::System::Action_1<::Class_3_32CD10484486A703*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_9E5F46E7FC99B84E___c_TypeDefinitionIndex)->GetStaticField(0x3E568);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_9E5F46E7FC99B84E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9E5F46E7FC99B84E___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_FB9C52ACB0959B87(::Class_3_32CD10484486A703* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_32CD10484486A703*))((::PBYTE)hIl2Cpp + CLASS_3_9E5F46E7FC99B84E___C_METHOD_1_FB9C52ACB0959B87_OFFSET))(this, a1);
	}
};
