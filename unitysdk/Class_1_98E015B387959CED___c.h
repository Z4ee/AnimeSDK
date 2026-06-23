#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_98E015B387959CED___C_METHOD_1_A61A196E6AD5766D_OFFSET UNITYSDK_OFFSET(0x11DC04B0)
#define CLASS_1_98E015B387959CED___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11DC0460)
#define CLASS_1_98E015B387959CED___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11DC04A0)

inline static constexpr unsigned int Class_1_98E015B387959CED___c_TypeDefinitionIndex = 78681;

class Class_1_98E015B387959CED___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__18_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_98E015B387959CED___c_TypeDefinitionIndex)->GetStaticField(0x36CD0);
	}
	static ::Class_1_98E015B387959CED___c** StaticGet___9()
	{
		return (::Class_1_98E015B387959CED___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_98E015B387959CED___c_TypeDefinitionIndex)->GetStaticField(0x36CD8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_98E015B387959CED___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98E015B387959CED___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A61A196E6AD5766D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98E015B387959CED___C_METHOD_1_A61A196E6AD5766D_OFFSET))(this);
	}
};
