#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChenLingBattle/GamePhase.h"

class Class_1_CE84D8E232AFC277;
class Class_1_D17272E82AE804C2_170;
class Class_1_D17272E82AE804C2_173;
class Class_1_D17272E82AE804C2_178;
namespace RPG::Client::ChenLingBattle { class HandCard; }
namespace RPG::Client::ChenLingBattle { class PreviewSnapshot; }
namespace RPG::Client::ChenLingBattle { class SelectPolicyPhaseInfo; }
namespace RPG::Client::ChenLingBattle { class SelectPolicyPreviewSnapshot; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }

#define RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE_ENTERPREVIEWMODE_OFFSET UNITYSDK_OFFSET(0xB5C8FF0)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE_EXITPREVIEWMODE_OFFSET UNITYSDK_OFFSET(0xB5C91E0)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE_FINISHREFRESHPOLICY_OFFSET UNITYSDK_OFFSET(0xB5C8320)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE_ONENTER_OFFSET UNITYSDK_OFFSET(0xB5C79E0)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE_ONLEAVE_OFFSET UNITYSDK_OFFSET(0xB5C7F60)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE_REFRESHPOLICY_OFFSET UNITYSDK_OFFSET(0xB5C8100)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE_REQUESTSELLHANDCARD_OFFSET UNITYSDK_OFFSET(0xB5C8B30)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE_SELECTPOLICY_OFFSET UNITYSDK_OFFSET(0xB5C8600)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE__CTOR_OFFSET UNITYSDK_OFFSET(0xB5C79D0)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE__ONCHENLINGREFRESHPOLICYSCRSP_OFFSET UNITYSDK_OFFSET(0xB5C8380)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE__ONCHENLINGSELECTPOLICYSCRSP_OFFSET UNITYSDK_OFFSET(0xB5C8920)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE__ONCHENLINGSELLHANDCARDSCRSP_OFFSET UNITYSDK_OFFSET(0xB5C8D60)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE__SELECTPOLICY_B__6_0_OFFSET UNITYSDK_OFFSET(0xB5C9540)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int SelectPolicyPhase_TypeDefinitionIndex = 70890;

	class SelectPolicyPhase : public ::RPG::Client::ChenLingBattle::GamePhase
	{
	public:
		::RPG::Client::ChenLingBattle::SelectPolicyPreviewSnapshot* _PreviewSnapshot; // 0x18

		::System::Void _ctor(::Class_1_CE84D8E232AFC277* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_CE84D8E232AFC277*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE__CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* OnEnter(::System::Object* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE_ONENTER_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* OnLeave()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE_ONLEAVE_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* RefreshPolicy()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE_REFRESHPOLICY_OFFSET))(this);
		}

		::System::Void FinishRefreshPolicy(::RPG::Client::ChenLingBattle::SelectPolicyPhaseInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::SelectPolicyPhaseInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE_FINISHREFRESHPOLICY_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _OnChenLingRefreshPolicyScRsp(::Class_1_D17272E82AE804C2_173* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Class_1_D17272E82AE804C2_173*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE__ONCHENLINGREFRESHPOLICYSCRSP_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* SelectPolicy(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE_SELECTPOLICY_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _OnChenLingSelectPolicyScRsp(::Class_1_D17272E82AE804C2_178* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Class_1_D17272E82AE804C2_178*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE__ONCHENLINGSELECTPOLICYSCRSP_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* RequestSellHandCard(::RPG::Client::ChenLingBattle::HandCard* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::ChenLingBattle::HandCard*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE_REQUESTSELLHANDCARD_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _OnChenLingSellHandCardScRsp(::Class_1_D17272E82AE804C2_170* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Class_1_D17272E82AE804C2_170*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE__ONCHENLINGSELLHANDCARDSCRSP_OFFSET))(this, a1);
		}

		::System::Void EnterPreviewMode(::RPG::Client::ChenLingBattle::PreviewSnapshot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::PreviewSnapshot*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE_ENTERPREVIEWMODE_OFFSET))(this, a1);
		}

		::System::Void ExitPreviewMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE_EXITPREVIEWMODE_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _SelectPolicy_b__6_0()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE__SELECTPOLICY_B__6_0_OFFSET))(this);
		}
	};
}
