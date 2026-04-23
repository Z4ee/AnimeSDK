#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BattleGamePhaseInitParams; }

#define RPG_CLIENT_BATTLEGAMEPHASE___C__DISPLAYCLASS68_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9E5E370)
#define RPG_CLIENT_BATTLEGAMEPHASE___C__DISPLAYCLASS68_0__RESTARTBATTLEAFTERLOADFINISH_B__0_OFFSET UNITYSDK_OFFSET(0x9E5E380)
#define RPG_CLIENT_BATTLEGAMEPHASE___C__DISPLAYCLASS68_0__RESTARTBATTLEAFTERLOADFINISH_B__1_OFFSET UNITYSDK_OFFSET(0x9E5E3E0)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleGamePhase___c__DisplayClass68_0_TypeDefinitionIndex = 56232;

	class BattleGamePhase___c__DisplayClass68_0 : public ::System::Object
	{
	public:
		::RPG::Client::BattleGamePhaseInitParams* pBGPInitParams; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPHASE___C__DISPLAYCLASS68_0__CTOR_OFFSET))(this);
		}

		::System::Void _RestartBattleAfterLoadFinish_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPHASE___C__DISPLAYCLASS68_0__RESTARTBATTLEAFTERLOADFINISH_B__0_OFFSET))(this);
		}

		::System::Void _RestartBattleAfterLoadFinish_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPHASE___C__DISPLAYCLASS68_0__RESTARTBATTLEAFTERLOADFINISH_B__1_OFFSET))(this);
		}
	};
}
