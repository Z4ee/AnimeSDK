#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_46FEFE987AF60A5E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9E3E1F0)
#define CLASS_1_46FEFE987AF60A5E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9E3E220)
#define CLASS_1_46FEFE987AF60A5E___C___CCTOR_B__37_0_OFFSET UNITYSDK_OFFSET(0x9E3E230)

inline static constexpr unsigned int Class_1_46FEFE987AF60A5E___c_TypeDefinitionIndex = 55779;

class Class_1_46FEFE987AF60A5E___c : public ::System::Object
{
public:
	static ::Class_1_46FEFE987AF60A5E___c** StaticGet___9()
	{
		return (::Class_1_46FEFE987AF60A5E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_46FEFE987AF60A5E___c_TypeDefinitionIndex)->GetStaticField(0x6A7A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_46FEFE987AF60A5E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46FEFE987AF60A5E___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __cctor_b__37_0(::RPG::GameCore::GameEntity* entity1, ::RPG::GameCore::GameEntity* entity2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_46FEFE987AF60A5E___C___CCTOR_B__37_0_OFFSET))(this, entity1, entity2);
	}
};
