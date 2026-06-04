#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChenLingBattle/GamePhase.h"

class Class_1_CE84D8E232AFC277;
class Class_1_D17272E82AE804C2_174;
class Class_1_D17272E82AE804C2_180;
namespace RPG::Client::ChenLingBattle { class PreviewSnapshot; }
namespace RPG::Client::ChenLingBattle { class ShopPreviewSnapshot; }
namespace RPG::Client::ChenLingBattle { class ShopRefreshInfo; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHENLINGBATTLE_SPECIALSHOPPHASE_ENTERPREVIEWMODE_OFFSET UNITYSDK_OFFSET(0xB5D15B0)
#define RPG_CLIENT_CHENLINGBATTLE_SPECIALSHOPPHASE_EXITPREVIEWMODE_OFFSET UNITYSDK_OFFSET(0xB5D17A0)
#define RPG_CLIENT_CHENLINGBATTLE_SPECIALSHOPPHASE_FINISHREFRESHSHOP_OFFSET UNITYSDK_OFFSET(0xB5D2040)
#define RPG_CLIENT_CHENLINGBATTLE_SPECIALSHOPPHASE_ONENTER_OFFSET UNITYSDK_OFFSET(0xB5D0EA0)
#define RPG_CLIENT_CHENLINGBATTLE_SPECIALSHOPPHASE_ONLEAVE_OFFSET UNITYSDK_OFFSET(0xB5D1410)
#define RPG_CLIENT_CHENLINGBATTLE_SPECIALSHOPPHASE_REQUESTBUYSHOPITEM_OFFSET UNITYSDK_OFFSET(0xB5D2090)
#define RPG_CLIENT_CHENLINGBATTLE_SPECIALSHOPPHASE_REQUESTFINISHSHOP_OFFSET UNITYSDK_OFFSET(0xB5D2600)
#define RPG_CLIENT_CHENLINGBATTLE_SPECIALSHOPPHASE_REQUESTREFRESHSHOP_OFFSET UNITYSDK_OFFSET(0xB5D1BA0)
#define RPG_CLIENT_CHENLINGBATTLE_SPECIALSHOPPHASE_SENDREFRESHSHOPMESSAGE_OFFSET UNITYSDK_OFFSET(0xB5D1A80)
#define RPG_CLIENT_CHENLINGBATTLE_SPECIALSHOPPHASE__CTOR_OFFSET UNITYSDK_OFFSET(0xB5D0E90)
#define RPG_CLIENT_CHENLINGBATTLE_SPECIALSHOPPHASE__ONCHENLINGBUYSHOPITEMSCRSP_OFFSET UNITYSDK_OFFSET(0xB5D22B0)
#define RPG_CLIENT_CHENLINGBATTLE_SPECIALSHOPPHASE__ONCHENLINGREFRESHSHOPSCRSP_OFFSET UNITYSDK_OFFSET(0xB5D1DC0)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int SpecialShopPhase_TypeDefinitionIndex = 70897;

	class SpecialShopPhase : public ::RPG::Client::ChenLingBattle::GamePhase
	{
	public:
		::RPG::Client::ChenLingBattle::ShopPreviewSnapshot* _PreviewSnapshot; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _RefreshCostList; // 0x20

		::System::Void _ctor(::Class_1_CE84D8E232AFC277* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_CE84D8E232AFC277*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SPECIALSHOPPHASE__CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* OnEnter(::System::Object* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SPECIALSHOPPHASE_ONENTER_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* OnLeave()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SPECIALSHOPPHASE_ONLEAVE_OFFSET))(this);
		}

		::System::Void EnterPreviewMode(::RPG::Client::ChenLingBattle::PreviewSnapshot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::PreviewSnapshot*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SPECIALSHOPPHASE_ENTERPREVIEWMODE_OFFSET))(this, a1);
		}

		::System::Void ExitPreviewMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SPECIALSHOPPHASE_EXITPREVIEWMODE_OFFSET))(this);
		}

		::System::Void SendRefreshShopMessage(::RPG::Client::ChenLingBattle::ShopRefreshInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ShopRefreshInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SPECIALSHOPPHASE_SENDREFRESHSHOPMESSAGE_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* RequestRefreshShop()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SPECIALSHOPPHASE_REQUESTREFRESHSHOP_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _OnChenLingRefreshShopScRsp(::Class_1_D17272E82AE804C2_174* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Class_1_D17272E82AE804C2_174*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SPECIALSHOPPHASE__ONCHENLINGREFRESHSHOPSCRSP_OFFSET))(this, a1);
		}

		::System::Void FinishRefreshShop(::RPG::Client::ChenLingBattle::ShopRefreshInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ShopRefreshInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SPECIALSHOPPHASE_FINISHREFRESHSHOP_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* RequestBuyShopItem(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SPECIALSHOPPHASE_REQUESTBUYSHOPITEM_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _OnChenLingBuyShopItemScRsp(::Class_1_D17272E82AE804C2_180* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Class_1_D17272E82AE804C2_180*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SPECIALSHOPPHASE__ONCHENLINGBUYSHOPITEMSCRSP_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* RequestFinishShop()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SPECIALSHOPPHASE_REQUESTFINISHSHOP_OFFSET))(this);
		}
	};
}
