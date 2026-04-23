#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Handle.h"
#include "unitysdk/Epic/OnlineServices/Result.h"

namespace Epic::OnlineServices::Ecom { class CatalogItem; }
namespace Epic::OnlineServices::Ecom { class CatalogOffer; }
namespace Epic::OnlineServices::Ecom { class CatalogRelease; }
namespace Epic::OnlineServices::Ecom { class CheckoutOptions; }
namespace Epic::OnlineServices::Ecom { class CopyEntitlementByIdOptions; }
namespace Epic::OnlineServices::Ecom { class CopyEntitlementByIndexOptions; }
namespace Epic::OnlineServices::Ecom { class CopyEntitlementByNameAndIndexOptions; }
namespace Epic::OnlineServices::Ecom { class CopyItemByIdOptions; }
namespace Epic::OnlineServices::Ecom { class CopyItemImageInfoByIndexOptions; }
namespace Epic::OnlineServices::Ecom { class CopyItemReleaseByIndexOptions; }
namespace Epic::OnlineServices::Ecom { class CopyOfferByIdOptions; }
namespace Epic::OnlineServices::Ecom { class CopyOfferByIndexOptions; }
namespace Epic::OnlineServices::Ecom { class CopyOfferImageInfoByIndexOptions; }
namespace Epic::OnlineServices::Ecom { class CopyOfferItemByIndexOptions; }
namespace Epic::OnlineServices::Ecom { class CopyTransactionByIdOptions; }
namespace Epic::OnlineServices::Ecom { class CopyTransactionByIndexOptions; }
namespace Epic::OnlineServices::Ecom { class Entitlement; }
namespace Epic::OnlineServices::Ecom { class GetEntitlementsByNameCountOptions; }
namespace Epic::OnlineServices::Ecom { class GetEntitlementsCountOptions; }
namespace Epic::OnlineServices::Ecom { class GetItemImageInfoCountOptions; }
namespace Epic::OnlineServices::Ecom { class GetItemReleaseCountOptions; }
namespace Epic::OnlineServices::Ecom { class GetOfferCountOptions; }
namespace Epic::OnlineServices::Ecom { class GetOfferImageInfoCountOptions; }
namespace Epic::OnlineServices::Ecom { class GetOfferItemCountOptions; }
namespace Epic::OnlineServices::Ecom { class GetTransactionCountOptions; }
namespace Epic::OnlineServices::Ecom { class KeyImageInfo; }
namespace Epic::OnlineServices::Ecom { class OnCheckoutCallback; }
namespace Epic::OnlineServices::Ecom { class OnQueryEntitlementsCallback; }
namespace Epic::OnlineServices::Ecom { class OnQueryOffersCallback; }
namespace Epic::OnlineServices::Ecom { class OnQueryOwnershipCallback; }
namespace Epic::OnlineServices::Ecom { class OnQueryOwnershipTokenCallback; }
namespace Epic::OnlineServices::Ecom { class OnRedeemEntitlementsCallback; }
namespace Epic::OnlineServices::Ecom { class QueryEntitlementsOptions; }
namespace Epic::OnlineServices::Ecom { class QueryOffersOptions; }
namespace Epic::OnlineServices::Ecom { class QueryOwnershipOptions; }
namespace Epic::OnlineServices::Ecom { class QueryOwnershipTokenOptions; }
namespace Epic::OnlineServices::Ecom { class RedeemEntitlementsOptions; }
namespace Epic::OnlineServices::Ecom { class Transaction; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_ECOM_ECOMINTERFACE_CHECKOUT_OFFSET UNITYSDK_OFFSET(0x8E752F0)
#define EPIC_ONLINESERVICES_ECOM_ECOMINTERFACE_COPYENTITLEMENTBYID_OFFSET UNITYSDK_OFFSET(0x8E755E0)
#define EPIC_ONLINESERVICES_ECOM_ECOMINTERFACE_COPYENTITLEMENTBYINDEX_OFFSET UNITYSDK_OFFSET(0x8E757E0)
#define EPIC_ONLINESERVICES_ECOM_ECOMINTERFACE_COPYENTITLEMENTBYNAMEANDINDEX_OFFSET UNITYSDK_OFFSET(0x8E75A90)
#define EPIC_ONLINESERVICES_ECOM_ECOMINTERFACE_COPYITEMBYID_OFFSET UNITYSDK_OFFSET(0x8E75C90)
#define EPIC_ONLINESERVICES_ECOM_ECOMINTERFACE_COPYITEMIMAGEINFOBYINDEX_OFFSET UNITYSDK_OFFSET(0x8E75E90)
#define EPIC_ONLINESERVICES_ECOM_ECOMINTERFACE_COPYITEMRELEASEBYINDEX_OFFSET UNITYSDK_OFFSET(0x8E76090)
#define EPIC_ONLINESERVICES_ECOM_ECOMINTERFACE_COPYOFFERBYID_OFFSET UNITYSDK_OFFSET(0x8E76290)
#define EPIC_ONLINESERVICES_ECOM_ECOMINTERFACE_COPYOFFERBYINDEX_OFFSET UNITYSDK_OFFSET(0x8E76490)
#define EPIC_ONLINESERVICES_ECOM_ECOMINTERFACE_COPYOFFERIMAGEINFOBYINDEX_OFFSET UNITYSDK_OFFSET(0x8E76740)
#define EPIC_ONLINESERVICES_ECOM_ECOMINTERFACE_COPYOFFERITEMBYINDEX_OFFSET UNITYSDK_OFFSET(0x8E76940)
#define EPIC_ONLINESERVICES_ECOM_ECOMINTERFACE_COPYTRANSACTIONBYID_OFFSET UNITYSDK_OFFSET(0x8E76B40)
#define EPIC_ONLINESERVICES_ECOM_ECOMINTERFACE_COPYTRANSACTIONBYINDEX_OFFSET UNITYSDK_OFFSET(0x8E76CD0)
#define EPIC_ONLINESERVICES_ECOM_ECOMINTERFACE_GETENTITLEMENTSBYNAMECOUNT_OFFSET UNITYSDK_OFFSET(0x8E76EE0)
#define EPIC_ONLINESERVICES_ECOM_ECOMINTERFACE_GETENTITLEMENTSCOUNT_OFFSET UNITYSDK_OFFSET(0x8E77040)
#define EPIC_ONLINESERVICES_ECOM_ECOMINTERFACE_GETITEMIMAGEINFOCOUNT_OFFSET UNITYSDK_OFFSET(0x8E77230)
#define EPIC_ONLINESERVICES_ECOM_ECOMINTERFACE_GETITEMRELEASECOUNT_OFFSET UNITYSDK_OFFSET(0x8E77390)
#define EPIC_ONLINESERVICES_ECOM_ECOMINTERFACE_GETOFFERCOUNT_OFFSET UNITYSDK_OFFSET(0x8E774F0)
#define EPIC_ONLINESERVICES_ECOM_ECOMINTERFACE_GETOFFERIMAGEINFOCOUNT_OFFSET UNITYSDK_OFFSET(0x8E776E0)
#define EPIC_ONLINESERVICES_ECOM_ECOMINTERFACE_GETOFFERITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x8E77840)
#define EPIC_ONLINESERVICES_ECOM_ECOMINTERFACE_GETTRANSACTIONCOUNT_OFFSET UNITYSDK_OFFSET(0x8E779A0)
#define EPIC_ONLINESERVICES_ECOM_ECOMINTERFACE_ONCHECKOUTCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x8E74F50)
#define EPIC_ONLINESERVICES_ECOM_ECOMINTERFACE_ONQUERYENTITLEMENTSCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x8E74FE0)
#define EPIC_ONLINESERVICES_ECOM_ECOMINTERFACE_ONQUERYOFFERSCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x8E75070)
#define EPIC_ONLINESERVICES_ECOM_ECOMINTERFACE_ONQUERYOWNERSHIPCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x8E75100)
#define EPIC_ONLINESERVICES_ECOM_ECOMINTERFACE_ONQUERYOWNERSHIPTOKENCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x8E75190)
#define EPIC_ONLINESERVICES_ECOM_ECOMINTERFACE_ONREDEEMENTITLEMENTSCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x8E75220)
#define EPIC_ONLINESERVICES_ECOM_ECOMINTERFACE_QUERYENTITLEMENTS_OFFSET UNITYSDK_OFFSET(0x8E77B90)
#define EPIC_ONLINESERVICES_ECOM_ECOMINTERFACE_QUERYOFFERS_OFFSET UNITYSDK_OFFSET(0x8E77D70)
#define EPIC_ONLINESERVICES_ECOM_ECOMINTERFACE_QUERYOWNERSHIPTOKEN_OFFSET UNITYSDK_OFFSET(0x8E78130)
#define EPIC_ONLINESERVICES_ECOM_ECOMINTERFACE_QUERYOWNERSHIP_OFFSET UNITYSDK_OFFSET(0x8E77F50)
#define EPIC_ONLINESERVICES_ECOM_ECOMINTERFACE_REDEEMENTITLEMENTS_OFFSET UNITYSDK_OFFSET(0x8E78310)
#define EPIC_ONLINESERVICES_ECOM_ECOMINTERFACE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x8E752D0)
#define EPIC_ONLINESERVICES_ECOM_ECOMINTERFACE__CTOR_OFFSET UNITYSDK_OFFSET(0x8E752B0)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int EcomInterface_TypeDefinitionIndex = 42170;

	class EcomInterface : public ::Epic::OnlineServices::Handle
	{
	public:
		// static const ::System::Int32 CatalogitemApiLatest = 0x1; // 0x0
		// static const ::System::Int32 CatalogitemEntitlementendtimestampUndefined = 0xFFFFFFFF; // 0x0
		// static const ::System::Int32 CatalogofferApiLatest = 0x4; // 0x0
		// static const ::System::Int32 CatalogofferExpirationtimestampUndefined = 0xFFFFFFFF; // 0x0
		// static const ::System::Int32 CatalogreleaseApiLatest = 0x1; // 0x0
		// static const ::System::Int32 CheckoutApiLatest = 0x2; // 0x0
		// static const ::System::Int32 CheckoutMaxEntries = 0xA; // 0x0
		// static const ::System::Int32 CheckoutentryApiLatest = 0x1; // 0x0
		// static const ::System::Int32 CopyentitlementbyidApiLatest = 0x2; // 0x0
		// static const ::System::Int32 CopyentitlementbyindexApiLatest = 0x1; // 0x0
		// static const ::System::Int32 CopyentitlementbynameandindexApiLatest = 0x1; // 0x0
		// static const ::System::Int32 CopyitembyidApiLatest = 0x1; // 0x0
		// static const ::System::Int32 CopyitemimageinfobyindexApiLatest = 0x1; // 0x0
		// static const ::System::Int32 CopyitemreleasebyindexApiLatest = 0x1; // 0x0
		// static const ::System::Int32 CopyofferbyidApiLatest = 0x2; // 0x0
		// static const ::System::Int32 CopyofferbyindexApiLatest = 0x2; // 0x0
		// static const ::System::Int32 CopyofferimageinfobyindexApiLatest = 0x1; // 0x0
		// static const ::System::Int32 CopyofferitembyindexApiLatest = 0x1; // 0x0
		// static const ::System::Int32 CopytransactionbyidApiLatest = 0x1; // 0x0
		// static const ::System::Int32 CopytransactionbyindexApiLatest = 0x1; // 0x0
		// static const ::System::Int32 EntitlementApiLatest = 0x2; // 0x0
		// static const ::System::Int32 EntitlementEndtimestampUndefined = 0xFFFFFFFF; // 0x0
		// static const ::System::Int32 GetentitlementsbynamecountApiLatest = 0x1; // 0x0
		// static const ::System::Int32 GetentitlementscountApiLatest = 0x1; // 0x0
		// static const ::System::Int32 GetitemimageinfocountApiLatest = 0x1; // 0x0
		// static const ::System::Int32 GetitemreleasecountApiLatest = 0x1; // 0x0
		// static const ::System::Int32 GetoffercountApiLatest = 0x1; // 0x0
		// static const ::System::Int32 GetofferimageinfocountApiLatest = 0x1; // 0x0
		// static const ::System::Int32 GetofferitemcountApiLatest = 0x1; // 0x0
		// static const ::System::Int32 GettransactioncountApiLatest = 0x1; // 0x0
		// static const ::System::Int32 ItemownershipApiLatest = 0x1; // 0x0
		// static const ::System::Int32 KeyimageinfoApiLatest = 0x1; // 0x0
		// static const ::System::Int32 QueryentitlementsApiLatest = 0x2; // 0x0
		// static const ::System::Int32 QueryentitlementsMaxEntitlementIds = 0x20; // 0x0
		// static const ::System::Int32 QueryoffersApiLatest = 0x1; // 0x0
		// static const ::System::Int32 QueryownershipApiLatest = 0x2; // 0x0
		// static const ::System::Int32 QueryownershipMaxCatalogIds = 0x20; // 0x0
		// static const ::System::Int32 QueryownershiptokenApiLatest = 0x2; // 0x0
		// static const ::System::Int32 QueryownershiptokenMaxCatalogitemIds = 0x20; // 0x0
		// static const ::System::Int32 RedeementitlementsApiLatest = 0x1; // 0x0
		// static const ::System::Int32 RedeementitlementsMaxIds = 0x20; // 0x0
		// static const ::System::Int32 TransactionidMaximumLength = 0x40; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ECOMINTERFACE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::IntPtr innerHandle)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ECOMINTERFACE__CTOR_1_OFFSET))(this, innerHandle);
		}

		::System::Void Checkout(::Epic::OnlineServices::Ecom::CheckoutOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::Ecom::OnCheckoutCallback* completionDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Ecom::CheckoutOptions*, ::System::Object*, ::Epic::OnlineServices::Ecom::OnCheckoutCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ECOMINTERFACE_CHECKOUT_OFFSET))(this, options, clientData, completionDelegate);
		}

		::Epic::OnlineServices::Result CopyEntitlementById(::Epic::OnlineServices::Ecom::CopyEntitlementByIdOptions* options, ::Epic::OnlineServices::Ecom::Entitlement*& outEntitlement)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Ecom::CopyEntitlementByIdOptions*, ::Epic::OnlineServices::Ecom::Entitlement*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ECOMINTERFACE_COPYENTITLEMENTBYID_OFFSET))(this, options, outEntitlement);
		}

		::Epic::OnlineServices::Result CopyEntitlementByIndex(::Epic::OnlineServices::Ecom::CopyEntitlementByIndexOptions* options, ::Epic::OnlineServices::Ecom::Entitlement*& outEntitlement)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Ecom::CopyEntitlementByIndexOptions*, ::Epic::OnlineServices::Ecom::Entitlement*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ECOMINTERFACE_COPYENTITLEMENTBYINDEX_OFFSET))(this, options, outEntitlement);
		}

		::Epic::OnlineServices::Result CopyEntitlementByNameAndIndex(::Epic::OnlineServices::Ecom::CopyEntitlementByNameAndIndexOptions* options, ::Epic::OnlineServices::Ecom::Entitlement*& outEntitlement)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Ecom::CopyEntitlementByNameAndIndexOptions*, ::Epic::OnlineServices::Ecom::Entitlement*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ECOMINTERFACE_COPYENTITLEMENTBYNAMEANDINDEX_OFFSET))(this, options, outEntitlement);
		}

		::Epic::OnlineServices::Result CopyItemById(::Epic::OnlineServices::Ecom::CopyItemByIdOptions* options, ::Epic::OnlineServices::Ecom::CatalogItem*& outItem)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Ecom::CopyItemByIdOptions*, ::Epic::OnlineServices::Ecom::CatalogItem*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ECOMINTERFACE_COPYITEMBYID_OFFSET))(this, options, outItem);
		}

		::Epic::OnlineServices::Result CopyItemImageInfoByIndex(::Epic::OnlineServices::Ecom::CopyItemImageInfoByIndexOptions* options, ::Epic::OnlineServices::Ecom::KeyImageInfo*& outImageInfo)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Ecom::CopyItemImageInfoByIndexOptions*, ::Epic::OnlineServices::Ecom::KeyImageInfo*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ECOMINTERFACE_COPYITEMIMAGEINFOBYINDEX_OFFSET))(this, options, outImageInfo);
		}

		::Epic::OnlineServices::Result CopyItemReleaseByIndex(::Epic::OnlineServices::Ecom::CopyItemReleaseByIndexOptions* options, ::Epic::OnlineServices::Ecom::CatalogRelease*& outRelease)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Ecom::CopyItemReleaseByIndexOptions*, ::Epic::OnlineServices::Ecom::CatalogRelease*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ECOMINTERFACE_COPYITEMRELEASEBYINDEX_OFFSET))(this, options, outRelease);
		}

		::Epic::OnlineServices::Result CopyOfferById(::Epic::OnlineServices::Ecom::CopyOfferByIdOptions* options, ::Epic::OnlineServices::Ecom::CatalogOffer*& outOffer)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Ecom::CopyOfferByIdOptions*, ::Epic::OnlineServices::Ecom::CatalogOffer*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ECOMINTERFACE_COPYOFFERBYID_OFFSET))(this, options, outOffer);
		}

		::Epic::OnlineServices::Result CopyOfferByIndex(::Epic::OnlineServices::Ecom::CopyOfferByIndexOptions* options, ::Epic::OnlineServices::Ecom::CatalogOffer*& outOffer)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Ecom::CopyOfferByIndexOptions*, ::Epic::OnlineServices::Ecom::CatalogOffer*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ECOMINTERFACE_COPYOFFERBYINDEX_OFFSET))(this, options, outOffer);
		}

		::Epic::OnlineServices::Result CopyOfferImageInfoByIndex(::Epic::OnlineServices::Ecom::CopyOfferImageInfoByIndexOptions* options, ::Epic::OnlineServices::Ecom::KeyImageInfo*& outImageInfo)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Ecom::CopyOfferImageInfoByIndexOptions*, ::Epic::OnlineServices::Ecom::KeyImageInfo*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ECOMINTERFACE_COPYOFFERIMAGEINFOBYINDEX_OFFSET))(this, options, outImageInfo);
		}

		::Epic::OnlineServices::Result CopyOfferItemByIndex(::Epic::OnlineServices::Ecom::CopyOfferItemByIndexOptions* options, ::Epic::OnlineServices::Ecom::CatalogItem*& outItem)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Ecom::CopyOfferItemByIndexOptions*, ::Epic::OnlineServices::Ecom::CatalogItem*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ECOMINTERFACE_COPYOFFERITEMBYINDEX_OFFSET))(this, options, outItem);
		}

		::Epic::OnlineServices::Result CopyTransactionById(::Epic::OnlineServices::Ecom::CopyTransactionByIdOptions* options, ::Epic::OnlineServices::Ecom::Transaction*& outTransaction)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Ecom::CopyTransactionByIdOptions*, ::Epic::OnlineServices::Ecom::Transaction*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ECOMINTERFACE_COPYTRANSACTIONBYID_OFFSET))(this, options, outTransaction);
		}

		::Epic::OnlineServices::Result CopyTransactionByIndex(::Epic::OnlineServices::Ecom::CopyTransactionByIndexOptions* options, ::Epic::OnlineServices::Ecom::Transaction*& outTransaction)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Ecom::CopyTransactionByIndexOptions*, ::Epic::OnlineServices::Ecom::Transaction*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ECOMINTERFACE_COPYTRANSACTIONBYINDEX_OFFSET))(this, options, outTransaction);
		}

		::System::UInt32 GetEntitlementsByNameCount(::Epic::OnlineServices::Ecom::GetEntitlementsByNameCountOptions* options)
		{
			return ((::System::UInt32(*)(::PVOID, ::Epic::OnlineServices::Ecom::GetEntitlementsByNameCountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ECOMINTERFACE_GETENTITLEMENTSBYNAMECOUNT_OFFSET))(this, options);
		}

		::System::UInt32 GetEntitlementsCount(::Epic::OnlineServices::Ecom::GetEntitlementsCountOptions* options)
		{
			return ((::System::UInt32(*)(::PVOID, ::Epic::OnlineServices::Ecom::GetEntitlementsCountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ECOMINTERFACE_GETENTITLEMENTSCOUNT_OFFSET))(this, options);
		}

		::System::UInt32 GetItemImageInfoCount(::Epic::OnlineServices::Ecom::GetItemImageInfoCountOptions* options)
		{
			return ((::System::UInt32(*)(::PVOID, ::Epic::OnlineServices::Ecom::GetItemImageInfoCountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ECOMINTERFACE_GETITEMIMAGEINFOCOUNT_OFFSET))(this, options);
		}

		::System::UInt32 GetItemReleaseCount(::Epic::OnlineServices::Ecom::GetItemReleaseCountOptions* options)
		{
			return ((::System::UInt32(*)(::PVOID, ::Epic::OnlineServices::Ecom::GetItemReleaseCountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ECOMINTERFACE_GETITEMRELEASECOUNT_OFFSET))(this, options);
		}

		::System::UInt32 GetOfferCount(::Epic::OnlineServices::Ecom::GetOfferCountOptions* options)
		{
			return ((::System::UInt32(*)(::PVOID, ::Epic::OnlineServices::Ecom::GetOfferCountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ECOMINTERFACE_GETOFFERCOUNT_OFFSET))(this, options);
		}

		::System::UInt32 GetOfferImageInfoCount(::Epic::OnlineServices::Ecom::GetOfferImageInfoCountOptions* options)
		{
			return ((::System::UInt32(*)(::PVOID, ::Epic::OnlineServices::Ecom::GetOfferImageInfoCountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ECOMINTERFACE_GETOFFERIMAGEINFOCOUNT_OFFSET))(this, options);
		}

		::System::UInt32 GetOfferItemCount(::Epic::OnlineServices::Ecom::GetOfferItemCountOptions* options)
		{
			return ((::System::UInt32(*)(::PVOID, ::Epic::OnlineServices::Ecom::GetOfferItemCountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ECOMINTERFACE_GETOFFERITEMCOUNT_OFFSET))(this, options);
		}

		::System::UInt32 GetTransactionCount(::Epic::OnlineServices::Ecom::GetTransactionCountOptions* options)
		{
			return ((::System::UInt32(*)(::PVOID, ::Epic::OnlineServices::Ecom::GetTransactionCountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ECOMINTERFACE_GETTRANSACTIONCOUNT_OFFSET))(this, options);
		}

		::System::Void QueryEntitlements(::Epic::OnlineServices::Ecom::QueryEntitlementsOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::Ecom::OnQueryEntitlementsCallback* completionDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Ecom::QueryEntitlementsOptions*, ::System::Object*, ::Epic::OnlineServices::Ecom::OnQueryEntitlementsCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ECOMINTERFACE_QUERYENTITLEMENTS_OFFSET))(this, options, clientData, completionDelegate);
		}

		::System::Void QueryOffers(::Epic::OnlineServices::Ecom::QueryOffersOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::Ecom::OnQueryOffersCallback* completionDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Ecom::QueryOffersOptions*, ::System::Object*, ::Epic::OnlineServices::Ecom::OnQueryOffersCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ECOMINTERFACE_QUERYOFFERS_OFFSET))(this, options, clientData, completionDelegate);
		}

		::System::Void QueryOwnership(::Epic::OnlineServices::Ecom::QueryOwnershipOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::Ecom::OnQueryOwnershipCallback* completionDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Ecom::QueryOwnershipOptions*, ::System::Object*, ::Epic::OnlineServices::Ecom::OnQueryOwnershipCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ECOMINTERFACE_QUERYOWNERSHIP_OFFSET))(this, options, clientData, completionDelegate);
		}

		::System::Void QueryOwnershipToken(::Epic::OnlineServices::Ecom::QueryOwnershipTokenOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::Ecom::OnQueryOwnershipTokenCallback* completionDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Ecom::QueryOwnershipTokenOptions*, ::System::Object*, ::Epic::OnlineServices::Ecom::OnQueryOwnershipTokenCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ECOMINTERFACE_QUERYOWNERSHIPTOKEN_OFFSET))(this, options, clientData, completionDelegate);
		}

		::System::Void RedeemEntitlements(::Epic::OnlineServices::Ecom::RedeemEntitlementsOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::Ecom::OnRedeemEntitlementsCallback* completionDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Ecom::RedeemEntitlementsOptions*, ::System::Object*, ::Epic::OnlineServices::Ecom::OnRedeemEntitlementsCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ECOMINTERFACE_REDEEMENTITLEMENTS_OFFSET))(this, options, clientData, completionDelegate);
		}

		static ::System::Void OnCheckoutCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ECOMINTERFACE_ONCHECKOUTCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnQueryEntitlementsCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ECOMINTERFACE_ONQUERYENTITLEMENTSCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnQueryOffersCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ECOMINTERFACE_ONQUERYOFFERSCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnQueryOwnershipCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ECOMINTERFACE_ONQUERYOWNERSHIPCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnQueryOwnershipTokenCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ECOMINTERFACE_ONQUERYOWNERSHIPTOKENCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnRedeemEntitlementsCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_ECOMINTERFACE_ONREDEEMENTITLEMENTSCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}
	};
}
