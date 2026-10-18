#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BlindBox/Trade/BlindBoxTradeScope.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1359;
class Class_1_C086E47345F86771_3;
class Class_1_D17272E82AE804C2_175;
class Class_1_D17272E82AE804C2_176;
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client::BlindBox::Trade { class BlindBoxTradeOrderRepository; }
namespace RPG::Client::BlindBox::Trade { class BlindBoxTradePublishOrderFriendSettings; }
namespace RPG::Client::BlindBox::Trade { class IBlindBoxTradeOrder; }
namespace RPG::Client::Pet::BlindBox { class IBlindBoxPet; }
namespace RPG::Client::Pet::BlindBox { class IBlindBoxPetInstance; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }

#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE_CANCELPRIVATEORDERANDCHECK_OFFSET UNITYSDK_OFFSET(0xC88DE00)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE_CANCELPUBLICORDERANDCHECK_OFFSET UNITYSDK_OFFSET(0xC88E130)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE_CANCELPUBLICORDER_OFFSET UNITYSDK_OFFSET(0xC88D950)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE_CONFIRMCHANGEPRIVATEHIDDENORDER_OFFSET UNITYSDK_OFFSET(0xC88F520)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE_CONFIRMCHANGEPRIVATEORDERASSELLER_OFFSET UNITYSDK_OFFSET(0xC88F9F0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE_CONFIRMCHANGEPRIVATEORDER_OFFSET UNITYSDK_OFFSET(0xC88F110)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE_CONFIRMCHANGEPUBLICORDER_OFFSET UNITYSDK_OFFSET(0xC88D090)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE_CONFIRMPUBLICORDER_OFFSET UNITYSDK_OFFSET(0xC88D8D0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC88C490)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE_GRANTCOMPLETEDORDER_OFFSET UNITYSDK_OFFSET(0xC88E460)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE_PUBLISHPRIVATEHIDDENORDER_OFFSET UNITYSDK_OFFSET(0xC88ED90)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE_PUBLISHPRIVATEORDER_OFFSET UNITYSDK_OFFSET(0xC88E7F0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE_PUBLISHPUBLICORDER_OFFSET UNITYSDK_OFFSET(0xC88C690)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE_REJECTPRIVATEORDERASSELLER_OFFSET UNITYSDK_OFFSET(0xC88FDB0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE_REJECTPRIVATEORDER_OFFSET UNITYSDK_OFFSET(0xC88FFA0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE_WITHDRAWORDER_OFFSET UNITYSDK_OFFSET(0xC88D9D0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE__ADDCONFIRMORDERALWAYSRSPHANDLERS_OFFSET UNITYSDK_OFFSET(0xC88C330)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE__CONFIRMCHANGEPRIVATEORDER_OFFSET UNITYSDK_OFFSET(0xC88F180)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE__CREATEFAILEDPROMISE_OFFSET UNITYSDK_OFFSET(0xC88CE60)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE__CREATENULLITEMDISPLAYPROMISE_OFFSET UNITYSDK_OFFSET(0xC88D720)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE__CREATEREWARDDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0xC890190)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0xC88C2C0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE__GETRECEIVEDPETFROMORDER_OFFSET UNITYSDK_OFFSET(0xC8909F0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE__HANDLEPRIVATEORDERPUBLISHRESPONSE_OFFSET UNITYSDK_OFFSET(0xC890460)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE__ISINVALIDTRADEORDERRETCODE_OFFSET UNITYSDK_OFFSET(0xC890980)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE__ISVALIDNORMALORDERPET_OFFSET UNITYSDK_OFFSET(0xC88CE00)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE__ISVALIDNORMALORDER_OFFSET UNITYSDK_OFFSET(0xC88D450)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE__ONCONFIRMORDERRSP_OFFSET UNITYSDK_OFFSET(0xC890790)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE__ONPUBLISHPRIVATEORDERRSP_OFFSET UNITYSDK_OFFSET(0xC890680)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE__PUBLISHPUBLICORDER_B__4_1_OFFSET UNITYSDK_OFFSET(0xC890D80)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE__REJECTPRIVATEORDERASSELLER_B__18_0_OFFSET UNITYSDK_OFFSET(0xC890DB0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE__REJECTPRIVATEORDER_B__19_0_OFFSET UNITYSDK_OFFSET(0xC890DE0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE__REMOVECONFIRMORDERALWAYSRSPHANDLERS_OFFSET UNITYSDK_OFFSET(0xC88C530)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE__TRYBLOCKBYPLAYERFORBID_OFFSET UNITYSDK_OFFSET(0xC88D7C0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE__TRYGETCONFIRMORDERFAILEDRETCODE_OFFSET UNITYSDK_OFFSET(0xC8908F0)

namespace RPG::Client::BlindBox::Trade
{
	inline static constexpr unsigned int BlindBoxTradeFlowService_TypeDefinitionIndex = 74892;

	class BlindBoxTradeFlowService : public ::System::Object
	{
	public:
		::RPG::Client::BlindBox::Trade::BlindBoxTradeOrderRepository* _OrderRepository; // 0x10
		::RPG::Client::BlindBox::Trade::BlindBoxTradePublishOrderFriendSettings* _FriendSettings; // 0x18
		::Class_0_16E4307DCC419505_1359* _NetworkService; // 0x20
		::System::UInt32 _LastPrivateOrderBuyerUid; // 0x28

		::System::Void _ctor(::Class_0_16E4307DCC419505_1359* a1, ::RPG::Client::BlindBox::Trade::BlindBoxTradeOrderRepository* a2, ::RPG::Client::BlindBox::Trade::BlindBoxTradePublishOrderFriendSettings* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1359*, ::RPG::Client::BlindBox::Trade::BlindBoxTradeOrderRepository*, ::RPG::Client::BlindBox::Trade::BlindBoxTradePublishOrderFriendSettings*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE_DISPOSE_OFFSET))(this);
		}

		::System::Void _AddConfirmOrderAlwaysRspHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE__ADDCONFIRMORDERALWAYSRSPHANDLERS_OFFSET))(this);
		}

		::System::Void _RemoveConfirmOrderAlwaysRspHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE__REMOVECONFIRMORDERALWAYSRSPHANDLERS_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* PublishPublicOrder(::RPG::Client::Pet::BlindBox::IBlindBoxPet* a1, ::RPG::Client::Pet::BlindBox::IBlindBoxPetInstance* a2, ::System::UInt32 a3)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID, ::RPG::Client::Pet::BlindBox::IBlindBoxPet*, ::RPG::Client::Pet::BlindBox::IBlindBoxPetInstance*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE_PUBLISHPUBLICORDER_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::Promises::IPromise_1<::RPG::Client::ItemDisplayData*>* ConfirmChangePublicOrder(::RPG::Client::BlindBox::Trade::IBlindBoxTradeOrder* a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID, ::RPG::Client::BlindBox::Trade::IBlindBoxTradeOrder*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE_CONFIRMCHANGEPUBLICORDER_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::Class_1_C086E47345F86771_3*>* ConfirmPublicOrder(::System::UInt64 a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::Class_1_C086E47345F86771_3*>*(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE_CONFIRMPUBLICORDER_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::Class_1_D17272E82AE804C2_175*>* CancelPublicOrder(::System::UInt64 a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::Class_1_D17272E82AE804C2_175*>*(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE_CANCELPUBLICORDER_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* WithdrawOrder(::RPG::Client::BlindBox::Trade::IBlindBoxTradeOrder* a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID, ::RPG::Client::BlindBox::Trade::IBlindBoxTradeOrder*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE_WITHDRAWORDER_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* CancelPublicOrderAndCheck(::System::UInt64 a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE_CANCELPUBLICORDERANDCHECK_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* CancelPrivateOrderAndCheck(::System::UInt64 a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE_CANCELPRIVATEORDERANDCHECK_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::RPG::Client::ItemDisplayData*>* GrantCompletedOrder(::RPG::Client::BlindBox::Trade::IBlindBoxTradeOrder* a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID, ::RPG::Client::BlindBox::Trade::IBlindBoxTradeOrder*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE_GRANTCOMPLETEDORDER_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* PublishPrivateOrder(::RPG::Client::Pet::BlindBox::IBlindBoxPet* a1, ::RPG::Client::Pet::BlindBox::IBlindBoxPetInstance* a2, ::System::UInt32 a3)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID, ::RPG::Client::Pet::BlindBox::IBlindBoxPet*, ::RPG::Client::Pet::BlindBox::IBlindBoxPetInstance*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE_PUBLISHPRIVATEORDER_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* PublishPrivateHiddenOrder(::RPG::Client::Pet::BlindBox::IBlindBoxPetInstance* a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID, ::RPG::Client::Pet::BlindBox::IBlindBoxPetInstance*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE_PUBLISHPRIVATEHIDDENORDER_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise_1<::RPG::Client::ItemDisplayData*>* ConfirmChangePrivateOrder(::RPG::Client::BlindBox::Trade::IBlindBoxTradeOrder* a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID, ::RPG::Client::BlindBox::Trade::IBlindBoxTradeOrder*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE_CONFIRMCHANGEPRIVATEORDER_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::RPG::Client::ItemDisplayData*>* ConfirmChangePrivateHiddenOrder(::RPG::Client::BlindBox::Trade::IBlindBoxTradeOrder* a1, ::RPG::Client::Pet::BlindBox::IBlindBoxPetInstance* a2)
		{
			return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID, ::RPG::Client::BlindBox::Trade::IBlindBoxTradeOrder*, ::RPG::Client::Pet::BlindBox::IBlindBoxPetInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE_CONFIRMCHANGEPRIVATEHIDDENORDER_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise_1<::RPG::Client::ItemDisplayData*>* _ConfirmChangePrivateOrder(::RPG::Client::BlindBox::Trade::IBlindBoxTradeOrder* a1, ::System::UInt64 a2)
		{
			return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID, ::RPG::Client::BlindBox::Trade::IBlindBoxTradeOrder*, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE__CONFIRMCHANGEPRIVATEORDER_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise_1<::RPG::Client::ItemDisplayData*>* ConfirmChangePrivateOrderAsSeller(::RPG::Client::BlindBox::Trade::IBlindBoxTradeOrder* a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID, ::RPG::Client::BlindBox::Trade::IBlindBoxTradeOrder*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE_CONFIRMCHANGEPRIVATEORDERASSELLER_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* RejectPrivateOrderAsSeller(::RPG::Client::BlindBox::Trade::IBlindBoxTradeOrder* a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID, ::RPG::Client::BlindBox::Trade::IBlindBoxTradeOrder*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE_REJECTPRIVATEORDERASSELLER_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* RejectPrivateOrder(::RPG::Client::BlindBox::Trade::IBlindBoxTradeOrder* a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID, ::RPG::Client::BlindBox::Trade::IBlindBoxTradeOrder*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE_REJECTPRIVATEORDER_OFFSET))(this, a1);
		}

		static ::RPG::Client::ItemDisplayData* _CreateRewardDisplayData(::RPG::Client::Pet::BlindBox::IBlindBoxPet* a1, ::System::UInt64 a2)
		{
			return ((::RPG::Client::ItemDisplayData*(*)(::RPG::Client::Pet::BlindBox::IBlindBoxPet*, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE__CREATEREWARDDISPLAYDATA_OFFSET))(a1, a2);
		}

		::System::Boolean _HandlePrivateOrderPublishResponse(::Class_1_D17272E82AE804C2_176* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_176*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE__HANDLEPRIVATEORDERPUBLISHRESPONSE_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean _TryBlockByPlayerForbid(::RPG::Client::BlindBox::Trade::BlindBoxTradeScope a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::BlindBox::Trade::BlindBoxTradeScope))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE__TRYBLOCKBYPLAYERFORBID_OFFSET))(a1);
		}

		static ::System::Boolean _IsValidNormalOrder(::RPG::Client::BlindBox::Trade::IBlindBoxTradeOrder* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::BlindBox::Trade::IBlindBoxTradeOrder*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE__ISVALIDNORMALORDER_OFFSET))(a1);
		}

		static ::System::Boolean _IsValidNormalOrderPet(::RPG::Client::Pet::BlindBox::IBlindBoxPet* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::Pet::BlindBox::IBlindBoxPet*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE__ISVALIDNORMALORDERPET_OFFSET))(a1);
		}

		static ::RPG::Client::Promises::IPromise_1<::System::Boolean>* _CreateFailedPromise()
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE__CREATEFAILEDPROMISE_OFFSET))();
		}

		static ::RPG::Client::Promises::IPromise_1<::RPG::Client::ItemDisplayData*>* _CreateNullItemDisplayPromise()
		{
			return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::ItemDisplayData*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE__CREATENULLITEMDISPLAYPROMISE_OFFSET))();
		}

		::System::Void _OnPublishPrivateOrderRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE__ONPUBLISHPRIVATEORDERRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnConfirmOrderRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE__ONCONFIRMORDERRSP_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean _TryGetConfirmOrderFailedRetcode(::System::Object* a1, ::System::UInt32& a2)
		{
			return ((::System::Boolean(*)(::System::Object*, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE__TRYGETCONFIRMORDERFAILEDRETCODE_OFFSET))(a1, a2);
		}

		static ::System::Boolean _IsInvalidTradeOrderRetcode(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE__ISINVALIDTRADEORDERRETCODE_OFFSET))(a1);
		}

		static ::RPG::Client::Pet::BlindBox::IBlindBoxPet* _GetReceivedPetFromOrder(::RPG::Client::BlindBox::Trade::IBlindBoxTradeOrder* a1)
		{
			return ((::RPG::Client::Pet::BlindBox::IBlindBoxPet*(*)(::RPG::Client::BlindBox::Trade::IBlindBoxTradeOrder*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE__GETRECEIVEDPETFROMORDER_OFFSET))(a1);
		}

		::System::Boolean _PublishPublicOrder_b__4_1(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE__PUBLISHPUBLICORDER_B__4_1_OFFSET))(this, a1);
		}

		::System::Boolean _RejectPrivateOrderAsSeller_b__18_0(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE__REJECTPRIVATEORDERASSELLER_B__18_0_OFFSET))(this, a1);
		}

		::System::Boolean _RejectPrivateOrder_b__19_0(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE__REJECTPRIVATEORDER_B__19_0_OFFSET))(this, a1);
		}
	};
}
