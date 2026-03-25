#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChenLingBattle/GamePhase.h"

class Class_1_F65FD1783A40C6D8;
class Class_1_FA4F4A67B1C04320_157;
class Class_1_FA4F4A67B1C04320_160;
class Class_1_FA4F4A67B1C04320_165;
namespace RPG::Client::ChenLingBattle { class HandCard; }
namespace RPG::Client::ChenLingBattle { class PreviewSnapshot; }
namespace RPG::Client::ChenLingBattle { class SelectPolicyPhaseInfo; }
namespace RPG::Client::ChenLingBattle { class SelectPolicyPreviewSnapshot; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }

#define RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE_ENTERPREVIEWMODE_OFFSET UNITYSDK_OFFSET(0x93411A0)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE_EXITPREVIEWMODE_OFFSET UNITYSDK_OFFSET(0x9341370)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE_FINISHREFRESHPOLICY_OFFSET UNITYSDK_OFFSET(0x9340580)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE_ONENTER_OFFSET UNITYSDK_OFFSET(0x933FC10)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE_ONLEAVE_OFFSET UNITYSDK_OFFSET(0x9340200)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE_REFRESHPOLICY_OFFSET UNITYSDK_OFFSET(0x93403A0)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE_REQUESTSELLHANDCARD_OFFSET UNITYSDK_OFFSET(0x9340D20)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE_SELECTPOLICY_OFFSET UNITYSDK_OFFSET(0x9340860)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE__CTOR_OFFSET UNITYSDK_OFFSET(0x933FC00)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE__ONCHENLINGREFRESHPOLICYSCRSP_OFFSET UNITYSDK_OFFSET(0x93405E0)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE__ONCHENLINGSELECTPOLICYSCRSP_OFFSET UNITYSDK_OFFSET(0x9340B10)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE__ONCHENLINGSELLHANDCARDSCRSP_OFFSET UNITYSDK_OFFSET(0x9340F10)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE__SELECTPOLICY_B__6_0_OFFSET UNITYSDK_OFFSET(0x9341750)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int SelectPolicyPhase_TypeDefinitionIndex = 62079;

	class SelectPolicyPhase : public ::RPG::Client::ChenLingBattle::GamePhase
	{
	public:
		::RPG::Client::ChenLingBattle::SelectPolicyPreviewSnapshot* _PreviewSnapshot; // 0x18

		::System::Void _ctor(::Class_1_F65FD1783A40C6D8* phaseManager)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F65FD1783A40C6D8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE__CTOR_OFFSET))(this, phaseManager);
		}

		::RPG::Client::Promises::IPromise* OnEnter(::System::Object* param)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE_ONENTER_OFFSET))(this, param);
		}

		::RPG::Client::Promises::IPromise* OnLeave()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE_ONLEAVE_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* RefreshPolicy()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE_REFRESHPOLICY_OFFSET))(this);
		}

		::System::Void FinishRefreshPolicy(::RPG::Client::ChenLingBattle::SelectPolicyPhaseInfo* newPolicyInfo)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::SelectPolicyPhaseInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE_FINISHREFRESHPOLICY_OFFSET))(this, newPolicyInfo);
		}

		::RPG::Client::Promises::IPromise* _OnChenLingRefreshPolicyScRsp(::Class_1_FA4F4A67B1C04320_160* rsp)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_160*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE__ONCHENLINGREFRESHPOLICYSCRSP_OFFSET))(this, rsp);
		}

		::RPG::Client::Promises::IPromise* SelectPolicy(::System::UInt32 index)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE_SELECTPOLICY_OFFSET))(this, index);
		}

		::RPG::Client::Promises::IPromise* _OnChenLingSelectPolicyScRsp(::Class_1_FA4F4A67B1C04320_165* rsp)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_165*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE__ONCHENLINGSELECTPOLICYSCRSP_OFFSET))(this, rsp);
		}

		::RPG::Client::Promises::IPromise* RequestSellHandCard(::RPG::Client::ChenLingBattle::HandCard* handCard)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::ChenLingBattle::HandCard*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE_REQUESTSELLHANDCARD_OFFSET))(this, handCard);
		}

		::RPG::Client::Promises::IPromise* _OnChenLingSellHandCardScRsp(::Class_1_FA4F4A67B1C04320_157* rsp)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_157*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE__ONCHENLINGSELLHANDCARDSCRSP_OFFSET))(this, rsp);
		}

		::System::Void EnterPreviewMode(::RPG::Client::ChenLingBattle::PreviewSnapshot* snapshot)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::PreviewSnapshot*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE_ENTERPREVIEWMODE_OFFSET))(this, snapshot);
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
