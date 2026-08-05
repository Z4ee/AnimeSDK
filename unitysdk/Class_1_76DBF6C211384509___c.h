#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_76DBF6C211384509___C_METHOD_1_0A08BEB5A6FF1267_OFFSET UNITYSDK_OFFSET(0x1253AFA0)
#define CLASS_1_76DBF6C211384509___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1253AF50)
#define CLASS_1_76DBF6C211384509___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1253AF90)

inline static constexpr unsigned int Class_1_76DBF6C211384509___c_TypeDefinitionIndex = 72135;

class Class_1_76DBF6C211384509___c : public ::System::Object
{
public:
	static ::Class_1_76DBF6C211384509___c** StaticGet___9()
	{
		return (::Class_1_76DBF6C211384509___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_76DBF6C211384509___c_TypeDefinitionIndex)->GetStaticField(0x45F60);
	}
	static ::System::Action** StaticGet___9__58_2()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_76DBF6C211384509___c_TypeDefinitionIndex)->GetStaticField(0x45F68);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0A08BEB5A6FF1267()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509___C_METHOD_1_0A08BEB5A6FF1267_OFFSET))(this);
	}
};
