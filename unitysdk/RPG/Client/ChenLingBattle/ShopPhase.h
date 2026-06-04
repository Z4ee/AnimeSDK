#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChenLingBattle/GamePhase.h"

class Class_1_CE84D8E232AFC277;
class Class_1_D17272E82AE804C2_170;
class Class_1_D17272E82AE804C2_174;
class Class_1_D17272E82AE804C2_180;
class Class_1_D17272E82AE804C2_183;
namespace RPG::Client::ChenLingBattle { class HandCard; }
namespace RPG::Client::ChenLingBattle { class PreviewSnapshot; }
namespace RPG::Client::ChenLingBattle { class ShopPreviewSnapshot; }
namespace RPG::Client::ChenLingBattle { class ShopRefreshInfo; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }

#define RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE_ENTERPREVIEWMODE_OFFSET UNITYSDK_OFFSET(0xB5CA4D0)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE_EXITPREVIEWMODE_OFFSET UNITYSDK_OFFSET(0xB5CA6C0)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE_FINISHREFRESHSHOP_OFFSET UNITYSDK_OFFSET(0xB5CAF60)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE_ONENTER_OFFSET UNITYSDK_OFFSET(0xB5C9CC0)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE_ONLEAVE_OFFSET UNITYSDK_OFFSET(0xB5CA330)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE_REQUESTBUYSHOPITEM_OFFSET UNITYSDK_OFFSET(0xB5CAFB0)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE_REQUESTFINISHSHOP_OFFSET UNITYSDK_OFFSET(0xB5CB520)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE_REQUESTREFRESHSHOP_OFFSET UNITYSDK_OFFSET(0xB5CAAC0)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE_REQUESTSELLHANDCARD_OFFSET UNITYSDK_OFFSET(0xB5CBA50)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE_SENDREFRESHSHOPMESSAGE_OFFSET UNITYSDK_OFFSET(0xB5CA9A0)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE__CTOR_OFFSET UNITYSDK_OFFSET(0xB5C9CB0)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE__ONCHENLINGBUYSHOPITEMSCRSP_OFFSET UNITYSDK_OFFSET(0xB5CB1D0)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE__ONCHENLINGFINISHSHOPSCRSP_OFFSET UNITYSDK_OFFSET(0xB5CB840)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE__ONCHENLINGREFRESHSHOPSCRSP_OFFSET UNITYSDK_OFFSET(0xB5CACE0)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE__ONCHENLINGSELLHANDCARDSCRSP_OFFSET UNITYSDK_OFFSET(0xB5CBC80)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE__REQUESTFINISHSHOP_B__11_0_OFFSET UNITYSDK_OFFSET(0xB5CBF10)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int ShopPhase_TypeDefinitionIndex = 70894;

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

		::RPG::Client::Promises::IPromise* _OnChenLingRefreshShopScRsp(::Class_1_D17272E82AE804C2_174* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Class_1_D17272E82AE804C2_174*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE__ONCHENLINGREFRESHSHOPSCRSP_OFFSET))(this, a1);
		}

		::System::Void FinishRefreshShop(::RPG::Client::ChenLingBattle::ShopRefreshInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ShopRefreshInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE_FINISHREFRESHSHOP_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* RequestBuyShopItem(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE_REQUESTBUYSHOPITEM_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _OnChenLingBuyShopItemScRsp(::Class_1_D17272E82AE804C2_180* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Class_1_D17272E82AE804C2_180*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE__ONCHENLINGBUYSHOPITEMSCRSP_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* RequestFinishShop()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE_REQUESTFINISHSHOP_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _OnChenLingFinishShopScRsp(::Class_1_D17272E82AE804C2_183* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Class_1_D17272E82AE804C2_183*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE__ONCHENLINGFINISHSHOPSCRSP_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* RequestSellHandCard(::RPG::Client::ChenLingBattle::HandCard* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::ChenLingBattle::HandCard*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE_REQUESTSELLHANDCARD_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _OnChenLingSellHandCardScRsp(::Class_1_D17272E82AE804C2_170* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Class_1_D17272E82AE804C2_170*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE__ONCHENLINGSELLHANDCARDSCRSP_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _RequestFinishShop_b__11_0()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE__REQUESTFINISHSHOP_B__11_0_OFFSET))(this);
		}
	};
}
