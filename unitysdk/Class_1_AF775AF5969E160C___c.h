#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_AF775AF5969E160C___C_METHOD_1_5FCF55645F94B932_OFFSET UNITYSDK_OFFSET(0x13CFADF0)
#define CLASS_1_AF775AF5969E160C___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13CFADA0)
#define CLASS_1_AF775AF5969E160C___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13CFADE0)

inline static constexpr unsigned int Class_1_AF775AF5969E160C___c_TypeDefinitionIndex = 41753;

class Class_1_AF775AF5969E160C___c : public ::System::Object
{
public:
	static ::Class_1_AF775AF5969E160C___c** StaticGet___9()
	{
		return (::Class_1_AF775AF5969E160C___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AF775AF5969E160C___c_TypeDefinitionIndex)->GetStaticField(0x43C20);
	}
	static ::System::Action_1<::MoleMole::Battle::Entity*>** StaticGet___9__4_0()
	{
		return (::System::Action_1<::MoleMole::Battle::Entity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AF775AF5969E160C___c_TypeDefinitionIndex)->GetStaticField(0x43C28);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AF775AF5969E160C___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AF775AF5969E160C___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5FCF55645F94B932(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_AF775AF5969E160C___C_METHOD_1_5FCF55645F94B932_OFFSET))(this, a1);
	}
};
