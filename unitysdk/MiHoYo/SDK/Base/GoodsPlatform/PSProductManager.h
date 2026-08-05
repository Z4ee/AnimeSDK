#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Console/ConsoleProduct.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONArray; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Action_4; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Diagnostics { class Stopwatch; }

#define MIHOYO_SDK_BASE_GOODSPLATFORM_PSPRODUCTMANAGER_CHECKCACHEEXPIRED_OFFSET UNITYSDK_OFFSET(0x1CAB4A70)
#define MIHOYO_SDK_BASE_GOODSPLATFORM_PSPRODUCTMANAGER_FORCEUPDATEPSPRODUCTSCACHE_OFFSET UNITYSDK_OFFSET(0x1CAB4C80)
#define MIHOYO_SDK_BASE_GOODSPLATFORM_PSPRODUCTMANAGER_GETALLPOSSIBLEPSPRODUCTASYNC_OFFSET UNITYSDK_OFFSET(0x1CAB49F0)
#define MIHOYO_SDK_BASE_GOODSPLATFORM_PSPRODUCTMANAGER_GETALLPOSSIBLEPSPRODUCT_OFFSET UNITYSDK_OFFSET(0x1CAB4990)
#define MIHOYO_SDK_BASE_GOODSPLATFORM_PSPRODUCTMANAGER_GETPSPRODUCTFROMCACHE_OFFSET UNITYSDK_OFFSET(0x1CAB4900)
#define MIHOYO_SDK_BASE_GOODSPLATFORM_PSPRODUCTMANAGER_GETPSPRODUCTS_OFFSET UNITYSDK_OFFSET(0x1CAB4D80)
#define MIHOYO_SDK_BASE_GOODSPLATFORM_PSPRODUCTMANAGER_GET_OFFSET UNITYSDK_OFFSET(0x1CAB4700)
#define MIHOYO_SDK_BASE_GOODSPLATFORM_PSPRODUCTMANAGER_REFRESHPSPRODUCTSCACHE_OFFSET UNITYSDK_OFFSET(0x1CAB58D0)
#define MIHOYO_SDK_BASE_GOODSPLATFORM_PSPRODUCTMANAGER_REQUESTPSPRODUCTSFROMSTORE_OFFSET UNITYSDK_OFFSET(0x1CAB57A0)
#define MIHOYO_SDK_BASE_GOODSPLATFORM_PSPRODUCTMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CAB5E20)
#define MIHOYO_SDK_BASE_GOODSPLATFORM_PSPRODUCTMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CAB4860)
#define MIHOYO_SDK_BASE_GOODSPLATFORM_PSPRODUCTMANAGER__GETALLPOSSIBLEPSPRODUCTASYNC_B__10_0_OFFSET UNITYSDK_OFFSET(0x1CAB66D0)
#define MIHOYO_SDK_BASE_GOODSPLATFORM_PSPRODUCTMANAGER__GETALLPOSSIBLEPSPRODUCT_B__9_0_OFFSET UNITYSDK_OFFSET(0x1CAB5E60)

namespace MiHoYo::SDK::Base::GoodsPlatform
{
	inline static constexpr unsigned int PSProductManager_TypeDefinitionIndex = 20939;

	class PSProductManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Base::GoodsPlatform::PSProductManager** StaticGet__manager()
		{
			return (::MiHoYo::SDK::Base::GoodsPlatform::PSProductManager**)Il2CppClass::FromTypeDefinitionIndex(PSProductManager_TypeDefinitionIndex)->GetStaticField(0xB050);
		}
		static ::System::Diagnostics::Stopwatch** StaticGet__stopwatch()
		{
			return (::System::Diagnostics::Stopwatch**)Il2CppClass::FromTypeDefinitionIndex(PSProductManager_TypeDefinitionIndex)->GetStaticField(0xB058);
		}
		// static const ::System::String* GOODS_ID; // 0x0
		// static const ::System::String* NO_DISCOUNT_GOODS_ID; // 0x0
		// static const ::System::Int64 DEFUALT_EXPIRE_TIME = 0x5265C00; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MiHoYo::SDK::Console::ConsoleProduct>* _cache; // 0x10
		::System::Int64 _lastRefreshTime; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_PSPRODUCTMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_PSPRODUCTMANAGER__CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::Base::GoodsPlatform::PSProductManager* Get()
		{
			return ((::MiHoYo::SDK::Base::GoodsPlatform::PSProductManager*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_PSPRODUCTMANAGER_GET_OFFSET))();
		}

		::System::Nullable_1<::MiHoYo::SDK::Console::ConsoleProduct> GetPSProductFromCache(::System::String* id)
		{
			return ((::System::Nullable_1<::MiHoYo::SDK::Console::ConsoleProduct>(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_PSPRODUCTMANAGER_GETPSPRODUCTFROMCACHE_OFFSET))(this, id);
		}

		::System::Void GetAllPossiblePSProduct()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_PSPRODUCTMANAGER_GETALLPOSSIBLEPSPRODUCT_OFFSET))(this);
		}

		::System::Void GetAllPossiblePSProductAsync()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_PSPRODUCTMANAGER_GETALLPOSSIBLEPSPRODUCTASYNC_OFFSET))(this);
		}

		::System::Boolean CheckCacheExpired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_PSPRODUCTMANAGER_CHECKCACHEEXPIRED_OFFSET))(this);
		}

		::System::Void ForceUpdatePSProductsCache(::Il2CppArray<::System::String*>* idList)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_PSPRODUCTMANAGER_FORCEUPDATEPSPRODUCTSCACHE_OFFSET))(this, idList);
		}

		::System::Void GetPSProducts(::Il2CppArray<::System::String*>* idList, ::System::Action_4<::Il2CppArray<::MiHoYo::SDK::Console::ConsoleProduct>*, ::System::Boolean, ::System::Int32, ::System::Int64>* callback, ::System::Boolean useCache)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Action_4<::Il2CppArray<::MiHoYo::SDK::Console::ConsoleProduct>*, ::System::Boolean, ::System::Int32, ::System::Int64>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_PSPRODUCTMANAGER_GETPSPRODUCTS_OFFSET))(this, idList, callback, useCache);
		}

		::System::Void RefreshPSProductsCache(::Il2CppArray<::MiHoYo::SDK::Console::ConsoleProduct>* products)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MiHoYo::SDK::Console::ConsoleProduct>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_PSPRODUCTMANAGER_REFRESHPSPRODUCTSCACHE_OFFSET))(this, products);
		}

		::System::Void RequestPSProductsFromStore(::Il2CppArray<::System::String*>* idList, ::System::Action_4<::Il2CppArray<::MiHoYo::SDK::Console::ConsoleProduct>*, ::System::Boolean, ::System::Int32, ::System::Int64>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Action_4<::Il2CppArray<::MiHoYo::SDK::Console::ConsoleProduct>*, ::System::Boolean, ::System::Int32, ::System::Int64>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_PSPRODUCTMANAGER_REQUESTPSPRODUCTSFROMSTORE_OFFSET))(this, idList, callback);
		}

		::System::Void _GetAllPossiblePSProduct_b__9_0(::System::Int32 retCode, ::System::String* message, ::MiHoYo::SDK::JSONArray* idData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::MiHoYo::SDK::JSONArray*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_PSPRODUCTMANAGER__GETALLPOSSIBLEPSPRODUCT_B__9_0_OFFSET))(this, retCode, message, idData);
		}

		::System::Void _GetAllPossiblePSProductAsync_b__10_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_PSPRODUCTMANAGER__GETALLPOSSIBLEPSPRODUCTASYNC_B__10_0_OFFSET))(this);
		}
	};
}
