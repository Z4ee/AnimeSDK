#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_33E08A7560F039BD___C_METHOD_1_0B7E3489D2C0938B_OFFSET UNITYSDK_OFFSET(0x18121140)
#define CLASS_1_33E08A7560F039BD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x181210F0)
#define CLASS_1_33E08A7560F039BD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18121130)

inline static constexpr unsigned int Class_1_33E08A7560F039BD___c_TypeDefinitionIndex = 40729;

class Class_1_33E08A7560F039BD___c : public ::System::Object
{
public:
	static ::Class_1_33E08A7560F039BD___c** StaticGet___9()
	{
		return (::Class_1_33E08A7560F039BD___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_33E08A7560F039BD___c_TypeDefinitionIndex)->GetStaticField(0x3B660);
	}
	static ::System::Action** StaticGet___9__19_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_33E08A7560F039BD___c_TypeDefinitionIndex)->GetStaticField(0x3B668);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_33E08A7560F039BD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33E08A7560F039BD___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0B7E3489D2C0938B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33E08A7560F039BD___C_METHOD_1_0B7E3489D2C0938B_OFFSET))(this);
	}
};
