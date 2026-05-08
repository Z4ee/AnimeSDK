#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }

#define CLASS_2_4548F324FCF7744C_2___C_METHOD_1_73CF246C3E202395_OFFSET UNITYSDK_OFFSET(0x11E96790)
#define CLASS_2_4548F324FCF7744C_2___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11E96740)
#define CLASS_2_4548F324FCF7744C_2___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11E96780)

inline static constexpr unsigned int Class_2_4548F324FCF7744C_2___c_TypeDefinitionIndex = 58362;

class Class_2_4548F324FCF7744C_2___c : public ::System::Object
{
public:
	static ::Class_2_4548F324FCF7744C_2___c** StaticGet___9()
	{
		return (::Class_2_4548F324FCF7744C_2___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_4548F324FCF7744C_2___c_TypeDefinitionIndex)->GetStaticField(0x2AA10);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_4548F324FCF7744C_2___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4548F324FCF7744C_2___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_73CF246C3E202395(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_4548F324FCF7744C_2___C_METHOD_1_73CF246C3E202395_OFFSET))(this, a1);
	}
};
