#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BattleGamePhase; }
namespace RPG::Client { class BattleGamePhaseInitParams; }

#define RPG_CLIENT_BATTLEGAMEPHASE___C__DISPLAYCLASS67_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB3E7CB0)
#define RPG_CLIENT_BATTLEGAMEPHASE___C__DISPLAYCLASS67_0___RESTARTIMP_B__0_OFFSET UNITYSDK_OFFSET(0xB3F8B40)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleGamePhase___c__DisplayClass67_0_TypeDefinitionIndex = 56993;

	class BattleGamePhase___c__DisplayClass67_0 : public ::System::Object
	{
	public:
		::RPG::Client::BattleGamePhase* __4__this; // 0x10
		::RPG::Client::BattleGamePhaseInitParams* pBGPInitParams; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPHASE___C__DISPLAYCLASS67_0__CTOR_OFFSET))(this);
		}

		::System::Void __RestartImp_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPHASE___C__DISPLAYCLASS67_0___RESTARTIMP_B__0_OFFSET))(this);
		}
	};
}
