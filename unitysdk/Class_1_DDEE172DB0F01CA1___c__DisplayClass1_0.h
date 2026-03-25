#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_70697F531F566942;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_DDEE172DB0F01CA1___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11977760)
#define CLASS_1_DDEE172DB0F01CA1___C__DISPLAYCLASS1_0__SELECTABLEENEMYALIVECOUNT_B__0_OFFSET UNITYSDK_OFFSET(0x11977DC0)

inline static constexpr unsigned int Class_1_DDEE172DB0F01CA1___c__DisplayClass1_0_TypeDefinitionIndex = 43443;

class Class_1_DDEE172DB0F01CA1___c__DisplayClass1_0 : public ::System::Object
{
public:
	::Class_1_70697F531F566942* context; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DDEE172DB0F01CA1___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _SelectableEnemyAliveCount_b__0(::RPG::GameCore::GameEntity* pEntity)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_DDEE172DB0F01CA1___C__DISPLAYCLASS1_0__SELECTABLEENEMYALIVECOUNT_B__0_OFFSET))(this, pEntity);
	}
};
