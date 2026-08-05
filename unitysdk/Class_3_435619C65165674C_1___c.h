#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }

#define CLASS_3_435619C65165674C_1___C_METHOD_1_73CF246C3E202395_OFFSET UNITYSDK_OFFSET(0x14EE8820)
#define CLASS_3_435619C65165674C_1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14EE87D0)
#define CLASS_3_435619C65165674C_1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14EE8810)

inline static constexpr unsigned int Class_3_435619C65165674C_1___c_TypeDefinitionIndex = 64219;

class Class_3_435619C65165674C_1___c : public ::System::Object
{
public:
	static ::Class_3_435619C65165674C_1___c** StaticGet___9()
	{
		return (::Class_3_435619C65165674C_1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_435619C65165674C_1___c_TypeDefinitionIndex)->GetStaticField(0x41D60);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_435619C65165674C_1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_435619C65165674C_1___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_73CF246C3E202395(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_435619C65165674C_1___C_METHOD_1_73CF246C3E202395_OFFSET))(this, a1);
	}
};
