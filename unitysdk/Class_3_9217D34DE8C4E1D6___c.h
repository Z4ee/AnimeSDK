#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_7472FB6CC4015359;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_9217D34DE8C4E1D6___C_METHOD_1_31AF8DB46331D41E_OFFSET UNITYSDK_OFFSET(0x13E18390)
#define CLASS_3_9217D34DE8C4E1D6___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13E18340)
#define CLASS_3_9217D34DE8C4E1D6___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13E18380)

inline static constexpr unsigned int Class_3_9217D34DE8C4E1D6___c_TypeDefinitionIndex = 77010;

class Class_3_9217D34DE8C4E1D6___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_3_7472FB6CC4015359*>** StaticGet___9__9_0()
	{
		return (::System::Action_1<::Class_3_7472FB6CC4015359*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_9217D34DE8C4E1D6___c_TypeDefinitionIndex)->GetStaticField(0x40540);
	}
	static ::Class_3_9217D34DE8C4E1D6___c** StaticGet___9()
	{
		return (::Class_3_9217D34DE8C4E1D6___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_9217D34DE8C4E1D6___c_TypeDefinitionIndex)->GetStaticField(0x40548);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_9217D34DE8C4E1D6___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9217D34DE8C4E1D6___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_31AF8DB46331D41E(::Class_3_7472FB6CC4015359* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_7472FB6CC4015359*))((::PBYTE)hIl2Cpp + CLASS_3_9217D34DE8C4E1D6___C_METHOD_1_31AF8DB46331D41E_OFFSET))(this, a1);
	}
};
