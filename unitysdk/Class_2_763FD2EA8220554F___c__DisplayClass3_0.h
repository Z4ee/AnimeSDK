#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2AA304B71C6E8B6D;
class Class_2_763FD2EA8220554F;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_763FD2EA8220554F___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x152529D0)
#define CLASS_2_763FD2EA8220554F___C__DISPLAYCLASS3_0__SETFOLLOW_B__0_OFFSET UNITYSDK_OFFSET(0x15253740)

inline static constexpr unsigned int Class_2_763FD2EA8220554F___c__DisplayClass3_0_TypeDefinitionIndex = 71489;

class Class_2_763FD2EA8220554F___c__DisplayClass3_0 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* entity; // 0x10
	::Class_2_763FD2EA8220554F* __4__this; // 0x18
	::Class_1_2AA304B71C6E8B6D* follow; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_763FD2EA8220554F___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
	}

	::System::Void _SetFollow_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_763FD2EA8220554F___C__DISPLAYCLASS3_0__SETFOLLOW_B__0_OFFSET))(this);
	}
};
