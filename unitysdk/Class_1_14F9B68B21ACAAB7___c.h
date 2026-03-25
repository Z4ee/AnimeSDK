#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7686EC5B8E7BB729;
namespace System { template <typename T> class Predicate_1; }

#define CLASS_1_14F9B68B21ACAAB7___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16735F10)
#define CLASS_1_14F9B68B21ACAAB7___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16735F50)
#define CLASS_1_14F9B68B21ACAAB7___C__REMOVEENDBUFFS_B__8_0_OFFSET UNITYSDK_OFFSET(0x16735F60)

inline static constexpr unsigned int Class_1_14F9B68B21ACAAB7___c_TypeDefinitionIndex = 28941;

class Class_1_14F9B68B21ACAAB7___c : public ::System::Object
{
public:
	static ::Class_1_14F9B68B21ACAAB7___c** StaticGet___9()
	{
		return (::Class_1_14F9B68B21ACAAB7___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_14F9B68B21ACAAB7___c_TypeDefinitionIndex)->GetStaticField(0x2FC60);
	}
	static ::System::Predicate_1<::Class_1_7686EC5B8E7BB729*>** StaticGet___9__8_0()
	{
		return (::System::Predicate_1<::Class_1_7686EC5B8E7BB729*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_14F9B68B21ACAAB7___c_TypeDefinitionIndex)->GetStaticField(0x2FC68);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_14F9B68B21ACAAB7___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14F9B68B21ACAAB7___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _RemoveEndBuffs_b__8_0(::Class_1_7686EC5B8E7BB729* buff)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_7686EC5B8E7BB729*))((::PBYTE)hIl2Cpp + CLASS_1_14F9B68B21ACAAB7___C__REMOVEENDBUFFS_B__8_0_OFFSET))(this, buff);
	}
};
