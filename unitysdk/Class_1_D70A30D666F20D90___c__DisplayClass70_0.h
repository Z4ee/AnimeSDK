#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/System/Object.h"

class Class_1_83ABAC4FF8C00500;
class Class_1_D70A30D666F20D90;
namespace RPG::Client { class MonoEffect; }

#define CLASS_1_D70A30D666F20D90___C__DISPLAYCLASS70_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17E4D370)
#define CLASS_1_D70A30D666F20D90___C__DISPLAYCLASS70_0__PRELOADBATTLEAREA_B__0_OFFSET UNITYSDK_OFFSET(0x17E4D380)

inline static constexpr unsigned int Class_1_D70A30D666F20D90___c__DisplayClass70_0_TypeDefinitionIndex = 73755;

class Class_1_D70A30D666F20D90___c__DisplayClass70_0 : public ::System::Object
{
public:
	::Class_1_83ABAC4FF8C00500* ba; // 0x10
	::Class_1_D70A30D666F20D90* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D70A30D666F20D90___C__DISPLAYCLASS70_0__CTOR_OFFSET))(this);
	}

	::System::Void _PreloadBattleArea_b__0(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CLASS_1_D70A30D666F20D90___C__DISPLAYCLASS70_0__PRELOADBATTLEAREA_B__0_OFFSET))(this, a1, a2);
	}
};
