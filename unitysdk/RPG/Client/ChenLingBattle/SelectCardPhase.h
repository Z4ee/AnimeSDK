#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChenLingBattle/GamePhase.h"

class Class_1_CE84D8E232AFC277;
class Class_1_D17272E82AE804C2_195;
class Class_1_D17272E82AE804C2_197;
class Class_1_D17272E82AE804C2_201;
namespace RPG::Client::ChenLingBattle { class HandCard; }
namespace RPG::Client::ChenLingBattle { class PreviewSnapshot; }
namespace RPG::Client::ChenLingBattle { class SelectCardPhaseInfo; }
namespace RPG::Client::ChenLingBattle { class SelectCardPreviewSnapshot; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }

#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE_ENTERPREVIEWMODE_OFFSET UNITYSDK_OFFSET(0x1CC2DF30)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE_EXITPREVIEWMODE_OFFSET UNITYSDK_OFFSET(0x1CC2E120)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE_FINISHREFRESHCARD_OFFSET UNITYSDK_OFFSET(0x1CC2E500)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE_ONENTER_OFFSET UNITYSDK_OFFSET(0x1CC2C8F0)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE_ONLEAVE_OFFSET UNITYSDK_OFFSET(0x1CC2CF00)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE_REFRESHCARD_OFFSET UNITYSDK_OFFSET(0x1CC2D0A0)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE_REQUESTSELLHANDCARD_OFFSET UNITYSDK_OFFSET(0x1CC2DA70)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE_SELECTCARD_OFFSET UNITYSDK_OFFSET(0x1CC2D540)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC2C8E0)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE__ONCHENLINGREFRESHCARDSCRSP_OFFSET UNITYSDK_OFFSET(0x1CC2D2C0)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE__ONCHENLINGSELECTCARDSCRSP_OFFSET UNITYSDK_OFFSET(0x1CC2D860)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE__ONCHENLINGSELLHANDCARDSCRSP_OFFSET UNITYSDK_OFFSET(0x1CC2DCA0)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE__SELECTCARD_B__5_0_OFFSET UNITYSDK_OFFSET(0x1CC2E560)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int SelectCardPhase_TypeDefinitionIndex = 75836;

	class SelectCardPhase : public ::RPG::Client::ChenLingBattle::GamePhase
	{
	public:
		::RPG::Client::ChenLingBattle::SelectCardPreviewSnapshot* _PreviewSnapshot; // 0x18

		::System::Void _ctor(::Class_1_CE84D8E232AFC277* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_CE84D8E232AFC277*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE__CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* OnEnter(::System::Object* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE_ONENTER_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* OnLeave()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE_ONLEAVE_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* RefreshCard()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE_REFRESHCARD_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _OnChenLingRefreshCardScRsp(::Class_1_D17272E82AE804C2_197* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Class_1_D17272E82AE804C2_197*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE__ONCHENLINGREFRESHCARDSCRSP_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* SelectCard(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE_SELECTCARD_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _OnChenLingSelectCardScRsp(::Class_1_D17272E82AE804C2_201* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Class_1_D17272E82AE804C2_201*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE__ONCHENLINGSELECTCARDSCRSP_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* RequestSellHandCard(::RPG::Client::ChenLingBattle::HandCard* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::ChenLingBattle::HandCard*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE_REQUESTSELLHANDCARD_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _OnChenLingSellHandCardScRsp(::Class_1_D17272E82AE804C2_195* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Class_1_D17272E82AE804C2_195*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE__ONCHENLINGSELLHANDCARDSCRSP_OFFSET))(this, a1);
		}

		::System::Void EnterPreviewMode(::RPG::Client::ChenLingBattle::PreviewSnapshot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::PreviewSnapshot*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE_ENTERPREVIEWMODE_OFFSET))(this, a1);
		}

		::System::Void ExitPreviewMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE_EXITPREVIEWMODE_OFFSET))(this);
		}

		::System::Void FinishRefreshCard(::RPG::Client::ChenLingBattle::SelectCardPhaseInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::SelectCardPhaseInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE_FINISHREFRESHCARD_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _SelectCard_b__5_0()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE__SELECTCARD_B__5_0_OFFSET))(this);
		}
	};
}
