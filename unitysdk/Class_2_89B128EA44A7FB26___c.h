#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_89B128EA44A7FB26___C_METHOD_1_7FA76793F3BD81CC_OFFSET UNITYSDK_OFFSET(0x1BB74990)
#define CLASS_2_89B128EA44A7FB26___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BB74940)
#define CLASS_2_89B128EA44A7FB26___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB74980)

inline static constexpr unsigned int Class_2_89B128EA44A7FB26___c_TypeDefinitionIndex = 41587;

class Class_2_89B128EA44A7FB26___c : public ::System::Object
{
public:
	static ::Class_2_89B128EA44A7FB26___c** StaticGet___9()
	{
		return (::Class_2_89B128EA44A7FB26___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_89B128EA44A7FB26___c_TypeDefinitionIndex)->GetStaticField(0x2D640);
	}
	static ::System::Comparison_1<::MoleMole::Battle::Entity*>** StaticGet___9__103_0()
	{
		return (::System::Comparison_1<::MoleMole::Battle::Entity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_89B128EA44A7FB26___c_TypeDefinitionIndex)->GetStaticField(0x2D648);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_89B128EA44A7FB26___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_89B128EA44A7FB26___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_7FA76793F3BD81CC(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_89B128EA44A7FB26___C_METHOD_1_7FA76793F3BD81CC_OFFSET))(this, a1, a2);
	}
};
