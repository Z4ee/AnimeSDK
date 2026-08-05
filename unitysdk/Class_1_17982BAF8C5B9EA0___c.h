#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_1A4ED5CB1A221EF5;
namespace System { template <typename T> class Action_1; }

#define CLASS_1_17982BAF8C5B9EA0___C_METHOD_1_FD166F2DC7A64B9A_OFFSET UNITYSDK_OFFSET(0x185EB510)
#define CLASS_1_17982BAF8C5B9EA0___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x185EB4C0)
#define CLASS_1_17982BAF8C5B9EA0___C__CTOR_OFFSET UNITYSDK_OFFSET(0x185EB500)

inline static constexpr unsigned int Class_1_17982BAF8C5B9EA0___c_TypeDefinitionIndex = 45990;

class Class_1_17982BAF8C5B9EA0___c : public ::System::Object
{
public:
	static ::Class_1_17982BAF8C5B9EA0___c** StaticGet___9()
	{
		return (::Class_1_17982BAF8C5B9EA0___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_17982BAF8C5B9EA0___c_TypeDefinitionIndex)->GetStaticField(0x4F5E0);
	}
	static ::System::Action_1<::Class_3_1A4ED5CB1A221EF5*>** StaticGet___9__2_0()
	{
		return (::System::Action_1<::Class_3_1A4ED5CB1A221EF5*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_17982BAF8C5B9EA0___c_TypeDefinitionIndex)->GetStaticField(0x4F5E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_17982BAF8C5B9EA0___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17982BAF8C5B9EA0___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_FD166F2DC7A64B9A(::Class_3_1A4ED5CB1A221EF5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_1A4ED5CB1A221EF5*))((::PBYTE)hIl2Cpp + CLASS_1_17982BAF8C5B9EA0___C_METHOD_1_FD166F2DC7A64B9A_OFFSET))(this, a1);
	}
};
