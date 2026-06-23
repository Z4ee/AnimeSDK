#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_B51557505C9FDEC9;
namespace System { template <typename T> class Predicate_1; }

#define CLASS_1_A542B66A3445BD88___C_METHOD_1_B237E7A09EA29A83_OFFSET UNITYSDK_OFFSET(0x1855FD70)
#define CLASS_1_A542B66A3445BD88___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1855FD20)
#define CLASS_1_A542B66A3445BD88___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1855FD60)

inline static constexpr unsigned int Class_1_A542B66A3445BD88___c_TypeDefinitionIndex = 15283;

class Class_1_A542B66A3445BD88___c : public ::System::Object
{
public:
	static ::System::Predicate_1<::Class_2_B51557505C9FDEC9*>** StaticGet___9__21_0()
	{
		return (::System::Predicate_1<::Class_2_B51557505C9FDEC9*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A542B66A3445BD88___c_TypeDefinitionIndex)->GetStaticField(0x7660);
	}
	static ::Class_1_A542B66A3445BD88___c** StaticGet___9()
	{
		return (::Class_1_A542B66A3445BD88___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A542B66A3445BD88___c_TypeDefinitionIndex)->GetStaticField(0x7668);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A542B66A3445BD88___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A542B66A3445BD88___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_B237E7A09EA29A83(::Class_2_B51557505C9FDEC9* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_B51557505C9FDEC9*))((::PBYTE)hIl2Cpp + CLASS_1_A542B66A3445BD88___C_METHOD_1_B237E7A09EA29A83_OFFSET))(this, a1);
	}
};
