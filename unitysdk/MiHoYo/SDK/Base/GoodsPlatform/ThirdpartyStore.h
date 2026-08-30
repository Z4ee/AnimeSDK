#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONArray; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Action_4; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_BASE_GOODSPLATFORM_THIRDPARTYSTORE_EXCHANGECLOUDGAMESTOREITEMINFO_OFFSET UNITYSDK_OFFSET(0x1A1A17F0)
#define MIHOYO_SDK_BASE_GOODSPLATFORM_THIRDPARTYSTORE_EXCHANGECXSTOREITEMINFO_OFFSET UNITYSDK_OFFSET(0x1A1A1770)
#define MIHOYO_SDK_BASE_GOODSPLATFORM_THIRDPARTYSTORE_EXCHANGEEPICSTOREITEMINFO_OFFSET UNITYSDK_OFFSET(0x1A1A17B0)
#define MIHOYO_SDK_BASE_GOODSPLATFORM_THIRDPARTYSTORE_EXCHANGESONYSTOREITEMINFO_OFFSET UNITYSDK_OFFSET(0x1A1A15A0)
#define MIHOYO_SDK_BASE_GOODSPLATFORM_THIRDPARTYSTORE_EXCHANGESTOREITEMINFO_OFFSET UNITYSDK_OFFSET(0x1A19E5A0)
#define MIHOYO_SDK_BASE_GOODSPLATFORM_THIRDPARTYSTORE_GETGOODSIDLIST_OFFSET UNITYSDK_OFFSET(0x1A1A2200)
#define MIHOYO_SDK_BASE_GOODSPLATFORM_THIRDPARTYSTORE_GETGOODSWITHNODISCOUNTIDS_OFFSET UNITYSDK_OFFSET(0x1A1A1840)
#define MIHOYO_SDK_BASE_GOODSPLATFORM_THIRDPARTYSTORE_GETTHIRDPARTYSTORENAME_OFFSET UNITYSDK_OFFSET(0x1A19C4C0)
#define MIHOYO_SDK_BASE_GOODSPLATFORM_THIRDPARTYSTORE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A1A2510)
#define MIHOYO_SDK_BASE_GOODSPLATFORM_THIRDPARTYSTORE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1A2500)

namespace MiHoYo::SDK::Base::GoodsPlatform
{
	inline static constexpr unsigned int ThirdpartyStore_TypeDefinitionIndex = 8789;

	class ThirdpartyStore : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet_idMapToNoDiscountIds()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ThirdpartyStore_TypeDefinitionIndex)->GetStaticField(0x47E0);
		}
		// static const ::System::String* CloudGameStore; // 0x0
		// static const ::System::String* CXStore; // 0x0
		// static const ::System::String* SonyStore; // 0x0
		// static const ::System::String* EpicStore; // 0x0
		// static const ::System::String* PRICE; // 0x0
		// static const ::System::String* AMOUNT_DECIMAL; // 0x0
		// static const ::System::String* CURRENCY; // 0x0
		// static const ::System::String* TIER; // 0x0
		// static const ::System::String* AMOUNT; // 0x0
		// static const ::System::String* AMOUNT_DISPLAY; // 0x0
		// static const ::System::String* ORIGINAL_AMOUNT_DISPLAY; // 0x0
		// static const ::System::String* CURRENCY_SYMBOL; // 0x0
		// static const ::System::String* PAY_LIST_DISCOUNT_REQUEST; // 0x0
		// static const ::System::Char CHAR_EMPTY; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_THIRDPARTYSTORE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_THIRDPARTYSTORE__CCTOR_OFFSET))();
		}

		static ::System::String* GetThirdpartyStoreName()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_THIRDPARTYSTORE_GETTHIRDPARTYSTORENAME_OFFSET))();
		}

		static ::System::Void ExchangeStoreItemInfo(::MiHoYo::SDK::JSONArray* a1, ::System::Action_4<::MiHoYo::SDK::JSONArray*, ::System::Boolean, ::System::Int32, ::System::Int64>* a2)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::JSONArray*, ::System::Action_4<::MiHoYo::SDK::JSONArray*, ::System::Boolean, ::System::Int32, ::System::Int64>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_THIRDPARTYSTORE_EXCHANGESTOREITEMINFO_OFFSET))(a1, a2);
		}

		static ::System::Void ExchangeSonyStoreItemInfo(::MiHoYo::SDK::JSONArray* a1, ::System::Action_4<::MiHoYo::SDK::JSONArray*, ::System::Boolean, ::System::Int32, ::System::Int64>* a2)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::JSONArray*, ::System::Action_4<::MiHoYo::SDK::JSONArray*, ::System::Boolean, ::System::Int32, ::System::Int64>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_THIRDPARTYSTORE_EXCHANGESONYSTOREITEMINFO_OFFSET))(a1, a2);
		}

		static ::System::Void ExchangeCXStoreItemInfo(::MiHoYo::SDK::JSONArray* a1, ::System::Action_4<::MiHoYo::SDK::JSONArray*, ::System::Boolean, ::System::Int32, ::System::Int64>* a2)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::JSONArray*, ::System::Action_4<::MiHoYo::SDK::JSONArray*, ::System::Boolean, ::System::Int32, ::System::Int64>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_THIRDPARTYSTORE_EXCHANGECXSTOREITEMINFO_OFFSET))(a1, a2);
		}

		static ::System::Void ExchangeEpicStoreItemInfo(::MiHoYo::SDK::JSONArray* a1, ::System::Action_4<::MiHoYo::SDK::JSONArray*, ::System::Boolean, ::System::Int32, ::System::Int64>* a2)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::JSONArray*, ::System::Action_4<::MiHoYo::SDK::JSONArray*, ::System::Boolean, ::System::Int32, ::System::Int64>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_THIRDPARTYSTORE_EXCHANGEEPICSTOREITEMINFO_OFFSET))(a1, a2);
		}

		static ::System::Void ExchangeCloudGameStoreItemInfo(::MiHoYo::SDK::JSONArray* a1, ::System::Action_4<::MiHoYo::SDK::JSONArray*, ::System::Boolean, ::System::Int32, ::System::Int64>* a2)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::JSONArray*, ::System::Action_4<::MiHoYo::SDK::JSONArray*, ::System::Boolean, ::System::Int32, ::System::Int64>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_THIRDPARTYSTORE_EXCHANGECLOUDGAMESTOREITEMINFO_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::String*>* GetGoodsIdList(::MiHoYo::SDK::JSONArray* a1)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::MiHoYo::SDK::JSONArray*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_THIRDPARTYSTORE_GETGOODSIDLIST_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::String*>* GetGoodsWithNoDiscountIds(::MiHoYo::SDK::JSONArray* a1)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::MiHoYo::SDK::JSONArray*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_THIRDPARTYSTORE_GETGOODSWITHNODISCOUNTIDS_OFFSET))(a1);
		}
	};
}
