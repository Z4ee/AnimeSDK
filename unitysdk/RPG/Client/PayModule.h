#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7CF3F1C413CAE286.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/PayProductResult.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/TimeSpan.h"

namespace HoudiniEngineUnity { class JSONArray; }
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client { class Product; }
namespace RPG::Client { class RechargeItem; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PAYMODULE_CACHERECHARGEITEM_OFFSET UNITYSDK_OFFSET(0xC351370)
#define RPG_CLIENT_PAYMODULE_CLEARREFRESHITEMS_OFFSET UNITYSDK_OFFSET(0xC351200)
#define RPG_CLIENT_PAYMODULE_CONTAINSBATTLEPASSPRODUCT_OFFSET UNITYSDK_OFFSET(0xC353AA0)
#define RPG_CLIENT_PAYMODULE_CONTAINSPRODUCT_OFFSET UNITYSDK_OFFSET(0xC353A10)
#define RPG_CLIENT_PAYMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC351190)
#define RPG_CLIENT_PAYMODULE_FINISHREFRESHITEMS_OFFSET UNITYSDK_OFFSET(0xC352AE0)
#define RPG_CLIENT_PAYMODULE_GETPRODUCTSBYTYPE_OFFSET UNITYSDK_OFFSET(0xC353E50)
#define RPG_CLIENT_PAYMODULE_GETPRODUCTS_OFFSET UNITYSDK_OFFSET(0xC353190)
#define RPG_CLIENT_PAYMODULE_GET_ALLHCOINPRODUCTS_OFFSET UNITYSDK_OFFSET(0xC354AD0)
#define RPG_CLIENT_PAYMODULE_GET_ALLPRODUCTS_OFFSET UNITYSDK_OFFSET(0xC353990)
#define RPG_CLIENT_PAYMODULE_GET_GIFTCOINCURVERSION_OFFSET UNITYSDK_OFFSET(0xC355070)
#define RPG_CLIENT_PAYMODULE_GET_INANDROIDSUSPENDPAY_OFFSET UNITYSDK_OFFSET(0xC3554F0)
#define RPG_CLIENT_PAYMODULE_GET_ISLASTVERSIONBOUGHTGIFTCOIN_OFFSET UNITYSDK_OFFSET(0xC355020)
#define RPG_CLIENT_PAYMODULE_GET_ISMONTHCARDLIMITPURCHASE_OFFSET UNITYSDK_OFFSET(0xC354F70)
#define RPG_CLIENT_PAYMODULE_GET_ISPRODUCTDATAREADY_OFFSET UNITYSDK_OFFSET(0xC354F30)
#define RPG_CLIENT_PAYMODULE_GET_ISPRODUCTREQUEST_OFFSET UNITYSDK_OFFSET(0xC354F50)
#define RPG_CLIENT_PAYMODULE_GET_MONTHCARDPRODUCT_OFFSET UNITYSDK_OFFSET(0xC354D10)
#define RPG_CLIENT_PAYMODULE_GET_MONTHCARDREMAINTIME_OFFSET UNITYSDK_OFFSET(0xC3524A0)
#define RPG_CLIENT_PAYMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xC351050)
#define RPG_CLIENT_PAYMODULE_ISPAYOPEN_OFFSET UNITYSDK_OFFSET(0xC353FE0)
#define RPG_CLIENT_PAYMODULE_ISRECHARGEFORBIDDEN_OFFSET UNITYSDK_OFFSET(0xC3540C0)
#define RPG_CLIENT_PAYMODULE_ONCONFIRMRECEIVERECHARGEREWARD_OFFSET UNITYSDK_OFFSET(0xC351240)
#define RPG_CLIENT_PAYMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xC352AA0)
#define RPG_CLIENT_PAYMODULE_PAY_1_OFFSET UNITYSDK_OFFSET(0xC354200)
#define RPG_CLIENT_PAYMODULE_PAY_OFFSET UNITYSDK_OFFSET(0xC354190)
#define RPG_CLIENT_PAYMODULE_REQUESTPRODUCTITEMS_OFFSET UNITYSDK_OFFSET(0xC3529F0)
#define RPG_CLIENT_PAYMODULE_SET_GIFTCOINCURVERSION_OFFSET UNITYSDK_OFFSET(0xC355080)
#define RPG_CLIENT_PAYMODULE_SET_INANDROIDSUSPENDPAY_OFFSET UNITYSDK_OFFSET(0xC354A80)
#define RPG_CLIENT_PAYMODULE_SET_ISPRODUCTDATAREADY_OFFSET UNITYSDK_OFFSET(0xC354F40)
#define RPG_CLIENT_PAYMODULE_SET_ISPRODUCTREQUEST_OFFSET UNITYSDK_OFFSET(0xC354F60)
#define RPG_CLIENT_PAYMODULE_TRYGETPRODUCTBYTYPE_OFFSET UNITYSDK_OFFSET(0xC353CA0)
#define RPG_CLIENT_PAYMODULE_TRYGETPRODUCT_OFFSET UNITYSDK_OFFSET(0xC3537C0)
#define RPG_CLIENT_PAYMODULE_UPDATEPRODUCTS_OFFSET UNITYSDK_OFFSET(0xC3535B0)
#define RPG_CLIENT_PAYMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xC3513C0)
#define RPG_CLIENT_PAYMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xC351620)
#define RPG_CLIENT_PAYMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xC350FC0)
#define RPG_CLIENT_PAYMODULE__DOPAYPRODUCT_OFFSET UNITYSDK_OFFSET(0xC355090)
#define RPG_CLIENT_PAYMODULE__DOPAY_OFFSET UNITYSDK_OFFSET(0xC3545F0)
#define RPG_CLIENT_PAYMODULE__DOSHOWMONTHCARDAWARD_OFFSET UNITYSDK_OFFSET(0xC3522E0)
#define RPG_CLIENT_PAYMODULE__DOSHOWRECHARGEREWARD_OFFSET UNITYSDK_OFFSET(0xC3527F0)
#define RPG_CLIENT_PAYMODULE__EVENTTRACKINGPAYWITHCONFIRM_OFFSET UNITYSDK_OFFSET(0xC351320)
#define RPG_CLIENT_PAYMODULE__EVENTTRACKINGPAYWITHOUTCONFIRM_OFFSET UNITYSDK_OFFSET(0xC351E00)
#define RPG_CLIENT_PAYMODULE__ONEXCHANGEHCOINSCRSP_OFFSET UNITYSDK_OFFSET(0xC352080)
#define RPG_CLIENT_PAYMODULE__ONHIDELOADINGPAGE_OFFSET UNITYSDK_OFFSET(0xC353940)
#define RPG_CLIENT_PAYMODULE__ONMAINPAGESHOW_OFFSET UNITYSDK_OFFSET(0xC3538E0)
#define RPG_CLIENT_PAYMODULE__ONMONTHCARDITEMUSED_OFFSET UNITYSDK_OFFSET(0xC352140)
#define RPG_CLIENT_PAYMODULE__ONMONTHCARDREWARDNOTIFY_OFFSET UNITYSDK_OFFSET(0xC351E50)
#define RPG_CLIENT_PAYMODULE__ONPLAYERLOGINSUCCESS_OFFSET UNITYSDK_OFFSET(0xC3529A0)
#define RPG_CLIENT_PAYMODULE__ONQUERYPRODUCTINFOSCRSP_OFFSET UNITYSDK_OFFSET(0xC352BE0)
#define RPG_CLIENT_PAYMODULE__ONRECHARGESUCCNOTIFY_OFFSET UNITYSDK_OFFSET(0xC3518E0)
#define RPG_CLIENT_PAYMODULE__ONREQUESTTIMEOUT_OFFSET UNITYSDK_OFFSET(0xC352B90)
#define RPG_CLIENT_PAYMODULE__ONSTORYMODECHANGED_OFFSET UNITYSDK_OFFSET(0xC352210)
#define RPG_CLIENT_PAYMODULE__REQUESTPRODUCTSDETAILDATA_OFFSET UNITYSDK_OFFSET(0xC353470)
#define RPG_CLIENT_PAYMODULE__TRYSHOWMONTHCARDAWARD_OFFSET UNITYSDK_OFFSET(0xC351F60)
#define RPG_CLIENT_PAYMODULE__TRYSHOWRECHARGEREWARD_OFFSET UNITYSDK_OFFSET(0xC351CE0)
#define RPG_CLIENT_PAYMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC355580)
#define RPG_CLIENT_PAYMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xC355500)
#define RPG_CLIENT_PAYMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xC355650)
#define RPG_CLIENT_PAYMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xC355590)
#define RPG_CLIENT_PAYMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xC3555F0)

namespace RPG::Client
{
	inline static constexpr unsigned int PayModule_TypeDefinitionIndex = 62114;

	class PayModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::Product*>* _Products; // 0x10
		::RPG::Client::ItemDisplayData* _CacheMonthCardAward; // 0x18
		::RPG::Client::RechargeItem* _CacheRechargeItem; // 0x20
		::System::UInt32 _GiftCoinBoughtHistoryVersion; // 0x28
		::System::UInt32 _GiftCoinCurVersion_k__BackingField; // 0x2C
		::System::Boolean _ShouldNotifyMonthCardAward; // 0x30
		::System::UInt32 _MonthCardOutDateTime; // 0x34
		::System::UInt32 FullBlockID; // 0x38
		::System::UInt32 _MonthCardMaximumHoldingDays; // 0x3C
		::System::Boolean _IsProductRequest_k__BackingField; // 0x40
		::System::Boolean _IsProductDataReady_k__BackingField; // 0x41
		::System::Boolean inAndroidSuspendPay; // 0x42
		::System::Boolean _ShouldWaitRechargeSuccNotify; // 0x43

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnConfirmReceiveRechargeReward(::RPG::Client::RechargeItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RechargeItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE_ONCONFIRMRECEIVERECHARGEREWARD_OFFSET))(this, a1);
		}

		::System::Void CacheReChargeItem(::RPG::Client::RechargeItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RechargeItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE_CACHERECHARGEITEM_OFFSET))(this, a1);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnRechargeSuccNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE__ONRECHARGESUCCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnMonthCardRewardNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE__ONMONTHCARDREWARDNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnExchangeHcoinScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE__ONEXCHANGEHCOINSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnMonthCardItemUsed(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE__ONMONTHCARDITEMUSED_OFFSET))(this, a1);
		}

		::System::Void _OnStoryModeChanged(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE__ONSTORYMODECHANGED_OFFSET))(this, a1);
		}

		::System::Void _TryShowMonthCardAward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE__TRYSHOWMONTHCARDAWARD_OFFSET))(this);
		}

		::System::Void _DoShowMonthCardAward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE__DOSHOWMONTHCARDAWARD_OFFSET))(this);
		}

		::System::Void _TryShowRechargeReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE__TRYSHOWRECHARGEREWARD_OFFSET))(this);
		}

		::System::Void _DoShowRechargeReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE__DOSHOWRECHARGEREWARD_OFFSET))(this);
		}

		::System::Void _OnPlayerLoginSuccess(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE__ONPLAYERLOGINSUCCESS_OFFSET))(this, a1);
		}

		::System::Void RequestProductItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE_REQUESTPRODUCTITEMS_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void ClearRefreshItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE_CLEARREFRESHITEMS_OFFSET))(this);
		}

		::System::Void FinishRefreshItems(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE_FINISHREFRESHITEMS_OFFSET))(this, a1);
		}

		::System::Void _onRequestTimeOut()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE__ONREQUESTTIMEOUT_OFFSET))(this);
		}

		::System::Void _OnQueryProductInfoScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE__ONQUERYPRODUCTINFOSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _RequestProductsDetailData(::System::Action_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE__REQUESTPRODUCTSDETAILDATA_OFFSET))(this, a1);
		}

		::System::Void UpdateProducts(::HoudiniEngineUnity::JSONArray* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::JSONArray*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE_UPDATEPRODUCTS_OFFSET))(this, a1);
		}

		::System::Void _OnMainPageShow(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE__ONMAINPAGESHOW_OFFSET))(this, a1);
		}

		::System::Void _OnHideLoadingPage(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE__ONHIDELOADINGPAGE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::Product*>* GetProducts(::System::Collections::Generic::List_1<::RPG::Client::Product*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::Product*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::Product*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE_GETPRODUCTS_OFFSET))(this, a1);
		}

		::System::Boolean ContainsProduct(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE_CONTAINSPRODUCT_OFFSET))(this, a1);
		}

		::System::Boolean ContainsBattlePassProduct()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE_CONTAINSBATTLEPASSPRODUCT_OFFSET))(this);
		}

		::RPG::Client::Product* TryGetProduct(::System::String* a1)
		{
			return ((::RPG::Client::Product*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE_TRYGETPRODUCT_OFFSET))(this, a1);
		}

		::RPG::Client::Product* TryGetProductByType(::Enum_3_7CF3F1C413CAE286 a1)
		{
			return ((::RPG::Client::Product*(*)(::PVOID, ::Enum_3_7CF3F1C413CAE286))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE_TRYGETPRODUCTBYTYPE_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::Client::Product*>* GetProductsByType(::Enum_3_7CF3F1C413CAE286 a1)
		{
			return ((::Il2CppArray<::RPG::Client::Product*>*(*)(::PVOID, ::Enum_3_7CF3F1C413CAE286))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE_GETPRODUCTSBYTYPE_OFFSET))(this, a1);
		}

		::System::Boolean IsPayOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE_ISPAYOPEN_OFFSET))(this);
		}

		::System::Boolean IsRechargeForbidden()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE_ISRECHARGEFORBIDDEN_OFFSET))(this);
		}

		::System::Void Pay(::RPG::Client::Product* a1, ::System::Action_1<::RPG::Client::PayProductResult>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Product*, ::System::Action_1<::RPG::Client::PayProductResult>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE_PAY_OFFSET))(this, a1, a2);
		}

		::System::Void Pay_1(::System::String* a1, ::System::Action_1<::RPG::Client::PayProductResult>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::RPG::Client::PayProductResult>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE_PAY_1_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::Product*>* get_AllProducts()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::Product*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE_GET_ALLPRODUCTS_OFFSET))(this);
		}

		::System::Void _DoPay(::RPG::Client::Product* a1, ::System::Action_1<::RPG::Client::PayProductResult>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Product*, ::System::Action_1<::RPG::Client::PayProductResult>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE__DOPAY_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::RPG::Client::Product*>* get_AllHcoinProducts()
		{
			return ((::Il2CppArray<::RPG::Client::Product*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE_GET_ALLHCOINPRODUCTS_OFFSET))(this);
		}

		::RPG::Client::Product* get_MonthCardProduct()
		{
			return ((::RPG::Client::Product*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE_GET_MONTHCARDPRODUCT_OFFSET))(this);
		}

		::System::Boolean get_IsProductDataReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE_GET_ISPRODUCTDATAREADY_OFFSET))(this);
		}

		::System::Void set_IsProductDataReady(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE_SET_ISPRODUCTDATAREADY_OFFSET))(this, a1);
		}

		::System::Boolean get_IsProductRequest()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE_GET_ISPRODUCTREQUEST_OFFSET))(this);
		}

		::System::Void set_IsProductRequest(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE_SET_ISPRODUCTREQUEST_OFFSET))(this, a1);
		}

		::System::Nullable_1<::System::TimeSpan> get_MonthCardRemainTime()
		{
			return ((::System::Nullable_1<::System::TimeSpan>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE_GET_MONTHCARDREMAINTIME_OFFSET))(this);
		}

		::System::Boolean get_IsMonthCardLimitPurchase()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE_GET_ISMONTHCARDLIMITPURCHASE_OFFSET))(this);
		}

		::System::Boolean get_IsLastVersionBoughtGiftCoin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE_GET_ISLASTVERSIONBOUGHTGIFTCOIN_OFFSET))(this);
		}

		::System::UInt32 get_GiftCoinCurVersion()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE_GET_GIFTCOINCURVERSION_OFFSET))(this);
		}

		::System::Void set_GiftCoinCurVersion(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE_SET_GIFTCOINCURVERSION_OFFSET))(this, a1);
		}

		::System::Void _DoPayProduct(::RPG::Client::Product* a1, ::System::Action_1<::RPG::Client::PayProductResult>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Product*, ::System::Action_1<::RPG::Client::PayProductResult>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE__DOPAYPRODUCT_OFFSET))(this, a1, a2);
		}

		::System::Void _EventTrackingPayWithConfirm(::RPG::Client::RechargeItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RechargeItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE__EVENTTRACKINGPAYWITHCONFIRM_OFFSET))(this, a1);
		}

		::System::Void _EventTrackingPayWithoutConfirm(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE__EVENTTRACKINGPAYWITHOUTCONFIRM_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_InAndroidSuspendPay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE_GET_INANDROIDSUSPENDPAY_OFFSET))(this);
		}

		::System::Void set_InAndroidSuspendPay(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE_SET_INANDROIDSUSPENDPAY_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET))(this);
		}
	};
}
