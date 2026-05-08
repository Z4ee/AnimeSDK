#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_2_177080BB7145C253___C_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x144284C0)
#define CLASS_2_177080BB7145C253___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14428470)
#define CLASS_2_177080BB7145C253___C__CTOR_OFFSET UNITYSDK_OFFSET(0x144284B0)

inline static constexpr unsigned int Class_2_177080BB7145C253___c_TypeDefinitionIndex = 39605;

class Class_2_177080BB7145C253___c : public ::System::Object
{
public:
	static ::Class_2_177080BB7145C253___c** StaticGet___9()
	{
		return (::Class_2_177080BB7145C253___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_177080BB7145C253___c_TypeDefinitionIndex)->GetStaticField(0x44280);
	}
	static ::System::Action** StaticGet___9__2_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_2_177080BB7145C253___c_TypeDefinitionIndex)->GetStaticField(0x44288);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_177080BB7145C253___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_177080BB7145C253___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_177080BB7145C253___C_METHOD_1_832295EC279E5994_OFFSET))(this);
	}
};
