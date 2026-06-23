#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_2_95CB90DD4049A977___C_METHOD_1_0D7638DBC93E5002_OFFSET UNITYSDK_OFFSET(0x125B4800)
#define CLASS_2_95CB90DD4049A977___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x125B47B0)
#define CLASS_2_95CB90DD4049A977___C__CTOR_OFFSET UNITYSDK_OFFSET(0x125B47F0)

inline static constexpr unsigned int Class_2_95CB90DD4049A977___c_TypeDefinitionIndex = 86598;

class Class_2_95CB90DD4049A977___c : public ::System::Object
{
public:
	static ::Class_2_95CB90DD4049A977___c** StaticGet___9()
	{
		return (::Class_2_95CB90DD4049A977___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_95CB90DD4049A977___c_TypeDefinitionIndex)->GetStaticField(0x331C0);
	}
	static ::System::Action** StaticGet___9__11_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_2_95CB90DD4049A977___c_TypeDefinitionIndex)->GetStaticField(0x331C8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_95CB90DD4049A977___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_95CB90DD4049A977___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0D7638DBC93E5002()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_95CB90DD4049A977___C_METHOD_1_0D7638DBC93E5002_OFFSET))(this);
	}
};
