#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7CED31C413C530F0.h"
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

#define RPG_CLIENT_PAYMODULE_CACHERECHARGEITEM_OFFSET UNITYSDK_OFFSET(0x9F1C7B0)
#define RPG_CLIENT_PAYMODULE_CLEARREFRESHITEMS_OFFSET UNITYSDK_OFFSET(0x9F1C640)
#define RPG_CLIENT_PAYMODULE_CONTAINSBATTLEPASSPRODUCT_OFFSET UNITYSDK_OFFSET(0x9F1E960)
#define RPG_CLIENT_PAYMODULE_CONTAINSPRODUCT_OFFSET UNITYSDK_OFFSET(0x9F1E8D0)
#define RPG_CLIENT_PAYMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9F1C5D0)
#define RPG_CLIENT_PAYMODULE_FINISHREFRESHITEMS_OFFSET UNITYSDK_OFFSET(0x9F1DB20)
#define RPG_CLIENT_PAYMODULE_GETPRODUCTSBYTYPE_OFFSET UNITYSDK_OFFSET(0x9F1EBF0)
#define RPG_CLIENT_PAYMODULE_GETPRODUCTS_OFFSET UNITYSDK_OFFSET(0x9F1E110)
#define RPG_CLIENT_PAYMODULE_GET_ALLHCOINPRODUCTS_OFFSET UNITYSDK_OFFSET(0x9F1F7D0)
#define RPG_CLIENT_PAYMODULE_GET_ALLPRODUCTS_OFFSET UNITYSDK_OFFSET(0x9F1E850)
#define RPG_CLIENT_PAYMODULE_GET_GIFTCOINCURVERSION_OFFSET UNITYSDK_OFFSET(0x9F1FBD0)
#define RPG_CLIENT_PAYMODULE_GET_INANDROIDSUSPENDPAY_OFFSET UNITYSDK_OFFSET(0x9F20040)
#define RPG_CLIENT_PAYMODULE_GET_ISLASTVERSIONBOUGHTGIFTCOIN_OFFSET UNITYSDK_OFFSET(0x9F1FB80)
#define RPG_CLIENT_PAYMODULE_GET_ISMONTHCARDLIMITPURCHASE_OFFSET UNITYSDK_OFFSET(0x9F1FAD0)
#define RPG_CLIENT_PAYMODULE_GET_ISPRODUCTDATAREADY_OFFSET UNITYSDK_OFFSET(0x9F1FA90)
#define RPG_CLIENT_PAYMODULE_GET_ISPRODUCTREQUEST_OFFSET UNITYSDK_OFFSET(0x9F1FAB0)
#define RPG_CLIENT_PAYMODULE_GET_MONTHCARDPRODUCT_OFFSET UNITYSDK_OFFSET(0x9F1F940)
#define RPG_CLIENT_PAYMODULE_GET_MONTHCARDREMAINTIME_OFFSET UNITYSDK_OFFSET(0x9F1D510)
#define RPG_CLIENT_PAYMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x9F1C490)
#define RPG_CLIENT_PAYMODULE_ISPAYOPEN_OFFSET UNITYSDK_OFFSET(0x9F1ECE0)
#define RPG_CLIENT_PAYMODULE_ISRECHARGEFORBIDDEN_OFFSET UNITYSDK_OFFSET(0x9F1EDC0)
#define RPG_CLIENT_PAYMODULE_ONCONFIRMRECEIVERECHARGEREWARD_OFFSET UNITYSDK_OFFSET(0x9F1C680)
#define RPG_CLIENT_PAYMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x9F1DAE0)
#define RPG_CLIENT_PAYMODULE_PAY_1_OFFSET UNITYSDK_OFFSET(0x9F1EF00)
#define RPG_CLIENT_PAYMODULE_PAY_OFFSET UNITYSDK_OFFSET(0x9F1EE90)
#define RPG_CLIENT_PAYMODULE_REQUESTPRODUCTITEMS_OFFSET UNITYSDK_OFFSET(0x9F1DA30)
#define RPG_CLIENT_PAYMODULE_SET_GIFTCOINCURVERSION_OFFSET UNITYSDK_OFFSET(0x9F1FBE0)
#define RPG_CLIENT_PAYMODULE_SET_INANDROIDSUSPENDPAY_OFFSET UNITYSDK_OFFSET(0x9F1F770)
#define RPG_CLIENT_PAYMODULE_SET_ISPRODUCTDATAREADY_OFFSET UNITYSDK_OFFSET(0x9F1FAA0)
#define RPG_CLIENT_PAYMODULE_SET_ISPRODUCTREQUEST_OFFSET UNITYSDK_OFFSET(0x9F1FAC0)
#define RPG_CLIENT_PAYMODULE_TRYGETPRODUCTBYTYPE_OFFSET UNITYSDK_OFFSET(0x9F1EAF0)
#define RPG_CLIENT_PAYMODULE_TRYGETPRODUCT_OFFSET UNITYSDK_OFFSET(0x9F1E6E0)
#define RPG_CLIENT_PAYMODULE_UPDATEPRODUCTS_OFFSET UNITYSDK_OFFSET(0x9F1E480)
#define RPG_CLIENT_PAYMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x9F1C800)
#define RPG_CLIENT_PAYMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9F1CA10)
#define RPG_CLIENT_PAYMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x9F1C400)
#define RPG_CLIENT_PAYMODULE__DOPAYPRODUCT_OFFSET UNITYSDK_OFFSET(0x9F1FBF0)
#define RPG_CLIENT_PAYMODULE__DOPAY_OFFSET UNITYSDK_OFFSET(0x9F1F2F0)
#define RPG_CLIENT_PAYMODULE__DOSHOWMONTHCARDAWARD_OFFSET UNITYSDK_OFFSET(0x9F1D350)
#define RPG_CLIENT_PAYMODULE__DOSHOWRECHARGEREWARD_OFFSET UNITYSDK_OFFSET(0x9F1D830)
#define RPG_CLIENT_PAYMODULE__EVENTTRACKINGPAYWITHCONFIRM_OFFSET UNITYSDK_OFFSET(0x9F1C760)
#define RPG_CLIENT_PAYMODULE__EVENTTRACKINGPAYWITHOUTCONFIRM_OFFSET UNITYSDK_OFFSET(0x9F1CEE0)
#define RPG_CLIENT_PAYMODULE__ONEXCHANGEHCOINSCRSP_OFFSET UNITYSDK_OFFSET(0x9F1D0F0)
#define RPG_CLIENT_PAYMODULE__ONHIDELOADINGPAGE_OFFSET UNITYSDK_OFFSET(0x9F1E800)
#define RPG_CLIENT_PAYMODULE__ONMAINPAGESHOW_OFFSET UNITYSDK_OFFSET(0x9F1E7A0)
#define RPG_CLIENT_PAYMODULE__ONMONTHCARDITEMUSED_OFFSET UNITYSDK_OFFSET(0x9F1D1B0)
#define RPG_CLIENT_PAYMODULE__ONMONTHCARDREWARDNOTIFY_OFFSET UNITYSDK_OFFSET(0x9F1CF30)
#define RPG_CLIENT_PAYMODULE__ONPLAYERLOGINSUCCESS_OFFSET UNITYSDK_OFFSET(0x9F1D9E0)
#define RPG_CLIENT_PAYMODULE__ONQUERYPRODUCTINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x9F1DC20)
#define RPG_CLIENT_PAYMODULE__ONRECHARGESUCCNOTIFY_OFFSET UNITYSDK_OFFSET(0x9F1CB30)
#define RPG_CLIENT_PAYMODULE__ONREQUESTTIMEOUT_OFFSET UNITYSDK_OFFSET(0x9F1DBD0)
#define RPG_CLIENT_PAYMODULE__ONSTORYMODECHANGED_OFFSET UNITYSDK_OFFSET(0x9F1D280)
#define RPG_CLIENT_PAYMODULE__REQUESTPRODUCTSDETAILDATA_OFFSET UNITYSDK_OFFSET(0x9F1E340)
#define RPG_CLIENT_PAYMODULE__TRYSHOWMONTHCARDAWARD_OFFSET UNITYSDK_OFFSET(0x9F1D000)
#define RPG_CLIENT_PAYMODULE__TRYSHOWRECHARGEREWARD_OFFSET UNITYSDK_OFFSET(0x9F1CDF0)
#define RPG_CLIENT_PAYMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9F200E0)
#define RPG_CLIENT_PAYMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x9F20050)
#define RPG_CLIENT_PAYMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x9F201B0)
#define RPG_CLIENT_PAYMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x9F200F0)
#define RPG_CLIENT_PAYMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9F20150)

namespace RPG::Client
{
	inline static constexpr unsigned int PayModule_TypeDefinitionIndex = 54027;

	class PayModule : public ::RPG::Client::BaseModule
	{
	public:
		::RPG::Client::RechargeItem* _CacheRechargeItem; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::Product*>* _Products; // 0x18
		::RPG::Client::ItemDisplayData* _CacheMonthCardAward; // 0x20
		::System::Boolean _ShouldNotifyMonthCardAward; // 0x28
		::System::Boolean _ShouldWaitRechargeSuccNotify; // 0x29
		::System::Boolean inAndroidSuspendPay; // 0x2A
		::System::Boolean _IsProductDataReady_k__BackingField; // 0x2B
		::System::Boolean _IsProductRequest_k__BackingField; // 0x2C
		::System::UInt32 _MonthCardMaximumHoldingDays; // 0x30
		::System::UInt32 _MonthCardOutDateTime; // 0x34
		::System::UInt32 _GiftCoinBoughtHistoryVersion; // 0x38
		::System::UInt32 _GiftCoinCurVersion_k__BackingField; // 0x3C
		::System::UInt32 FullBlockID; // 0x40

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

		::System::Void OnConfirmReceiveRechargeReward(::RPG::Client::RechargeItem* rechargeItem)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RechargeItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE_ONCONFIRMRECEIVERECHARGEREWARD_OFFSET))(this, rechargeItem);
		}

		::System::Void CacheReChargeItem(::RPG::Client::RechargeItem* item)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RechargeItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE_CACHERECHARGEITEM_OFFSET))(this, item);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnRechargeSuccNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE__ONRECHARGESUCCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnMonthCardRewardNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE__ONMONTHCARDREWARDNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnExchangeHcoinScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE__ONEXCHANGEHCOINSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnMonthCardItemUsed(::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE__ONMONTHCARDITEMUSED_OFFSET))(this, rspObject);
		}

		::System::Void _OnStoryModeChanged(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE__ONSTORYMODECHANGED_OFFSET))(this, obj);
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

		::System::Void _OnPlayerLoginSuccess(::System::Object* paramObj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE__ONPLAYERLOGINSUCCESS_OFFSET))(this, paramObj);
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

		::System::Void FinishRefreshItems(::System::Boolean succeed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE_FINISHREFRESHITEMS_OFFSET))(this, succeed);
		}

		::System::Void _onRequestTimeOut()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE__ONREQUESTTIMEOUT_OFFSET))(this);
		}

		::System::Void _OnQueryProductInfoScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE__ONQUERYPRODUCTINFOSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _RequestProductsDetailData(::System::Action_1<::System::Boolean>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE__REQUESTPRODUCTSDETAILDATA_OFFSET))(this, callback);
		}

		::System::Void UpdateProducts(::HoudiniEngineUnity::JSONArray* array)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::JSONArray*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE_UPDATEPRODUCTS_OFFSET))(this, array);
		}

		::System::Void _OnMainPageShow(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE__ONMAINPAGESHOW_OFFSET))(this, arg);
		}

		::System::Void _OnHideLoadingPage(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE__ONHIDELOADINGPAGE_OFFSET))(this, obj);
		}

		::System::Collections::Generic::List_1<::RPG::Client::Product*>* GetProducts(::System::Collections::Generic::List_1<::RPG::Client::Product*>* result)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::Product*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::Product*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE_GETPRODUCTS_OFFSET))(this, result);
		}

		::System::Boolean ContainsProduct(::System::String* productID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE_CONTAINSPRODUCT_OFFSET))(this, productID);
		}

		::System::Boolean ContainsBattlePassProduct()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE_CONTAINSBATTLEPASSPRODUCT_OFFSET))(this);
		}

		::RPG::Client::Product* TryGetProduct(::System::String* productID)
		{
			return ((::RPG::Client::Product*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE_TRYGETPRODUCT_OFFSET))(this, productID);
		}

		::RPG::Client::Product* TryGetProductByType(::Enum_3_7CED31C413C530F0 productType)
		{
			return ((::RPG::Client::Product*(*)(::PVOID, ::Enum_3_7CED31C413C530F0))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE_TRYGETPRODUCTBYTYPE_OFFSET))(this, productType);
		}

		::Il2CppArray<::RPG::Client::Product*>* GetProductsByType(::Enum_3_7CED31C413C530F0 productType)
		{
			return ((::Il2CppArray<::RPG::Client::Product*>*(*)(::PVOID, ::Enum_3_7CED31C413C530F0))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE_GETPRODUCTSBYTYPE_OFFSET))(this, productType);
		}

		::System::Boolean IsPayOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE_ISPAYOPEN_OFFSET))(this);
		}

		::System::Boolean IsRechargeForbidden()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE_ISRECHARGEFORBIDDEN_OFFSET))(this);
		}

		::System::Void Pay(::RPG::Client::Product* product, ::System::Action_1<::RPG::Client::PayProductResult>* onGetPayProductResult)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Product*, ::System::Action_1<::RPG::Client::PayProductResult>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE_PAY_OFFSET))(this, product, onGetPayProductResult);
		}

		::System::Void Pay_1(::System::String* productID, ::System::Action_1<::RPG::Client::PayProductResult>* onGetPayProductResult)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::RPG::Client::PayProductResult>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE_PAY_1_OFFSET))(this, productID, onGetPayProductResult);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::Product*>* get_AllProducts()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::Product*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE_GET_ALLPRODUCTS_OFFSET))(this);
		}

		::System::Void _DoPay(::RPG::Client::Product* product, ::System::Action_1<::RPG::Client::PayProductResult>* onGetPayProductResult)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Product*, ::System::Action_1<::RPG::Client::PayProductResult>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE__DOPAY_OFFSET))(this, product, onGetPayProductResult);
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

		::System::Void set_IsProductDataReady(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE_SET_ISPRODUCTDATAREADY_OFFSET))(this, value);
		}

		::System::Boolean get_IsProductRequest()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE_GET_ISPRODUCTREQUEST_OFFSET))(this);
		}

		::System::Void set_IsProductRequest(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE_SET_ISPRODUCTREQUEST_OFFSET))(this, value);
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

		::System::Void set_GiftCoinCurVersion(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE_SET_GIFTCOINCURVERSION_OFFSET))(this, value);
		}

		::System::Void _DoPayProduct(::RPG::Client::Product* product, ::System::Action_1<::RPG::Client::PayProductResult>* onGetPayProductResult)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Product*, ::System::Action_1<::RPG::Client::PayProductResult>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE__DOPAYPRODUCT_OFFSET))(this, product, onGetPayProductResult);
		}

		::System::Void _EventTrackingPayWithConfirm(::RPG::Client::RechargeItem* rechargeItem)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RechargeItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE__EVENTTRACKINGPAYWITHCONFIRM_OFFSET))(this, rechargeItem);
		}

		::System::Void _EventTrackingPayWithoutConfirm(::System::String* productID, ::System::String* transactionId)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE__EVENTTRACKINGPAYWITHOUTCONFIRM_OFFSET))(this, productID, transactionId);
		}

		::System::Boolean get_InAndroidSuspendPay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE_GET_INANDROIDSUSPENDPAY_OFFSET))(this);
		}

		::System::Void set_InAndroidSuspendPay(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE_SET_INANDROIDSUSPENDPAY_OFFSET))(this, value);
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
