#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChenLingBattle/GamePhase.h"

class Class_1_CE84D8E232AFC277;
class Class_1_D17272E82AE804C2_195;
class Class_1_D17272E82AE804C2_199;
class Class_1_D17272E82AE804C2_205;
class Class_1_D17272E82AE804C2_208;
namespace RPG::Client::ChenLingBattle { class HandCard; }
namespace RPG::Client::ChenLingBattle { class PreviewSnapshot; }
namespace RPG::Client::ChenLingBattle { class ShopPreviewSnapshot; }
namespace RPG::Client::ChenLingBattle { class ShopRefreshInfo; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }

#define RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE_ENTERPREVIEWMODE_OFFSET UNITYSDK_OFFSET(0xCB12640)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE_EXITPREVIEWMODE_OFFSET UNITYSDK_OFFSET(0xCB12830)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE_FINISHREFRESHSHOP_OFFSET UNITYSDK_OFFSET(0xCB131A0)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE_ONENTER_OFFSET UNITYSDK_OFFSET(0xCB11DA0)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE_ONLEAVE_OFFSET UNITYSDK_OFFSET(0xCB124A0)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE_REQUESTBUYSHOPITEM_OFFSET UNITYSDK_OFFSET(0xCB131F0)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE_REQUESTFINISHSHOP_OFFSET UNITYSDK_OFFSET(0xCB13760)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE_REQUESTREFRESHSHOP_OFFSET UNITYSDK_OFFSET(0xCB12D00)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE_REQUESTSELLHANDCARD_OFFSET UNITYSDK_OFFSET(0xCB13C90)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE_SENDREFRESHSHOPMESSAGE_OFFSET UNITYSDK_OFFSET(0xCB12BA0)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE__CTOR_OFFSET UNITYSDK_OFFSET(0xCB11D90)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE__ONCHENLINGBUYSHOPITEMSCRSP_OFFSET UNITYSDK_OFFSET(0xCB13410)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE__ONCHENLINGFINISHSHOPSCRSP_OFFSET UNITYSDK_OFFSET(0xCB13A80)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE__ONCHENLINGREFRESHSHOPSCRSP_OFFSET UNITYSDK_OFFSET(0xCB12F20)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE__ONCHENLINGSELLHANDCARDSCRSP_OFFSET UNITYSDK_OFFSET(0xCB13EC0)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE__REQUESTFINISHSHOP_B__11_0_OFFSET UNITYSDK_OFFSET(0xCB14150)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int ShopPhase_TypeDefinitionIndex = 75844;

	class ShopPhase : public ::RPG::Client::ChenLingBattle::GamePhase
	{
	public:
		::RPG::Client::ChenLingBattle::ShopPreviewSnapshot* _PreviewSnapshot; // 0x18

		::System::Void _ctor(::Class_1_CE84D8E232AFC277* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_CE84D8E232AFC277*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE__CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* OnEnter(::System::Object* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE_ONENTER_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* OnLeave()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE_ONLEAVE_OFFSET))(this);
		}

		::System::Void EnterPreviewMode(::RPG::Client::ChenLingBattle::PreviewSnapshot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::PreviewSnapshot*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE_ENTERPREVIEWMODE_OFFSET))(this, a1);
		}

		::System::Void ExitPreviewMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE_EXITPREVIEWMODE_OFFSET))(this);
		}

		::System::Void SendRefreshShopMessage(::RPG::Client::ChenLingBattle::ShopRefreshInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ShopRefreshInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE_SENDREFRESHSHOPMESSAGE_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* RequestRefreshShop()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE_REQUESTREFRESHSHOP_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _OnChenLingRefreshShopScRsp(::Class_1_D17272E82AE804C2_199* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Class_1_D17272E82AE804C2_199*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE__ONCHENLINGREFRESHSHOPSCRSP_OFFSET))(this, a1);
		}

		::System::Void FinishRefreshShop(::RPG::Client::ChenLingBattle::ShopRefreshInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ShopRefreshInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE_FINISHREFRESHSHOP_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* RequestBuyShopItem(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE_REQUESTBUYSHOPITEM_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _OnChenLingBuyShopItemScRsp(::Class_1_D17272E82AE804C2_205* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Class_1_D17272E82AE804C2_205*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE__ONCHENLINGBUYSHOPITEMSCRSP_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* RequestFinishShop()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE_REQUESTFINISHSHOP_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _OnChenLingFinishShopScRsp(::Class_1_D17272E82AE804C2_208* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Class_1_D17272E82AE804C2_208*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE__ONCHENLINGFINISHSHOPSCRSP_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* RequestSellHandCard(::RPG::Client::ChenLingBattle::HandCard* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::ChenLingBattle::HandCard*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE_REQUESTSELLHANDCARD_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _OnChenLingSellHandCardScRsp(::Class_1_D17272E82AE804C2_195* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Class_1_D17272E82AE804C2_195*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE__ONCHENLINGSELLHANDCARDSCRSP_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _RequestFinishShop_b__11_0()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE__REQUESTFINISHSHOP_B__11_0_OFFSET))(this);
		}
	};
}
