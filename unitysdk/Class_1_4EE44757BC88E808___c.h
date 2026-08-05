#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_B51557505C9FDEC9;
namespace System { template <typename T> class Predicate_1; }

#define CLASS_1_4EE44757BC88E808___C_METHOD_1_B237E7A09EA29A83_OFFSET UNITYSDK_OFFSET(0x181A10D0)
#define CLASS_1_4EE44757BC88E808___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x181A1080)
#define CLASS_1_4EE44757BC88E808___C__CTOR_OFFSET UNITYSDK_OFFSET(0x181A10C0)

inline static constexpr unsigned int Class_1_4EE44757BC88E808___c_TypeDefinitionIndex = 13577;

class Class_1_4EE44757BC88E808___c : public ::System::Object
{
public:
	static ::Class_1_4EE44757BC88E808___c** StaticGet___9()
	{
		return (::Class_1_4EE44757BC88E808___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4EE44757BC88E808___c_TypeDefinitionIndex)->GetStaticField(0x79D0);
	}
	static ::System::Predicate_1<::Class_2_B51557505C9FDEC9*>** StaticGet___9__21_0()
	{
		return (::System::Predicate_1<::Class_2_B51557505C9FDEC9*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4EE44757BC88E808___c_TypeDefinitionIndex)->GetStaticField(0x79D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4EE44757BC88E808___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4EE44757BC88E808___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_B237E7A09EA29A83(::Class_2_B51557505C9FDEC9* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_B51557505C9FDEC9*))((::PBYTE)hIl2Cpp + CLASS_1_4EE44757BC88E808___C_METHOD_1_B237E7A09EA29A83_OFFSET))(this, a1);
	}
};
