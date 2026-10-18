#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_2_241C9FB023E7B48E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x156AEFB0)
#define CLASS_2_241C9FB023E7B48E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x156AEFF0)
#define CLASS_2_241C9FB023E7B48E___C___SHOWFADEINEFFECTS_B__2_0_OFFSET UNITYSDK_OFFSET(0x156AF000)

inline static constexpr unsigned int Class_2_241C9FB023E7B48E___c_TypeDefinitionIndex = 58224;

class Class_2_241C9FB023E7B48E___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__2_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_2_241C9FB023E7B48E___c_TypeDefinitionIndex)->GetStaticField(0x5E980);
	}
	static ::Class_2_241C9FB023E7B48E___c** StaticGet___9()
	{
		return (::Class_2_241C9FB023E7B48E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_241C9FB023E7B48E___c_TypeDefinitionIndex)->GetStaticField(0x5E988);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_241C9FB023E7B48E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_241C9FB023E7B48E___C__CTOR_OFFSET))(this);
	}

	::System::Void __ShowFadeInEffects_b__2_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_241C9FB023E7B48E___C___SHOWFADEINEFFECTS_B__2_0_OFFSET))(this);
	}
};
