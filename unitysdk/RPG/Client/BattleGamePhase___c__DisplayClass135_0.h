#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BattleGamePhase; }
namespace RPG::GameCore { class LevelTurnUltraSkillPrepare; }

#define RPG_CLIENT_BATTLEGAMEPHASE___C__DISPLAYCLASS135_0__CTOR_OFFSET UNITYSDK_OFFSET(0x91B3020)
#define RPG_CLIENT_BATTLEGAMEPHASE___C__DISPLAYCLASS135_0___ONLEVELTURNULTRASKILLPREPAREEVENT_B__1_OFFSET UNITYSDK_OFFSET(0x91B82C0)
#define RPG_CLIENT_BATTLEGAMEPHASE___C__DISPLAYCLASS135_0___ONLEVELTURNULTRASKILLPREPAREEVENT_G___ONFRAMECAPTUREDONE_0_OFFSET UNITYSDK_OFFSET(0x91B3030)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleGamePhase___c__DisplayClass135_0_TypeDefinitionIndex = 49429;

	class BattleGamePhase___c__DisplayClass135_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::LevelTurnUltraSkillPrepare* pRealEvent; // 0x10
		::RPG::Client::BattleGamePhase* __4__this; // 0x18
		::System::Boolean bHasPrepareAbility; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPHASE___C__DISPLAYCLASS135_0__CTOR_OFFSET))(this);
		}

		::System::Void __OnLevelTurnUltraSkillPrepareEvent_g___OnFrameCaptureDone_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPHASE___C__DISPLAYCLASS135_0___ONLEVELTURNULTRASKILLPREPAREEVENT_G___ONFRAMECAPTUREDONE_0_OFFSET))(this);
		}

		::System::Void __OnLevelTurnUltraSkillPrepareEvent_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPHASE___C__DISPLAYCLASS135_0___ONLEVELTURNULTRASKILLPREPAREEVENT_B__1_OFFSET))(this);
		}
	};
}
