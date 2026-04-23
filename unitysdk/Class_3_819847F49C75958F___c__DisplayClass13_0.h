#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_3_819847F49C75958F___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1182BE50)
#define CLASS_3_819847F49C75958F___C__DISPLAYCLASS13_0___PLAYDAMAGEHITSOUND_B__0_OFFSET UNITYSDK_OFFSET(0x1182C2E0)

inline static constexpr unsigned int Class_3_819847F49C75958F___c__DisplayClass13_0_TypeDefinitionIndex = 49636;

class Class_3_819847F49C75958F___c__DisplayClass13_0 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* pTarget; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_819847F49C75958F___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
	}

	::System::Void __PlayDamageHitSound_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_819847F49C75958F___C__DISPLAYCLASS13_0___PLAYDAMAGEHITSOUND_B__0_OFFSET))(this);
	}
};
