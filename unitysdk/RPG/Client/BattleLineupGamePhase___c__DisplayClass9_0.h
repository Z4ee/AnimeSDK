#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A95A6B41A5C8A63D;

#define RPG_CLIENT_BATTLELINEUPGAMEPHASE___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x91BD210)
#define RPG_CLIENT_BATTLELINEUPGAMEPHASE___C__DISPLAYCLASS9_0___ENTERREPLAYWITHMAZEINFONEXTFRAME_B__0_OFFSET UNITYSDK_OFFSET(0x91BD220)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleLineupGamePhase___c__DisplayClass9_0_TypeDefinitionIndex = 49451;

	class BattleLineupGamePhase___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::Class_1_A95A6B41A5C8A63D* _Params; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELINEUPGAMEPHASE___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Void __EnterReplayWithMazeInfoNextFrame_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELINEUPGAMEPHASE___C__DISPLAYCLASS9_0___ENTERREPLAYWITHMAZEINFONEXTFRAME_B__0_OFFSET))(this);
		}
	};
}
