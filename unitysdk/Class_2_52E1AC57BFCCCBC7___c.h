#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_2_52E1AC57BFCCCBC7___C_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x12892120)
#define CLASS_2_52E1AC57BFCCCBC7___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x128920D0)
#define CLASS_2_52E1AC57BFCCCBC7___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12892110)

inline static constexpr unsigned int Class_2_52E1AC57BFCCCBC7___c_TypeDefinitionIndex = 63910;

class Class_2_52E1AC57BFCCCBC7___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__13_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_2_52E1AC57BFCCCBC7___c_TypeDefinitionIndex)->GetStaticField(0x2EF00);
	}
	static ::Class_2_52E1AC57BFCCCBC7___c** StaticGet___9()
	{
		return (::Class_2_52E1AC57BFCCCBC7___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_52E1AC57BFCCCBC7___c_TypeDefinitionIndex)->GetStaticField(0x2EF08);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_52E1AC57BFCCCBC7___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_52E1AC57BFCCCBC7___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_52E1AC57BFCCCBC7___C_METHOD_1_832295EC279E5994_OFFSET))(this);
	}
};
