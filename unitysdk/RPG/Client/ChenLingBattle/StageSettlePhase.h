#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChenLingBattle/GamePhase.h"

class Class_1_CE84D8E232AFC277;
namespace RPG::Client { class LuaUIGameFlowContext; }
namespace RPG::Client { class StageSettleInfo; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Action; }
namespace System { class Object; }

#define RPG_CLIENT_CHENLINGBATTLE_STAGESETTLEPHASE_ONENTER_OFFSET UNITYSDK_OFFSET(0xB5D2950)
#define RPG_CLIENT_CHENLINGBATTLE_STAGESETTLEPHASE_ONLEAVE_OFFSET UNITYSDK_OFFSET(0xB5D2F70)
#define RPG_CLIENT_CHENLINGBATTLE_STAGESETTLEPHASE_SWITCHTOPREPAREEDIT_OFFSET UNITYSDK_OFFSET(0xB5D3140)
#define RPG_CLIENT_CHENLINGBATTLE_STAGESETTLEPHASE__CTOR_OFFSET UNITYSDK_OFFSET(0xB5D2940)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int StageSettlePhase_TypeDefinitionIndex = 70900;

	class StageSettlePhase : public ::RPG::Client::ChenLingBattle::GamePhase
	{
	public:
		::RPG::Client::LuaUIGameFlowContext* _RoundSettlePage; // 0x18
		::RPG::Client::LuaUIGameFlowContext* _StageSettlePage; // 0x20
		::RPG::Client::StageSettleInfo* _StageSettleInfo; // 0x28

		::System::Void _ctor(::Class_1_CE84D8E232AFC277* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_CE84D8E232AFC277*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_STAGESETTLEPHASE__CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* OnEnter(::System::Object* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_STAGESETTLEPHASE_ONENTER_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* OnLeave()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_STAGESETTLEPHASE_ONLEAVE_OFFSET))(this);
		}

		::System::Void SwitchToPrepareEdit(::System::Object* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_STAGESETTLEPHASE_SWITCHTOPREPAREEDIT_OFFSET))(this, a1, a2);
		}
	};
}
