#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChenLingBattle/GamePhase.h"

class Class_1_CE84D8E232AFC277;
class Class_1_D17272E82AE804C2_195;
namespace RPG::Client::ChenLingBattle { class ActionInfo; }
namespace RPG::Client::ChenLingBattle { class ActionPreviewSnapshot; }
namespace RPG::Client::ChenLingBattle { class HandCard; }
namespace RPG::Client::ChenLingBattle { class PendingAction; }
namespace RPG::Client::ChenLingBattle { class PreviewSnapshot; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }

#define RPG_CLIENT_CHENLINGBATTLE_ACTIONPHASE_ENTERPREVIEWMODE_OFFSET UNITYSDK_OFFSET(0x1B93C770)
#define RPG_CLIENT_CHENLINGBATTLE_ACTIONPHASE_EXITPREVIEWMODE_OFFSET UNITYSDK_OFFSET(0x1B93C8C0)
#define RPG_CLIENT_CHENLINGBATTLE_ACTIONPHASE_HANDLEPENDINGACTIONFINISH_OFFSET UNITYSDK_OFFSET(0x1B93B9A0)
#define RPG_CLIENT_CHENLINGBATTLE_ACTIONPHASE_ONENTER_OFFSET UNITYSDK_OFFSET(0x1B93B620)
#define RPG_CLIENT_CHENLINGBATTLE_ACTIONPHASE_ONLEAVE_OFFSET UNITYSDK_OFFSET(0x1B93B8A0)
#define RPG_CLIENT_CHENLINGBATTLE_ACTIONPHASE_REQUESTSELLHANDCARD_OFFSET UNITYSDK_OFFSET(0x1B93BC50)
#define RPG_CLIENT_CHENLINGBATTLE_ACTIONPHASE__CREATEPENDINGACTION_OFFSET UNITYSDK_OFFSET(0x1B93B760)
#define RPG_CLIENT_CHENLINGBATTLE_ACTIONPHASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B93B600)
#define RPG_CLIENT_CHENLINGBATTLE_ACTIONPHASE__HANDLEPENDINGACTIONFINISH_B__4_0_OFFSET UNITYSDK_OFFSET(0x1B93CA10)
#define RPG_CLIENT_CHENLINGBATTLE_ACTIONPHASE__ONCHENLINGSELLHANDCARDSCRSP_OFFSET UNITYSDK_OFFSET(0x1B93BF70)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int ActionPhase_TypeDefinitionIndex = 75808;

	class ActionPhase : public ::RPG::Client::ChenLingBattle::GamePhase
	{
	public:
		::RPG::Client::ChenLingBattle::PendingAction* _PendingAction; // 0x18
		::RPG::Client::ChenLingBattle::ActionPreviewSnapshot* _PreviewSnapshot; // 0x20

		::System::Void _ctor(::Class_1_CE84D8E232AFC277* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_CE84D8E232AFC277*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ACTIONPHASE__CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* OnEnter(::System::Object* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ACTIONPHASE_ONENTER_OFFSET))(this, a1);
		}

		::RPG::Client::ChenLingBattle::PendingAction* _CreatePendingAction(::RPG::Client::ChenLingBattle::ActionInfo* a1)
		{
			return ((::RPG::Client::ChenLingBattle::PendingAction*(*)(::PVOID, ::RPG::Client::ChenLingBattle::ActionInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ACTIONPHASE__CREATEPENDINGACTION_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* OnLeave()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ACTIONPHASE_ONLEAVE_OFFSET))(this);
		}

		::System::Void HandlePendingActionFinish(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ACTIONPHASE_HANDLEPENDINGACTIONFINISH_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* RequestSellHandCard(::RPG::Client::ChenLingBattle::HandCard* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::ChenLingBattle::HandCard*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ACTIONPHASE_REQUESTSELLHANDCARD_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _OnChenLingSellHandCardScRsp(::Class_1_D17272E82AE804C2_195* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Class_1_D17272E82AE804C2_195*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ACTIONPHASE__ONCHENLINGSELLHANDCARDSCRSP_OFFSET))(this, a1);
		}

		::System::Void EnterPreviewMode(::RPG::Client::ChenLingBattle::PreviewSnapshot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::PreviewSnapshot*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ACTIONPHASE_ENTERPREVIEWMODE_OFFSET))(this, a1);
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
