#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_75D7AC40895F6441___C_METHOD_1_659B881A8763C779_OFFSET UNITYSDK_OFFSET(0x17DCAE80)
#define CLASS_1_75D7AC40895F6441___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17DCAE30)
#define CLASS_1_75D7AC40895F6441___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17DCAE70)

inline static constexpr unsigned int Class_1_75D7AC40895F6441___c_TypeDefinitionIndex = 59815;

class Class_1_75D7AC40895F6441___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__18_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_75D7AC40895F6441___c_TypeDefinitionIndex)->GetStaticField(0x40520);
	}
	static ::Class_1_75D7AC40895F6441___c** StaticGet___9()
	{
		return (::Class_1_75D7AC40895F6441___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_75D7AC40895F6441___c_TypeDefinitionIndex)->GetStaticField(0x40528);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_75D7AC40895F6441___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75D7AC40895F6441___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_659B881A8763C779()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75D7AC40895F6441___C_METHOD_1_659B881A8763C779_OFFSET))(this);
	}
};
