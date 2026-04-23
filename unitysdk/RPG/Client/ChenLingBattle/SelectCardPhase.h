#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChenLingBattle/GamePhase.h"

class Class_1_D17272E82AE804C2_164;
class Class_1_D17272E82AE804C2_166;
class Class_1_D17272E82AE804C2_170;
class Class_1_F65FD1783A40C6D8;
namespace RPG::Client::ChenLingBattle { class HandCard; }
namespace RPG::Client::ChenLingBattle { class PreviewSnapshot; }
namespace RPG::Client::ChenLingBattle { class SelectCardPhaseInfo; }
namespace RPG::Client::ChenLingBattle { class SelectCardPreviewSnapshot; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }

#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE_ENTERPREVIEWMODE_OFFSET UNITYSDK_OFFSET(0x9FACE40)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE_EXITPREVIEWMODE_OFFSET UNITYSDK_OFFSET(0x9FAD010)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE_FINISHREFRESHCARD_OFFSET UNITYSDK_OFFSET(0x9FAD3F0)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE_ONENTER_OFFSET UNITYSDK_OFFSET(0x9FAB910)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE_ONLEAVE_OFFSET UNITYSDK_OFFSET(0x9FABF00)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE_REFRESHCARD_OFFSET UNITYSDK_OFFSET(0x9FAC0A0)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE_REQUESTSELLHANDCARD_OFFSET UNITYSDK_OFFSET(0x9FAC9C0)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE_SELECTCARD_OFFSET UNITYSDK_OFFSET(0x9FAC500)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE__CTOR_OFFSET UNITYSDK_OFFSET(0x9FAB900)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE__ONCHENLINGREFRESHCARDSCRSP_OFFSET UNITYSDK_OFFSET(0x9FAC280)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE__ONCHENLINGSELECTCARDSCRSP_OFFSET UNITYSDK_OFFSET(0x9FAC7B0)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE__ONCHENLINGSELLHANDCARDSCRSP_OFFSET UNITYSDK_OFFSET(0x9FACBB0)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE__SELECTCARD_B__5_0_OFFSET UNITYSDK_OFFSET(0x9FAD450)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int SelectCardPhase_TypeDefinitionIndex = 70075;

	class SelectCardPhase : public ::RPG::Client::ChenLingBattle::GamePhase
	{
	public:
		::RPG::Client::ChenLingBattle::SelectCardPreviewSnapshot* _PreviewSnapshot; // 0x18

		::System::Void _ctor(::Class_1_F65FD1783A40C6D8* phaseManager)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F65FD1783A40C6D8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE__CTOR_OFFSET))(this, phaseManager);
		}

		::RPG::Client::Promises::IPromise* OnEnter(::System::Object* param)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE_ONENTER_OFFSET))(this, param);
		}

		::RPG::Client::Promises::IPromise* OnLeave()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE_ONLEAVE_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* RefreshCard()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE_REFRESHCARD_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _OnChenLingRefreshCardScRsp(::Class_1_D17272E82AE804C2_166* rsp)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Class_1_D17272E82AE804C2_166*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE__ONCHENLINGREFRESHCARDSCRSP_OFFSET))(this, rsp);
		}

		::RPG::Client::Promises::IPromise* SelectCard(::System::UInt32 index)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE_SELECTCARD_OFFSET))(this, index);
		}

		::RPG::Client::Promises::IPromise* _OnChenLingSelectCardScRsp(::Class_1_D17272E82AE804C2_170* rsp)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Class_1_D17272E82AE804C2_170*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE__ONCHENLINGSELECTCARDSCRSP_OFFSET))(this, rsp);
		}

		::RPG::Client::Promises::IPromise* RequestSellHandCard(::RPG::Client::ChenLingBattle::HandCard* handCard)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::ChenLingBattle::HandCard*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE_REQUESTSELLHANDCARD_OFFSET))(this, handCard);
		}

		::RPG::Client::Promises::IPromise* _OnChenLingSellHandCardScRsp(::Class_1_D17272E82AE804C2_164* rsp)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Class_1_D17272E82AE804C2_164*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE__ONCHENLINGSELLHANDCARDSCRSP_OFFSET))(this, rsp);
		}

		::System::Void EnterPreviewMode(::RPG::Client::ChenLingBattle::PreviewSnapshot* snapshot)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::PreviewSnapshot*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE_ENTERPREVIEWMODE_OFFSET))(this, snapshot);
		}

		::System::Void ExitPreviewMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE_EXITPREVIEWMODE_OFFSET))(this);
		}

		::System::Void FinishRefreshCard(::RPG::Client::ChenLingBattle::SelectCardPhaseInfo* newCardInfo)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::SelectCardPhaseInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE_FINISHREFRESHCARD_OFFSET))(this, newCardInfo);
		}

		::RPG::Client::Promises::IPromise* _SelectCard_b__5_0()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE__SELECTCARD_B__5_0_OFFSET))(this);
		}
	};
}
