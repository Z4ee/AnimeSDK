#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_BB20F8FCAFB0DAC7___C_METHOD_1_7FA76793F3BD81CC_OFFSET UNITYSDK_OFFSET(0x19E2F170)
#define CLASS_2_BB20F8FCAFB0DAC7___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19E2F120)
#define CLASS_2_BB20F8FCAFB0DAC7___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19E2F160)

inline static constexpr unsigned int Class_2_BB20F8FCAFB0DAC7___c_TypeDefinitionIndex = 74099;

class Class_2_BB20F8FCAFB0DAC7___c : public ::System::Object
{
public:
	static ::Class_2_BB20F8FCAFB0DAC7___c** StaticGet___9()
	{
		return (::Class_2_BB20F8FCAFB0DAC7___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_BB20F8FCAFB0DAC7___c_TypeDefinitionIndex)->GetStaticField(0x31EF0);
	}
	static ::System::Comparison_1<::MoleMole::Battle::Entity*>** StaticGet___9__75_0()
	{
		return (::System::Comparison_1<::MoleMole::Battle::Entity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_BB20F8FCAFB0DAC7___c_TypeDefinitionIndex)->GetStaticField(0x31EF8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_BB20F8FCAFB0DAC7___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BB20F8FCAFB0DAC7___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_7FA76793F3BD81CC(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_BB20F8FCAFB0DAC7___C_METHOD_1_7FA76793F3BD81CC_OFFSET))(this, a1, a2);
	}
};
