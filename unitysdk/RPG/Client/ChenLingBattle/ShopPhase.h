#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChenLingBattle/GamePhase.h"

class Class_1_D17272E82AE804C2_164;
class Class_1_D17272E82AE804C2_168;
class Class_1_D17272E82AE804C2_174;
class Class_1_D17272E82AE804C2_177;
class Class_1_F65FD1783A40C6D8;
namespace RPG::Client::ChenLingBattle { class HandCard; }
namespace RPG::Client::ChenLingBattle { class PreviewSnapshot; }
namespace RPG::Client::ChenLingBattle { class ShopPreviewSnapshot; }
namespace RPG::Client::ChenLingBattle { class ShopRefreshInfo; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }

#define RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE_ENTERPREVIEWMODE_OFFSET UNITYSDK_OFFSET(0x9FAFD60)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE_EXITPREVIEWMODE_OFFSET UNITYSDK_OFFSET(0x9FAFF30)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE_FINISHREFRESHSHOP_OFFSET UNITYSDK_OFFSET(0x9FB07E0)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE_ONENTER_OFFSET UNITYSDK_OFFSET(0x9FAF5D0)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE_ONLEAVE_OFFSET UNITYSDK_OFFSET(0x9FAFBC0)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE_REQUESTBUYSHOPITEM_OFFSET UNITYSDK_OFFSET(0x9FB0830)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE_REQUESTFINISHSHOP_OFFSET UNITYSDK_OFFSET(0x9FB0D60)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE_REQUESTREFRESHSHOP_OFFSET UNITYSDK_OFFSET(0x9FB0380)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE_REQUESTSELLHANDCARD_OFFSET UNITYSDK_OFFSET(0x9FB1220)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE_SENDREFRESHSHOPMESSAGE_OFFSET UNITYSDK_OFFSET(0x9FB0260)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE__CTOR_OFFSET UNITYSDK_OFFSET(0x9FAF5C0)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE__ONCHENLINGBUYSHOPITEMSCRSP_OFFSET UNITYSDK_OFFSET(0x9FB0A10)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE__ONCHENLINGFINISHSHOPSCRSP_OFFSET UNITYSDK_OFFSET(0x9FB1010)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE__ONCHENLINGREFRESHSHOPSCRSP_OFFSET UNITYSDK_OFFSET(0x9FB0560)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE__ONCHENLINGSELLHANDCARDSCRSP_OFFSET UNITYSDK_OFFSET(0x9FB1410)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE__REQUESTFINISHSHOP_B__11_0_OFFSET UNITYSDK_OFFSET(0x9FB16A0)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int ShopPhase_TypeDefinitionIndex = 70082;

	class ShopPhase : public ::RPG::Client::ChenLingBattle::GamePhase
	{
	public:
		::RPG::Client::ChenLingBattle::ShopPreviewSnapshot* _PreviewSnapshot; // 0x18

		::System::Void _ctor(::Class_1_F65FD1783A40C6D8* phaseManager)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F65FD1783A40C6D8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE__CTOR_OFFSET))(this, phaseManager);
		}

		::RPG::Client::Promises::IPromise* OnEnter(::System::Object* param)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE_ONENTER_OFFSET))(this, param);
		}

		::RPG::Client::Promises::IPromise* OnLeave()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE_ONLEAVE_OFFSET))(this);
		}

		::System::Void EnterPreviewMode(::RPG::Client::ChenLingBattle::PreviewSnapshot* snapshot)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::PreviewSnapshot*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE_ENTERPREVIEWMODE_OFFSET))(this, snapshot);
		}

		::System::Void ExitPreviewMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE_EXITPREVIEWMODE_OFFSET))(this);
		}

		::System::Void SendRefreshShopMessage(::RPG::Client::ChenLingBattle::ShopRefreshInfo* refreshInfo)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ShopRefreshInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE_SENDREFRESHSHOPMESSAGE_OFFSET))(this, refreshInfo);
		}

		::RPG::Client::Promises::IPromise* RequestRefreshShop()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE_REQUESTREFRESHSHOP_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _OnChenLingRefreshShopScRsp(::Class_1_D17272E82AE804C2_168* rsp)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Class_1_D17272E82AE804C2_168*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE__ONCHENLINGREFRESHSHOPSCRSP_OFFSET))(this, rsp);
		}

		::System::Void FinishRefreshShop(::RPG::Client::ChenLingBattle::ShopRefreshInfo* refreshInfo)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ShopRefreshInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE_FINISHREFRESHSHOP_OFFSET))(this, refreshInfo);
		}

		::RPG::Client::Promises::IPromise* RequestBuyShopItem(::System::UInt32 itemIndex)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE_REQUESTBUYSHOPITEM_OFFSET))(this, itemIndex);
		}

		::RPG::Client::Promises::IPromise* _OnChenLingBuyShopItemScRsp(::Class_1_D17272E82AE804C2_174* rsp)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Class_1_D17272E82AE804C2_174*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE__ONCHENLINGBUYSHOPITEMSCRSP_OFFSET))(this, rsp);
		}

		::RPG::Client::Promises::IPromise* RequestFinishShop()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE_REQUESTFINISHSHOP_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _OnChenLingFinishShopScRsp(::Class_1_D17272E82AE804C2_177* rsp)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Class_1_D17272E82AE804C2_177*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE__ONCHENLINGFINISHSHOPSCRSP_OFFSET))(this, rsp);
		}

		::RPG::Client::Promises::IPromise* RequestSellHandCard(::RPG::Client::ChenLingBattle::HandCard* handCard)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::ChenLingBattle::HandCard*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE_REQUESTSELLHANDCARD_OFFSET))(this, handCard);
		}

		::RPG::Client::Promises::IPromise* _OnChenLingSellHandCardScRsp(::Class_1_D17272E82AE804C2_164* rsp)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Class_1_D17272E82AE804C2_164*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE__ONCHENLINGSELLHANDCARDSCRSP_OFFSET))(this, rsp);
		}

		::RPG::Client::Promises::IPromise* _RequestFinishShop_b__11_0()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE__REQUESTFINISHSHOP_B__11_0_OFFSET))(this);
		}
	};
}
