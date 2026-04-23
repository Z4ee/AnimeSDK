#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChenLingBattle/GamePhase.h"

class Class_1_F65FD1783A40C6D8;
namespace RPG::Client { class LuaUIGameFlowContext; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Action; }
namespace System { class Object; }

#define RPG_CLIENT_CHENLINGBATTLE_ROUNDSETTLEPHASE_ONENTER_OFFSET UNITYSDK_OFFSET(0x9FAA7D0)
#define RPG_CLIENT_CHENLINGBATTLE_ROUNDSETTLEPHASE_ONLEAVE_OFFSET UNITYSDK_OFFSET(0x9FAAB20)
#define RPG_CLIENT_CHENLINGBATTLE_ROUNDSETTLEPHASE_SWITCHTOPREPAREEDIT_OFFSET UNITYSDK_OFFSET(0x9FAAD50)
#define RPG_CLIENT_CHENLINGBATTLE_ROUNDSETTLEPHASE__CTOR_OFFSET UNITYSDK_OFFSET(0x9FAA7C0)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int RoundSettlePhase_TypeDefinitionIndex = 70074;

	class RoundSettlePhase : public ::RPG::Client::ChenLingBattle::GamePhase
	{
	public:
		::RPG::Client::LuaUIGameFlowContext* _RoundSettlePage; // 0x18

		::System::Void _ctor(::Class_1_F65FD1783A40C6D8* phaseManager)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F65FD1783A40C6D8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ROUNDSETTLEPHASE__CTOR_OFFSET))(this, phaseManager);
		}

		::RPG::Client::Promises::IPromise* OnEnter(::System::Object* param)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ROUNDSETTLEPHASE_ONENTER_OFFSET))(this, param);
		}

		::RPG::Client::Promises::IPromise* OnLeave()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ROUNDSETTLEPHASE_ONLEAVE_OFFSET))(this);
		}

		::System::Void SwitchToPrepareEdit(::System::Object* param, ::System::Action* onFinish)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ROUNDSETTLEPHASE_SWITCHTOPREPAREEDIT_OFFSET))(this, param, onFinish);
		}
	};
}
