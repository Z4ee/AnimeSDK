#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChenLingBattle/GamePhase.h"

class Class_1_F65FD1783A40C6D8;
class Class_1_FA4F4A67B1C04320_157;
class Class_1_FA4F4A67B1C04320_161;
class Class_1_FA4F4A67B1C04320_167;
class Class_1_FA4F4A67B1C04320_170;
namespace RPG::Client::ChenLingBattle { class HandCard; }
namespace RPG::Client::ChenLingBattle { class PreviewSnapshot; }
namespace RPG::Client::ChenLingBattle { class ShopPreviewSnapshot; }
namespace RPG::Client::ChenLingBattle { class ShopRefreshInfo; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }

#define RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE_ENTERPREVIEWMODE_OFFSET UNITYSDK_OFFSET(0x9342200)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE_EXITPREVIEWMODE_OFFSET UNITYSDK_OFFSET(0x93423D0)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE_FINISHREFRESHSHOP_OFFSET UNITYSDK_OFFSET(0x9342C80)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE_ONENTER_OFFSET UNITYSDK_OFFSET(0x9341A70)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE_ONLEAVE_OFFSET UNITYSDK_OFFSET(0x9342060)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE_REQUESTBUYSHOPITEM_OFFSET UNITYSDK_OFFSET(0x9342CD0)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE_REQUESTFINISHSHOP_OFFSET UNITYSDK_OFFSET(0x9343200)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE_REQUESTREFRESHSHOP_OFFSET UNITYSDK_OFFSET(0x9342820)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE_REQUESTSELLHANDCARD_OFFSET UNITYSDK_OFFSET(0x93436C0)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE_SENDREFRESHSHOPMESSAGE_OFFSET UNITYSDK_OFFSET(0x9342700)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE__CTOR_OFFSET UNITYSDK_OFFSET(0x9341A60)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE__ONCHENLINGBUYSHOPITEMSCRSP_OFFSET UNITYSDK_OFFSET(0x9342EB0)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE__ONCHENLINGFINISHSHOPSCRSP_OFFSET UNITYSDK_OFFSET(0x93434B0)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE__ONCHENLINGREFRESHSHOPSCRSP_OFFSET UNITYSDK_OFFSET(0x9342A00)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE__ONCHENLINGSELLHANDCARDSCRSP_OFFSET UNITYSDK_OFFSET(0x93438B0)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE__REQUESTFINISHSHOP_B__11_0_OFFSET UNITYSDK_OFFSET(0x9343B40)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int ShopPhase_TypeDefinitionIndex = 62083;

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

		::RPG::Client::Promises::IPromise* _OnChenLingRefreshShopScRsp(::Class_1_FA4F4A67B1C04320_161* rsp)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_161*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE__ONCHENLINGREFRESHSHOPSCRSP_OFFSET))(this, rsp);
		}

		::System::Void FinishRefreshShop(::RPG::Client::ChenLingBattle::ShopRefreshInfo* refreshInfo)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ShopRefreshInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE_FINISHREFRESHSHOP_OFFSET))(this, refreshInfo);
		}

		::RPG::Client::Promises::IPromise* RequestBuyShopItem(::System::UInt32 itemIndex)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE_REQUESTBUYSHOPITEM_OFFSET))(this, itemIndex);
		}

		::RPG::Client::Promises::IPromise* _OnChenLingBuyShopItemScRsp(::Class_1_FA4F4A67B1C04320_167* rsp)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_167*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE__ONCHENLINGBUYSHOPITEMSCRSP_OFFSET))(this, rsp);
		}

		::RPG::Client::Promises::IPromise* RequestFinishShop()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE_REQUESTFINISHSHOP_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _OnChenLingFinishShopScRsp(::Class_1_FA4F4A67B1C04320_170* rsp)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_170*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE__ONCHENLINGFINISHSHOPSCRSP_OFFSET))(this, rsp);
		}

		::RPG::Client::Promises::IPromise* RequestSellHandCard(::RPG::Client::ChenLingBattle::HandCard* handCard)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::ChenLingBattle::HandCard*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE_REQUESTSELLHANDCARD_OFFSET))(this, handCard);
		}

		::RPG::Client::Promises::IPromise* _OnChenLingSellHandCardScRsp(::Class_1_FA4F4A67B1C04320_157* rsp)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_157*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE__ONCHENLINGSELLHANDCARDSCRSP_OFFSET))(this, rsp);
		}

		::RPG::Client::Promises::IPromise* _RequestFinishShop_b__11_0()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE__REQUESTFINISHSHOP_B__11_0_OFFSET))(this);
		}
	};
}
