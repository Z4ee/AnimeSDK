#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BattleGamePhaseInitParams; }
namespace RPG::Client::Promises { class Promise; }

#define RPG_CLIENT_BATTLELINEUPGAMEPHASE___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x174BA110)
#define RPG_CLIENT_BATTLELINEUPGAMEPHASE___C__DISPLAYCLASS8_0___ENTERBATTLEWITHMAZEINFONEXTFRAME_B__0_OFFSET UNITYSDK_OFFSET(0x174BA120)
#define RPG_CLIENT_BATTLELINEUPGAMEPHASE___C__DISPLAYCLASS8_0___ENTERBATTLEWITHMAZEINFONEXTFRAME_B__1_OFFSET UNITYSDK_OFFSET(0x174BA140)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleLineupGamePhase___c__DisplayClass8_0_TypeDefinitionIndex = 58256;

	class BattleLineupGamePhase___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::RPG::Client::BattleGamePhaseInitParams* param; // 0x10
		::RPG::Client::Promises::Promise* preloadPromise; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELINEUPGAMEPHASE___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Void __EnterBattleWithMazeInfoNextFrame_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELINEUPGAMEPHASE___C__DISPLAYCLASS8_0___ENTERBATTLEWITHMAZEINFONEXTFRAME_B__0_OFFSET))(this);
		}

		::System::Void __EnterBattleWithMazeInfoNextFrame_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELINEUPGAMEPHASE___C__DISPLAYCLASS8_0___ENTERBATTLEWITHMAZEINFONEXTFRAME_B__1_OFFSET))(this);
		}
	};
}
