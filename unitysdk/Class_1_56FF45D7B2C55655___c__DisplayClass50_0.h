#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/System/Object.h"

class Class_1_0EB00F37E3AA0D96;
class Class_1_56FF45D7B2C55655;
namespace RPG::Client { class MonoEffect; }

#define CLASS_1_56FF45D7B2C55655___C__DISPLAYCLASS50_0__CTOR_OFFSET UNITYSDK_OFFSET(0x88D4CD0)
#define CLASS_1_56FF45D7B2C55655___C__DISPLAYCLASS50_0__PRELOADBATTLEAREA_B__0_OFFSET UNITYSDK_OFFSET(0x88F42F0)

inline static constexpr unsigned int Class_1_56FF45D7B2C55655___c__DisplayClass50_0_TypeDefinitionIndex = 60551;

class Class_1_56FF45D7B2C55655___c__DisplayClass50_0 : public ::System::Object
{
public:
	::Class_1_56FF45D7B2C55655* __4__this; // 0x10
	::Class_1_0EB00F37E3AA0D96* battleArea; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_56FF45D7B2C55655___C__DISPLAYCLASS50_0__CTOR_OFFSET))(this);
	}

	::System::Void _PreloadBattleArea_b__0(::RPG::Client::MonoEffect* effect, ::RPG::Client::TriggerEffectCallbackParams extraParams)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CLASS_1_56FF45D7B2C55655___C__DISPLAYCLASS50_0__PRELOADBATTLEAREA_B__0_OFFSET))(this, effect, extraParams);
	}
};
