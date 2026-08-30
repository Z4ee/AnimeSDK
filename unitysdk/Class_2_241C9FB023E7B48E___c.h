#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_2_241C9FB023E7B48E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x153F87E0)
#define CLASS_2_241C9FB023E7B48E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x153F8820)
#define CLASS_2_241C9FB023E7B48E___C___SHOWFADEINEFFECTS_B__2_0_OFFSET UNITYSDK_OFFSET(0x153F8830)

inline static constexpr unsigned int Class_2_241C9FB023E7B48E___c_TypeDefinitionIndex = 58373;

class Class_2_241C9FB023E7B48E___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__2_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_2_241C9FB023E7B48E___c_TypeDefinitionIndex)->GetStaticField(0x529D0);
	}
	static ::Class_2_241C9FB023E7B48E___c** StaticGet___9()
	{
		return (::Class_2_241C9FB023E7B48E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_241C9FB023E7B48E___c_TypeDefinitionIndex)->GetStaticField(0x529D8);
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
