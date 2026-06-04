#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_70697F531F566942_1;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_DDEE172DB0F01CA1___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x139D3B20)
#define CLASS_1_DDEE172DB0F01CA1___C__DISPLAYCLASS1_0__SELECTABLEENEMYALIVECOUNT_B__0_OFFSET UNITYSDK_OFFSET(0x139D4260)

inline static constexpr unsigned int Class_1_DDEE172DB0F01CA1___c__DisplayClass1_0_TypeDefinitionIndex = 50807;

class Class_1_DDEE172DB0F01CA1___c__DisplayClass1_0 : public ::System::Object
{
public:
	::Class_1_70697F531F566942_1* context; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DDEE172DB0F01CA1___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _SelectableEnemyAliveCount_b__0(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_DDEE172DB0F01CA1___C__DISPLAYCLASS1_0__SELECTABLEENEMYALIVECOUNT_B__0_OFFSET))(this, a1);
	}
};
