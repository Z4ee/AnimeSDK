#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }

#define CLASS_3_819847F49C75958F___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1182C070)
#define CLASS_3_819847F49C75958F___C__DISPLAYCLASS14_0___DAMAGEHITPERFORMANCEDELAY_B__0_OFFSET UNITYSDK_OFFSET(0x1182C3D0)

inline static constexpr unsigned int Class_3_819847F49C75958F___c__DisplayClass14_0_TypeDefinitionIndex = 49637;

class Class_3_819847F49C75958F___c__DisplayClass14_0 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* target; // 0x10
	::System::Action* callback; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_819847F49C75958F___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
	}

	::System::Void __DamageHitPerformanceDelay_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_819847F49C75958F___C__DISPLAYCLASS14_0___DAMAGEHITPERFORMANCEDELAY_B__0_OFFSET))(this);
	}
};
