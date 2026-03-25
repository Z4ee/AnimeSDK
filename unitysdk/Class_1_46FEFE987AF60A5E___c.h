#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_46FEFE987AF60A5E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11119390)
#define CLASS_1_46FEFE987AF60A5E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x111193C0)
#define CLASS_1_46FEFE987AF60A5E___C___CCTOR_B__37_0_OFFSET UNITYSDK_OFFSET(0x111193D0)

inline static constexpr unsigned int Class_1_46FEFE987AF60A5E___c_TypeDefinitionIndex = 48985;

class Class_1_46FEFE987AF60A5E___c : public ::System::Object
{
public:
	static ::Class_1_46FEFE987AF60A5E___c** StaticGet___9()
	{
		return (::Class_1_46FEFE987AF60A5E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_46FEFE987AF60A5E___c_TypeDefinitionIndex)->GetStaticField(0x46330);
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
