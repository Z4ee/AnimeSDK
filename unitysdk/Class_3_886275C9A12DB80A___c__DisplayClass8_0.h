#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }

#define CLASS_3_886275C9A12DB80A___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x115FAE00)
#define CLASS_3_886275C9A12DB80A___C__DISPLAYCLASS8_0___DAMAGEHITPERFORMANCEDELAY_B__0_OFFSET UNITYSDK_OFFSET(0x115FB140)

inline static constexpr unsigned int Class_3_886275C9A12DB80A___c__DisplayClass8_0_TypeDefinitionIndex = 45199;

class Class_3_886275C9A12DB80A___c__DisplayClass8_0 : public ::System::Object
{
public:
	::System::Action* callback; // 0x10
	::RPG::GameCore::GameEntity* target; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_886275C9A12DB80A___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
	}

	::System::Void __DamageHitPerformanceDelay_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_886275C9A12DB80A___C__DISPLAYCLASS8_0___DAMAGEHITPERFORMANCEDELAY_B__0_OFFSET))(this);
	}
};
