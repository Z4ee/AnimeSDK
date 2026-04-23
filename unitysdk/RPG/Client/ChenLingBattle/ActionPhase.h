#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChenLingBattle/GamePhase.h"

class Class_1_D17272E82AE804C2_164;
class Class_1_F65FD1783A40C6D8;
namespace RPG::Client::ChenLingBattle { class ActionInfo; }
namespace RPG::Client::ChenLingBattle { class ActionPreviewSnapshot; }
namespace RPG::Client::ChenLingBattle { class HandCard; }
namespace RPG::Client::ChenLingBattle { class PendingAction; }
namespace RPG::Client::ChenLingBattle { class PreviewSnapshot; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }

#define RPG_CLIENT_CHENLINGBATTLE_ACTIONPHASE_ENTERPREVIEWMODE_OFFSET UNITYSDK_OFFSET(0x9F8A5D0)
#define RPG_CLIENT_CHENLINGBATTLE_ACTIONPHASE_EXITPREVIEWMODE_OFFSET UNITYSDK_OFFSET(0x9F8A6A0)
#define RPG_CLIENT_CHENLINGBATTLE_ACTIONPHASE_HANDLEPENDINGACTIONFINISH_OFFSET UNITYSDK_OFFSET(0x9F89FD0)
#define RPG_CLIENT_CHENLINGBATTLE_ACTIONPHASE_ONENTER_OFFSET UNITYSDK_OFFSET(0x9F89D70)
#define RPG_CLIENT_CHENLINGBATTLE_ACTIONPHASE_ONLEAVE_OFFSET UNITYSDK_OFFSET(0x9F89F30)
#define RPG_CLIENT_CHENLINGBATTLE_ACTIONPHASE_REQUESTSELLHANDCARD_OFFSET UNITYSDK_OFFSET(0x9F8A150)
#define RPG_CLIENT_CHENLINGBATTLE_ACTIONPHASE__CREATEPENDINGACTION_OFFSET UNITYSDK_OFFSET(0x9F89E40)
#define RPG_CLIENT_CHENLINGBATTLE_ACTIONPHASE__CTOR_OFFSET UNITYSDK_OFFSET(0x9F89D60)
#define RPG_CLIENT_CHENLINGBATTLE_ACTIONPHASE__HANDLEPENDINGACTIONFINISH_B__4_0_OFFSET UNITYSDK_OFFSET(0x9F8A780)
#define RPG_CLIENT_CHENLINGBATTLE_ACTIONPHASE__ONCHENLINGSELLHANDCARDSCRSP_OFFSET UNITYSDK_OFFSET(0x9F8A340)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int ActionPhase_TypeDefinitionIndex = 70047;

	class ActionPhase : public ::RPG::Client::ChenLingBattle::GamePhase
	{
	public:
		::RPG::Client::ChenLingBattle::PendingAction* _PendingAction; // 0x18
		::RPG::Client::ChenLingBattle::ActionPreviewSnapshot* _PreviewSnapshot; // 0x20

		::System::Void _ctor(::Class_1_F65FD1783A40C6D8* phaseManager)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F65FD1783A40C6D8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ACTIONPHASE__CTOR_OFFSET))(this, phaseManager);
		}

		::RPG::Client::Promises::IPromise* OnEnter(::System::Object* param)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ACTIONPHASE_ONENTER_OFFSET))(this, param);
		}

		::RPG::Client::ChenLingBattle::PendingAction* _CreatePendingAction(::RPG::Client::ChenLingBattle::ActionInfo* info)
		{
			return ((::RPG::Client::ChenLingBattle::PendingAction*(*)(::PVOID, ::RPG::Client::ChenLingBattle::ActionInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ACTIONPHASE__CREATEPENDINGACTION_OFFSET))(this, info);
		}

		::RPG::Client::Promises::IPromise* OnLeave()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ACTIONPHASE_ONLEAVE_OFFSET))(this);
		}

		::System::Void HandlePendingActionFinish(::System::UInt32 uniqueID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ACTIONPHASE_HANDLEPENDINGACTIONFINISH_OFFSET))(this, uniqueID);
		}

		::RPG::Client::Promises::IPromise* RequestSellHandCard(::RPG::Client::ChenLingBattle::HandCard* handCard)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::ChenLingBattle::HandCard*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ACTIONPHASE_REQUESTSELLHANDCARD_OFFSET))(this, handCard);
		}

		::RPG::Client::Promises::IPromise* _OnChenLingSellHandCardScRsp(::Class_1_D17272E82AE804C2_164* rsp)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Class_1_D17272E82AE804C2_164*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ACTIONPHASE__ONCHENLINGSELLHANDCARDSCRSP_OFFSET))(this, rsp);
		}

		::System::Void EnterPreviewMode(::RPG::Client::ChenLingBattle::PreviewSnapshot* snapshot)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::PreviewSnapshot*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ACTIONPHASE_ENTERPREVIEWMODE_OFFSET))(this, snapshot);
		}

		::System::Void ExitPreviewMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ACTIONPHASE_EXITPREVIEWMODE_OFFSET))(this);
		}

		::System::Void _HandlePendingActionFinish_b__4_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ACTIONPHASE__HANDLEPENDINGACTIONFINISH_B__4_0_OFFSET))(this);
		}
	};
}
