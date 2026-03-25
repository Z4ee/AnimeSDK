#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChenLingBattle/GamePhase.h"

class Class_1_F65FD1783A40C6D8;
class Class_1_FA4F4A67B1C04320_161;
class Class_1_FA4F4A67B1C04320_167;
namespace RPG::Client::ChenLingBattle { class PreviewSnapshot; }
namespace RPG::Client::ChenLingBattle { class ShopPreviewSnapshot; }
namespace RPG::Client::ChenLingBattle { class ShopRefreshInfo; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHENLINGBATTLE_SPECIALSHOPPHASE_ENTERPREVIEWMODE_OFFSET UNITYSDK_OFFSET(0x9349390)
#define RPG_CLIENT_CHENLINGBATTLE_SPECIALSHOPPHASE_EXITPREVIEWMODE_OFFSET UNITYSDK_OFFSET(0x9349560)
#define RPG_CLIENT_CHENLINGBATTLE_SPECIALSHOPPHASE_FINISHREFRESHSHOP_OFFSET UNITYSDK_OFFSET(0x9349E10)
#define RPG_CLIENT_CHENLINGBATTLE_SPECIALSHOPPHASE_ONENTER_OFFSET UNITYSDK_OFFSET(0x9348C10)
#define RPG_CLIENT_CHENLINGBATTLE_SPECIALSHOPPHASE_ONLEAVE_OFFSET UNITYSDK_OFFSET(0x93491F0)
#define RPG_CLIENT_CHENLINGBATTLE_SPECIALSHOPPHASE_REQUESTBUYSHOPITEM_OFFSET UNITYSDK_OFFSET(0x9349E60)
#define RPG_CLIENT_CHENLINGBATTLE_SPECIALSHOPPHASE_REQUESTFINISHSHOP_OFFSET UNITYSDK_OFFSET(0x934A390)
#define RPG_CLIENT_CHENLINGBATTLE_SPECIALSHOPPHASE_REQUESTREFRESHSHOP_OFFSET UNITYSDK_OFFSET(0x93499B0)
#define RPG_CLIENT_CHENLINGBATTLE_SPECIALSHOPPHASE_SENDREFRESHSHOPMESSAGE_OFFSET UNITYSDK_OFFSET(0x9349890)
#define RPG_CLIENT_CHENLINGBATTLE_SPECIALSHOPPHASE__CTOR_OFFSET UNITYSDK_OFFSET(0x9348C00)
#define RPG_CLIENT_CHENLINGBATTLE_SPECIALSHOPPHASE__ONCHENLINGBUYSHOPITEMSCRSP_OFFSET UNITYSDK_OFFSET(0x934A040)
#define RPG_CLIENT_CHENLINGBATTLE_SPECIALSHOPPHASE__ONCHENLINGREFRESHSHOPSCRSP_OFFSET UNITYSDK_OFFSET(0x9349B90)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int SpecialShopPhase_TypeDefinitionIndex = 62086;

	class SpecialShopPhase : public ::RPG::Client::ChenLingBattle::GamePhase
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _RefreshCostList; // 0x18
		::RPG::Client::ChenLingBattle::ShopPreviewSnapshot* _PreviewSnapshot; // 0x20

		::System::Void _ctor(::Class_1_F65FD1783A40C6D8* phaseManager)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F65FD1783A40C6D8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SPECIALSHOPPHASE__CTOR_OFFSET))(this, phaseManager);
		}

		::RPG::Client::Promises::IPromise* OnEnter(::System::Object* param)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SPECIALSHOPPHASE_ONENTER_OFFSET))(this, param);
		}

		::RPG::Client::Promises::IPromise* OnLeave()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SPECIALSHOPPHASE_ONLEAVE_OFFSET))(this);
		}

		::System::Void EnterPreviewMode(::RPG::Client::ChenLingBattle::PreviewSnapshot* snapshot)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::PreviewSnapshot*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SPECIALSHOPPHASE_ENTERPREVIEWMODE_OFFSET))(this, snapshot);
		}

		::System::Void ExitPreviewMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SPECIALSHOPPHASE_EXITPREVIEWMODE_OFFSET))(this);
		}

		::System::Void SendRefreshShopMessage(::RPG::Client::ChenLingBattle::ShopRefreshInfo* refreshInfo)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ShopRefreshInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SPECIALSHOPPHASE_SENDREFRESHSHOPMESSAGE_OFFSET))(this, refreshInfo);
		}

		::RPG::Client::Promises::IPromise* RequestRefreshShop()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SPECIALSHOPPHASE_REQUESTREFRESHSHOP_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _OnChenLingRefreshShopScRsp(::Class_1_FA4F4A67B1C04320_161* rsp)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_161*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SPECIALSHOPPHASE__ONCHENLINGREFRESHSHOPSCRSP_OFFSET))(this, rsp);
		}

		::System::Void FinishRefreshShop(::RPG::Client::ChenLingBattle::ShopRefreshInfo* refreshInfo)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ShopRefreshInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SPECIALSHOPPHASE_FINISHREFRESHSHOP_OFFSET))(this, refreshInfo);
		}

		::RPG::Client::Promises::IPromise* RequestBuyShopItem(::System::UInt32 itemIndex)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SPECIALSHOPPHASE_REQUESTBUYSHOPITEM_OFFSET))(this, itemIndex);
		}

		::RPG::Client::Promises::IPromise* _OnChenLingBuyShopItemScRsp(::Class_1_FA4F4A67B1C04320_167* rsp)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_167*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SPECIALSHOPPHASE__ONCHENLINGBUYSHOPITEMSCRSP_OFFSET))(this, rsp);
		}

		::RPG::Client::Promises::IPromise* RequestFinishShop()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SPECIALSHOPPHASE_REQUESTFINISHSHOP_OFFSET))(this);
		}
	};
}
