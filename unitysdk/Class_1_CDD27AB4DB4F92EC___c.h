#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_B51557505C9FDEC9;
namespace System { template <typename T> class Predicate_1; }

#define CLASS_1_CDD27AB4DB4F92EC___C_METHOD_1_B237E7A09EA29A83_OFFSET UNITYSDK_OFFSET(0x145D3600)
#define CLASS_1_CDD27AB4DB4F92EC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x145D35B0)
#define CLASS_1_CDD27AB4DB4F92EC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x145D35F0)

inline static constexpr unsigned int Class_1_CDD27AB4DB4F92EC___c_TypeDefinitionIndex = 12068;

class Class_1_CDD27AB4DB4F92EC___c : public ::System::Object
{
public:
	static ::System::Predicate_1<::Class_2_B51557505C9FDEC9*>** StaticGet___9__21_0()
	{
		return (::System::Predicate_1<::Class_2_B51557505C9FDEC9*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CDD27AB4DB4F92EC___c_TypeDefinitionIndex)->GetStaticField(0x8D10);
	}
	static ::Class_1_CDD27AB4DB4F92EC___c** StaticGet___9()
	{
		return (::Class_1_CDD27AB4DB4F92EC___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CDD27AB4DB4F92EC___c_TypeDefinitionIndex)->GetStaticField(0x8D18);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CDD27AB4DB4F92EC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDD27AB4DB4F92EC___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_B237E7A09EA29A83(::Class_2_B51557505C9FDEC9* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_B51557505C9FDEC9*))((::PBYTE)hIl2Cpp + CLASS_1_CDD27AB4DB4F92EC___C_METHOD_1_B237E7A09EA29A83_OFFSET))(this, a1);
	}
};
