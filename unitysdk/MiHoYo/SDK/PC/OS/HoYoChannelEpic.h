#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/HoYoChannel.h"
#include "unitysdk/MiHoYo/SDK/SubChannelType.h"

namespace MiHoYo::SDK { class JSONArray; }
namespace MiHoYo::SDK::PC::OS { class EpicPayInfo; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelAuthStatusResult; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelEntitlementsResult; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelProductsResult; }
namespace MiHoYo::SDK::PC::OS { class ProductData; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_APPENDIFMISMATCH_OFFSET UNITYSDK_OFFSET(0x1BEFAAA0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_CACHEPRODUCTS_OFFSET UNITYSDK_OFFSET(0x1BEFBD00)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_CHANGESUBCHANNELTOOFFICAL_OFFSET UNITYSDK_OFFSET(0x1BEFA310)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_CHECKENTITLEMENTS_OFFSET UNITYSDK_OFFSET(0x1BEFD1B0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_CHECKLAUNCHPARAMS_OFFSET UNITYSDK_OFFSET(0x1BEFA3F0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_CHECKLOCALPARAMS_OFFSET UNITYSDK_OFFSET(0x1BEFA250)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_EXECUTECHECKOUT_OFFSET UNITYSDK_OFFSET(0x1BEFCD20)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_FINDCACHEDPRODUCT_OFFSET UNITYSDK_OFFSET(0x1BEFC0A0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_GETCHANNEL_OFFSET UNITYSDK_OFFSET(0x1BEF95F0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_GETPRODUCTLIST_OFFSET UNITYSDK_OFFSET(0x1BEFACE0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_GETUSERID_OFFSET UNITYSDK_OFFSET(0x1BEFD270)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_INIT_OFFSET UNITYSDK_OFFSET(0x1BEF9610)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_LOGIN_OFFSET UNITYSDK_OFFSET(0x1BEFD290)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_ONAPPLICATIONQUIT_OFFSET UNITYSDK_OFFSET(0x1BEFD380)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_ONAUTHSTATUSCHANGED_OFFSET UNITYSDK_OFFSET(0x1BEFAC50)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_ONGETPRODUCTLISTERROR_OFFSET UNITYSDK_OFFSET(0x1BEFB2C0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_ONGETPRODUCTLISTSUCCESS_OFFSET UNITYSDK_OFFSET(0x1BEFB430)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_ONPAYCANCEL_OFFSET UNITYSDK_OFFSET(0x1BEFD030)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_ONPAYFAIL_OFFSET UNITYSDK_OFFSET(0x1BEFCBB0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_ONPAYSUCCESS_OFFSET UNITYSDK_OFFSET(0x1BEFCEC0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_PAY_OFFSET UNITYSDK_OFFSET(0x1BEFC3A0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_USEHOYOCHANNEL_OFFSET UNITYSDK_OFFSET(0x1BEF9600)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BEFD3C0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC__CHECKENTITLEMENTS_B__23_0_OFFSET UNITYSDK_OFFSET(0x1BEFD520)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEFD390)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC__INIT_B__9_0_OFFSET UNITYSDK_OFFSET(0x1BEFD460)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelEpic_TypeDefinitionIndex = 8519;

	class HoYoChannelEpic : public ::MiHoYo::SDK::PC::OS::HoYoChannel
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet__offerIdToEntitlementName()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelEpic_TypeDefinitionIndex)->GetStaticField(0x1AB40);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MiHoYo::SDK::PC::OS::ProductData*>** StaticGet__productDataMapCache()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MiHoYo::SDK::PC::OS::ProductData*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelEpic_TypeDefinitionIndex)->GetStaticField(0x1AB48);
		}
		::System::Action_1<::System::String*>* _actionPayCallback; // 0x10
		::System::String* _accountId; // 0x18
		::System::Boolean _isChannelDllAvailable; // 0x20
		::System::Boolean _isPaying; // 0x21
		::System::Boolean hasInit; // 0x22

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC__CCTOR_OFFSET))();
		}

		::MiHoYo::SDK::SubChannelType GetChannel()
		{
			return ((::MiHoYo::SDK::SubChannelType(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_GETCHANNEL_OFFSET))(this);
		}

		::System::Boolean UseHoYoChannel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_USEHOYOCHANNEL_OFFSET))(this);
		}

		::System::Boolean Init()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_INIT_OFFSET))(this);
		}

		::System::Boolean CheckLocalParams()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_CHECKLOCALPARAMS_OFFSET))(this);
		}

		::System::Boolean CheckLaunchParams()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_CHECKLAUNCHPARAMS_OFFSET))(this);
		}

		::System::Void OnAuthStatusChanged(::MiHoYo::SDK::PC::OS::HoYoChannelAuthStatusResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelAuthStatusResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_ONAUTHSTATUSCHANGED_OFFSET))(this, a1);
		}

		::System::Void GetProductList(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_GETPRODUCTLIST_OFFSET))(this, a1, a2);
		}

		::System::Void CacheProducts(::Il2CppArray<::MiHoYo::SDK::PC::OS::ProductData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MiHoYo::SDK::PC::OS::ProductData*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_CACHEPRODUCTS_OFFSET))(this, a1);
		}

		::System::Void OnGetProductListSuccess(::System::Action_1<::System::String*>* a1, ::MiHoYo::SDK::JSONArray* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::MiHoYo::SDK::JSONArray*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_ONGETPRODUCTLISTSUCCESS_OFFSET))(this, a1, a2);
		}

		::MiHoYo::SDK::PC::OS::ProductData* FindCachedProduct(::System::String* a1)
		{
			return ((::MiHoYo::SDK::PC::OS::ProductData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_FINDCACHEDPRODUCT_OFFSET))(this, a1);
		}

		::System::Void OnGetProductListError(::System::Action_1<::System::String*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_ONGETPRODUCTLISTERROR_OFFSET))(this, a1, a2);
		}

		::System::Void Pay(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_PAY_OFFSET))(this, a1, a2);
		}

		::System::Void ExecuteCheckout(::MiHoYo::SDK::PC::OS::EpicPayInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::EpicPayInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_EXECUTECHECKOUT_OFFSET))(this, a1);
		}

		::System::Void OnPaySuccess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_ONPAYSUCCESS_OFFSET))(this);
		}

		::System::Void OnPayCancel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_ONPAYCANCEL_OFFSET))(this);
		}

		::System::Void OnPayFail(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_ONPAYFAIL_OFFSET))(this, a1);
		}

		::System::Void CheckEntitlements()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_CHECKENTITLEMENTS_OFFSET))(this);
		}

		::System::String* GetUserId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_GETUSERID_OFFSET))(this);
		}

		::System::Void Login(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_LOGIN_OFFSET))(this, a1);
		}

		::System::Void OnApplicationQuit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_ONAPPLICATIONQUIT_OFFSET))(this);
		}

		::System::Void ChangeSubChannelToOffical()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_CHANGESUBCHANNELTOOFFICAL_OFFSET))(this);
		}

		static ::System::Void AppendIfMismatch(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::String*>*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_APPENDIFMISMATCH_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void _Init_b__9_0(::MiHoYo::SDK::PC::OS::HoYoChannelProductsResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelProductsResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC__INIT_B__9_0_OFFSET))(this, a1);
		}

		::System::Void _CheckEntitlements_b__23_0(::MiHoYo::SDK::PC::OS::HoYoChannelEntitlementsResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelEntitlementsResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC__CHECKENTITLEMENTS_B__23_0_OFFSET))(this, a1);
		}
	};
}
