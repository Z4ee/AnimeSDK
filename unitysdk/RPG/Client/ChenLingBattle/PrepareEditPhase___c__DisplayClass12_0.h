#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ChenLingBattle { class PrepareEditPhase; }
namespace RPG::Client::Promises { class Promise; }

#define RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE___C__DISPLAYCLASS12_0__ASKWAITINGPROMISE_B__0_OFFSET UNITYSDK_OFFSET(0x1AFDB4B0)
#define RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFDB210)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int PrepareEditPhase___c__DisplayClass12_0_TypeDefinitionIndex = 72392;

	class PrepareEditPhase___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* promise; // 0x10
		::RPG::Client::ChenLingBattle::PrepareEditPhase* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Void _AskWaitingPromise_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE___C__DISPLAYCLASS12_0__ASKWAITINGPROMISE_B__0_OFFSET))(this);
		}
	};
}
