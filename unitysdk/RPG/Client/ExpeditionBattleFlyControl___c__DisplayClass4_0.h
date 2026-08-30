#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ExpeditionBattleFlyControl; }
namespace System { class Action; }

#define RPG_CLIENT_EXPEDITIONBATTLEFLYCONTROL___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0xCEFB190)
#define RPG_CLIENT_EXPEDITIONBATTLEFLYCONTROL___C__DISPLAYCLASS4_0__PLAY_B__0_OFFSET UNITYSDK_OFFSET(0xCEFB1B0)

namespace RPG::Client
{
	inline static constexpr unsigned int ExpeditionBattleFlyControl___c__DisplayClass4_0_TypeDefinitionIndex = 64023;

	class ExpeditionBattleFlyControl___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::RPG::Client::ExpeditionBattleFlyControl* __4__this; // 0x10
		::System::Action* endCallback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEFLYCONTROL___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Void _Play_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEFLYCONTROL___C__DISPLAYCLASS4_0__PLAY_B__0_OFFSET))(this);
		}
	};
}
