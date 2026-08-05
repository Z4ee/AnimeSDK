#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_50D15D9AA3585D47___C_METHOD_1_A61A196E6AD5766D_OFFSET UNITYSDK_OFFSET(0x155A2340)
#define CLASS_1_50D15D9AA3585D47___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x155A22F0)
#define CLASS_1_50D15D9AA3585D47___C__CTOR_OFFSET UNITYSDK_OFFSET(0x155A2330)

inline static constexpr unsigned int Class_1_50D15D9AA3585D47___c_TypeDefinitionIndex = 83852;

class Class_1_50D15D9AA3585D47___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__18_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_50D15D9AA3585D47___c_TypeDefinitionIndex)->GetStaticField(0x360A0);
	}
	static ::Class_1_50D15D9AA3585D47___c** StaticGet___9()
	{
		return (::Class_1_50D15D9AA3585D47___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_50D15D9AA3585D47___c_TypeDefinitionIndex)->GetStaticField(0x360A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_50D15D9AA3585D47___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_50D15D9AA3585D47___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A61A196E6AD5766D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_50D15D9AA3585D47___C_METHOD_1_A61A196E6AD5766D_OFFSET))(this);
	}
};
