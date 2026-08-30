#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2AA304B71C6E8B6D;
class Class_2_9A66FA3BB2310F53;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_9A66FA3BB2310F53___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBF885B0)
#define CLASS_2_9A66FA3BB2310F53___C__DISPLAYCLASS4_0__SETFOLLOW_B__0_OFFSET UNITYSDK_OFFSET(0xBF8A390)

inline static constexpr unsigned int Class_2_9A66FA3BB2310F53___c__DisplayClass4_0_TypeDefinitionIndex = 71481;

class Class_2_9A66FA3BB2310F53___c__DisplayClass4_0 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* entity; // 0x10
	::Class_2_9A66FA3BB2310F53* __4__this; // 0x18
	::Class_1_2AA304B71C6E8B6D* follow; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A66FA3BB2310F53___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
	}

	::System::Void _SetFollow_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A66FA3BB2310F53___C__DISPLAYCLASS4_0__SETFOLLOW_B__0_OFFSET))(this);
	}
};
