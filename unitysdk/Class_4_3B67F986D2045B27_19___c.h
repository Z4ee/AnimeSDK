#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_4_3B67F986D2045B27_19___C_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0xE535B30)
#define CLASS_4_3B67F986D2045B27_19___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE535AE0)
#define CLASS_4_3B67F986D2045B27_19___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE535B20)

inline static constexpr unsigned int Class_4_3B67F986D2045B27_19___c_TypeDefinitionIndex = 67443;

class Class_4_3B67F986D2045B27_19___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__1_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_4_3B67F986D2045B27_19___c_TypeDefinitionIndex)->GetStaticField(0x37310);
	}
	static ::Class_4_3B67F986D2045B27_19___c** StaticGet___9()
	{
		return (::Class_4_3B67F986D2045B27_19___c**)Il2CppClass::FromTypeDefinitionIndex(Class_4_3B67F986D2045B27_19___c_TypeDefinitionIndex)->GetStaticField(0x37318);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_3B67F986D2045B27_19___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3B67F986D2045B27_19___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3B67F986D2045B27_19___C_METHOD_1_832295EC279E5994_OFFSET))(this);
	}
};
