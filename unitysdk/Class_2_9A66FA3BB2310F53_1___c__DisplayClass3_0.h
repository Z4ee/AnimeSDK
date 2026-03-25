#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_69D7459C7F6EC835;
class Class_2_9A66FA3BB2310F53_1;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_9A66FA3BB2310F53_1___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11366DD0)
#define CLASS_2_9A66FA3BB2310F53_1___C__DISPLAYCLASS3_0__SETFOLLOW_B__0_OFFSET UNITYSDK_OFFSET(0x11368BA0)

inline static constexpr unsigned int Class_2_9A66FA3BB2310F53_1___c__DisplayClass3_0_TypeDefinitionIndex = 58612;

class Class_2_9A66FA3BB2310F53_1___c__DisplayClass3_0 : public ::System::Object
{
public:
	::Class_2_9A66FA3BB2310F53_1* __4__this; // 0x10
	::Class_1_69D7459C7F6EC835* follow; // 0x18
	::RPG::GameCore::GameEntity* entity; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A66FA3BB2310F53_1___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
	}

	::System::Void _SetFollow_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A66FA3BB2310F53_1___C__DISPLAYCLASS3_0__SETFOLLOW_B__0_OFFSET))(this);
	}
};
