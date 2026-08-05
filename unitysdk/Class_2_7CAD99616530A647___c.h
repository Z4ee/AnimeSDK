#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FD31E4216DD30F97;
namespace System { template <typename T> class Predicate_1; }

#define CLASS_2_7CAD99616530A647___C_METHOD_1_908180B8F1022CC2_OFFSET UNITYSDK_OFFSET(0x1236DC10)
#define CLASS_2_7CAD99616530A647___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1236DBC0)
#define CLASS_2_7CAD99616530A647___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1236DC00)

inline static constexpr unsigned int Class_2_7CAD99616530A647___c_TypeDefinitionIndex = 47363;

class Class_2_7CAD99616530A647___c : public ::System::Object
{
public:
	static ::System::Predicate_1<::Class_1_FD31E4216DD30F97*>** StaticGet___9__5_1()
	{
		return (::System::Predicate_1<::Class_1_FD31E4216DD30F97*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_7CAD99616530A647___c_TypeDefinitionIndex)->GetStaticField(0x3DEE0);
	}
	static ::Class_2_7CAD99616530A647___c** StaticGet___9()
	{
		return (::Class_2_7CAD99616530A647___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_7CAD99616530A647___c_TypeDefinitionIndex)->GetStaticField(0x3DEE8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_7CAD99616530A647___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CAD99616530A647___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_908180B8F1022CC2(::Class_1_FD31E4216DD30F97* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FD31E4216DD30F97*))((::PBYTE)hIl2Cpp + CLASS_2_7CAD99616530A647___C_METHOD_1_908180B8F1022CC2_OFFSET))(this, a1);
	}
};
