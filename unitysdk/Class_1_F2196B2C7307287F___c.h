#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E25D7F94E839C0C1;
class Class_1_F2196B2C7307287F;
namespace MoleMole::GalGame { class GalPlayableNodeBase; }

#define CLASS_1_F2196B2C7307287F___C_METHOD_1_87F917B103EEDFEB_OFFSET UNITYSDK_OFFSET(0x1559AA10)
#define CLASS_1_F2196B2C7307287F___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1559A9C0)
#define CLASS_1_F2196B2C7307287F___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1559AA00)

inline static constexpr unsigned int Class_1_F2196B2C7307287F___c_TypeDefinitionIndex = 88575;

class Class_1_F2196B2C7307287F___c : public ::System::Object
{
public:
	static ::Class_1_F2196B2C7307287F___c** StaticGet___9()
	{
		return (::Class_1_F2196B2C7307287F___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F2196B2C7307287F___c_TypeDefinitionIndex)->GetStaticField(0x4A2D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F2196B2C7307287F___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F2196B2C7307287F___C__CTOR_OFFSET))(this);
	}

	::Class_1_E25D7F94E839C0C1* Method_1_87F917B103EEDFEB(::Class_1_F2196B2C7307287F* a1, ::MoleMole::GalGame::GalPlayableNodeBase* a2)
	{
		return ((::Class_1_E25D7F94E839C0C1*(*)(::PVOID, ::Class_1_F2196B2C7307287F*, ::MoleMole::GalGame::GalPlayableNodeBase*))((::PBYTE)hIl2Cpp + CLASS_1_F2196B2C7307287F___C_METHOD_1_87F917B103EEDFEB_OFFSET))(this, a1, a2);
	}
};
