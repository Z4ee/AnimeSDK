#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChenLingBattle/GamePhase.h"

class Class_1_CE84D8E232AFC277;
namespace RPG::Client { class LuaUIGameFlowContext; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Action; }
namespace System { class Object; }

#define RPG_CLIENT_CHENLINGBATTLE_ROUNDSETTLEPHASE_ONENTER_OFFSET UNITYSDK_OFFSET(0x1CC2B380)
#define RPG_CLIENT_CHENLINGBATTLE_ROUNDSETTLEPHASE_ONLEAVE_OFFSET UNITYSDK_OFFSET(0x1CC2B700)
#define RPG_CLIENT_CHENLINGBATTLE_ROUNDSETTLEPHASE_SWITCHTOPREPAREEDIT_OFFSET UNITYSDK_OFFSET(0x1CC2B930)
#define RPG_CLIENT_CHENLINGBATTLE_ROUNDSETTLEPHASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC2B370)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int RoundSettlePhase_TypeDefinitionIndex = 75835;

	class RoundSettlePhase : public ::RPG::Client::ChenLingBattle::GamePhase
	{
	public:
		::RPG::Client::LuaUIGameFlowContext* _RoundSettlePage; // 0x18

		::System::Void _ctor(::Class_1_CE84D8E232AFC277* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_CE84D8E232AFC277*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ROUNDSETTLEPHASE__CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* OnEnter(::System::Object* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ROUNDSETTLEPHASE_ONENTER_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* OnLeave()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ROUNDSETTLEPHASE_ONLEAVE_OFFSET))(this);
		}

		::System::Void SwitchToPrepareEdit(::System::Object* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ROUNDSETTLEPHASE_SWITCHTOPREPAREEDIT_OFFSET))(this, a1, a2);
		}
	};
}
