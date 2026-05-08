#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_6_0D34A235E83466FA___C_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x12C6F270)
#define CLASS_6_0D34A235E83466FA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12C6F220)
#define CLASS_6_0D34A235E83466FA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12C6F260)

inline static constexpr unsigned int Class_6_0D34A235E83466FA___c_TypeDefinitionIndex = 64486;

class Class_6_0D34A235E83466FA___c : public ::System::Object
{
public:
	static ::Class_6_0D34A235E83466FA___c** StaticGet___9()
	{
		return (::Class_6_0D34A235E83466FA___c**)Il2CppClass::FromTypeDefinitionIndex(Class_6_0D34A235E83466FA___c_TypeDefinitionIndex)->GetStaticField(0x46360);
	}
	static ::System::Action** StaticGet___9__30_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_6_0D34A235E83466FA___c_TypeDefinitionIndex)->GetStaticField(0x46368);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_6_0D34A235E83466FA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_6_0D34A235E83466FA___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_6_0D34A235E83466FA___C_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}
};
