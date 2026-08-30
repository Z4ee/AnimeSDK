#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class LuaUIGameFlowContext; }
namespace RPG::Client::ChenLingBattle { class ActionInfo; }
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }

#define RPG_CLIENT_CHENLINGBATTLE_PENDINGACTION_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCB08E90)
#define RPG_CLIENT_CHENLINGBATTLE_PENDINGACTION_GET_ACTIONINFO_OFFSET UNITYSDK_OFFSET(0xCB08F30)
#define RPG_CLIENT_CHENLINGBATTLE_PENDINGACTION_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xCB08EF0)
#define RPG_CLIENT_CHENLINGBATTLE_PENDINGACTION_ONENTER_OFFSET UNITYSDK_OFFSET(0xCB08E10)
#define RPG_CLIENT_CHENLINGBATTLE_PENDINGACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xCB08E00)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int PendingAction_TypeDefinitionIndex = 75807;

	class PendingAction : public ::System::Object
	{
	public:
		::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* _GameContext; // 0x10
		::RPG::Client::Promises::Promise* _FinishedPromise; // 0x18
		::RPG::Client::LuaUIGameFlowContext* _Page; // 0x20
		::RPG::Client::ChenLingBattle::ActionInfo* _ActionInfo; // 0x28

		::System::Void _ctor(::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* a1, ::RPG::Client::ChenLingBattle::ActionInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*, ::RPG::Client::ChenLingBattle::ActionInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PENDINGACTION__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise* OnEnter(::System::Nullable_1<::System::Int32> a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PENDINGACTION_ONENTER_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PENDINGACTION_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* IsFinished()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PENDINGACTION_ISFINISHED_OFFSET))(this);
		}

		::RPG::Client::ChenLingBattle::ActionInfo* get_ActionInfo()
		{
			return ((::RPG::Client::ChenLingBattle::ActionInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PENDINGACTION_GET_ACTIONINFO_OFFSET))(this);
		}
	};
}
