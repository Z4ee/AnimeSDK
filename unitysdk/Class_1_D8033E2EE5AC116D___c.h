#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_D8033E2EE5AC116D___C_METHOD_1_67D41ACFEF39E84E_OFFSET UNITYSDK_OFFSET(0x156031E0)
#define CLASS_1_D8033E2EE5AC116D___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15603190)
#define CLASS_1_D8033E2EE5AC116D___C__CTOR_OFFSET UNITYSDK_OFFSET(0x156031D0)

inline static constexpr unsigned int Class_1_D8033E2EE5AC116D___c_TypeDefinitionIndex = 65774;

class Class_1_D8033E2EE5AC116D___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__16_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D8033E2EE5AC116D___c_TypeDefinitionIndex)->GetStaticField(0x4BBA0);
	}
	static ::Class_1_D8033E2EE5AC116D___c** StaticGet___9()
	{
		return (::Class_1_D8033E2EE5AC116D___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D8033E2EE5AC116D___c_TypeDefinitionIndex)->GetStaticField(0x4BBA8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D8033E2EE5AC116D___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8033E2EE5AC116D___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_67D41ACFEF39E84E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8033E2EE5AC116D___C_METHOD_1_67D41ACFEF39E84E_OFFSET))(this);
	}
};
