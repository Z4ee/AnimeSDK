#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_2_18370767F8CEF4AE___C_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x19F4BCF0)
#define CLASS_2_18370767F8CEF4AE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19F4BCA0)
#define CLASS_2_18370767F8CEF4AE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19F4BCE0)

inline static constexpr unsigned int Class_2_18370767F8CEF4AE___c_TypeDefinitionIndex = 42175;

class Class_2_18370767F8CEF4AE___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__2_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_2_18370767F8CEF4AE___c_TypeDefinitionIndex)->GetStaticField(0x38960);
	}
	static ::Class_2_18370767F8CEF4AE___c** StaticGet___9()
	{
		return (::Class_2_18370767F8CEF4AE___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_18370767F8CEF4AE___c_TypeDefinitionIndex)->GetStaticField(0x38968);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_18370767F8CEF4AE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_18370767F8CEF4AE___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_18370767F8CEF4AE___C_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}
};
