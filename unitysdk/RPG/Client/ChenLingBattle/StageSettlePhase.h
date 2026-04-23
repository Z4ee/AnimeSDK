#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChenLingBattle/GamePhase.h"

class Class_1_F65FD1783A40C6D8;
namespace RPG::Client { class LuaUIGameFlowContext; }
namespace RPG::Client { class StageSettleInfo; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Action; }
namespace System { class Object; }

#define RPG_CLIENT_CHENLINGBATTLE_STAGESETTLEPHASE_ONENTER_OFFSET UNITYSDK_OFFSET(0x9FB8200)
#define RPG_CLIENT_CHENLINGBATTLE_STAGESETTLEPHASE_ONLEAVE_OFFSET UNITYSDK_OFFSET(0x9FB88D0)
#define RPG_CLIENT_CHENLINGBATTLE_STAGESETTLEPHASE_SWITCHTOPREPAREEDIT_OFFSET UNITYSDK_OFFSET(0x9FB8AA0)
#define RPG_CLIENT_CHENLINGBATTLE_STAGESETTLEPHASE__CTOR_OFFSET UNITYSDK_OFFSET(0x9FB81F0)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int StageSettlePhase_TypeDefinitionIndex = 70088;

	class StageSettlePhase : public ::RPG::Client::ChenLingBattle::GamePhase
	{
	public:
		::RPG::Client::LuaUIGameFlowContext* _RoundSettlePage; // 0x18
		::RPG::Client::LuaUIGameFlowContext* _StageSettlePage; // 0x20
		::RPG::Client::StageSettleInfo* _StageSettleInfo; // 0x28

		::System::Void _ctor(::Class_1_F65FD1783A40C6D8* phaseManager)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F65FD1783A40C6D8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_STAGESETTLEPHASE__CTOR_OFFSET))(this, phaseManager);
		}

		::RPG::Client::Promises::IPromise* OnEnter(::System::Object* param)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_STAGESETTLEPHASE_ONENTER_OFFSET))(this, param);
		}

		::RPG::Client::Promises::IPromise* OnLeave()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_STAGESETTLEPHASE_ONLEAVE_OFFSET))(this);
		}

		::System::Void SwitchToPrepareEdit(::System::Object* param, ::System::Action* onFinish)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_STAGESETTLEPHASE_SWITCHTOPREPAREEDIT_OFFSET))(this, param, onFinish);
		}
	};
}
