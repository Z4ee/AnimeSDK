#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_2_048ECC70281F0E52___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x162729E0)
#define CLASS_2_048ECC70281F0E52___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16272A20)
#define CLASS_2_048ECC70281F0E52___C___SHOWTUTORIALGUIDE_B__5_1_OFFSET UNITYSDK_OFFSET(0x16272A30)

inline static constexpr unsigned int Class_2_048ECC70281F0E52___c_TypeDefinitionIndex = 58850;

class Class_2_048ECC70281F0E52___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__5_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_2_048ECC70281F0E52___c_TypeDefinitionIndex)->GetStaticField(0x573B0);
	}
	static ::Class_2_048ECC70281F0E52___c** StaticGet___9()
	{
		return (::Class_2_048ECC70281F0E52___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_048ECC70281F0E52___c_TypeDefinitionIndex)->GetStaticField(0x573B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_048ECC70281F0E52___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_048ECC70281F0E52___C__CTOR_OFFSET))(this);
	}

	::System::Void __ShowTutorialGuide_b__5_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_048ECC70281F0E52___C___SHOWTUTORIALGUIDE_B__5_1_OFFSET))(this);
	}
};
