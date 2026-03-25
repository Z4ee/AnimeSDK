#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BattleGamePhaseInitParams; }
namespace RPG::Client::Promises { class Promise; }

#define RPG_CLIENT_BATTLEGAMEPHASE___C__DISPLAYCLASS64_0__CTOR_OFFSET UNITYSDK_OFFSET(0x91A8250)
#define RPG_CLIENT_BATTLEGAMEPHASE___C__DISPLAYCLASS64_0___RESTARTLOADBATTLEAREA_B__0_OFFSET UNITYSDK_OFFSET(0x91B8550)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleGamePhase___c__DisplayClass64_0_TypeDefinitionIndex = 49433;

	class BattleGamePhase___c__DisplayClass64_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* loadBattleAreaPromise; // 0x10
		::RPG::Client::BattleGamePhaseInitParams* initParam; // 0x18
		::System::Single timeout; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPHASE___C__DISPLAYCLASS64_0__CTOR_OFFSET))(this);
		}

		::System::Void __RestartLoadBattleArea_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPHASE___C__DISPLAYCLASS64_0___RESTARTLOADBATTLEAREA_B__0_OFFSET))(this);
		}
	};
}
