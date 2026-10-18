#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Base/GoodsPlatform/GoodsPlatformManager_WorkMode.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONArray; }
namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class JSONObject; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T> class Action_1; }
namespace System::Diagnostics { class Stopwatch; }

#define MIHOYO_SDK_BASE_GOODSPLATFORM_GOODSPLATFORMMANAGER_ERRORCODEMAPPING_OFFSET UNITYSDK_OFFSET(0x1BC143C0)
#define MIHOYO_SDK_BASE_GOODSPLATFORM_GOODSPLATFORMMANAGER_GET_LISTGOODSWORKMODE_OFFSET UNITYSDK_OFFSET(0x1BC13980)
#define MIHOYO_SDK_BASE_GOODSPLATFORM_GOODSPLATFORMMANAGER_HASVALIDGOODSLIST_OFFSET UNITYSDK_OFFSET(0x1BC14350)
#define MIHOYO_SDK_BASE_GOODSPLATFORM_GOODSPLATFORMMANAGER_NORMALIZEGOODSLISTDATA_OFFSET UNITYSDK_OFFSET(0x1BC14140)
#define MIHOYO_SDK_BASE_GOODSPLATFORM_GOODSPLATFORMMANAGER_REQUESTLISTGOODSAPIWITHCDNFALLBACK_OFFSET UNITYSDK_OFFSET(0x1BC14080)
#define MIHOYO_SDK_BASE_GOODSPLATFORM_GOODSPLATFORMMANAGER_RETRIEVEGOODSLIST_OFFSET UNITYSDK_OFFSET(0x1BC13990)
#define MIHOYO_SDK_BASE_GOODSPLATFORM_GOODSPLATFORMMANAGER_SET_LISTGOODSWORKMODE_OFFSET UNITYSDK_OFFSET(0x1BC13970)
#define MIHOYO_SDK_BASE_GOODSPLATFORM_GOODSPLATFORMMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BC14460)
#define MIHOYO_SDK_BASE_GOODSPLATFORM_GOODSPLATFORMMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC143E0)

namespace MiHoYo::SDK::Base::GoodsPlatform
{
	inline static constexpr unsigned int GoodsPlatformManager_TypeDefinitionIndex = 8842;

	class GoodsPlatformManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Base::GoodsPlatform::GoodsPlatformManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Base::GoodsPlatform::GoodsPlatformManager**)Il2CppClass::FromTypeDefinitionIndex(GoodsPlatformManager_TypeDefinitionIndex)->GetStaticField(0x1FAE0);
		}
		// static const ::System::Int32 EC_INTERNAL_ERROR = 0x67; // 0x0
		// static const ::System::String* PAY_LIST_GOODS_REQUEST; // 0x0
		::System::Diagnostics::Stopwatch* _stopwatch; // 0x10
		::MiHoYo::SDK::Base::GoodsPlatform::GoodsPlatformManager_WorkMode _ListGoodsWorkMode_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_GOODSPLATFORMMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_GOODSPLATFORMMANAGER__CCTOR_OFFSET))();
		}

		::System::Void set_ListGoodsWorkMode(::MiHoYo::SDK::Base::GoodsPlatform::GoodsPlatformManager_WorkMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Base::GoodsPlatform::GoodsPlatformManager_WorkMode))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_GOODSPLATFORMMANAGER_SET_LISTGOODSWORKMODE_OFFSET))(this, a1);
		}

		::MiHoYo::SDK::Base::GoodsPlatform::GoodsPlatformManager_WorkMode get_ListGoodsWorkMode()
		{
			return ((::MiHoYo::SDK::Base::GoodsPlatform::GoodsPlatformManager_WorkMode(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_GOODSPLATFORMMANAGER_GET_LISTGOODSWORKMODE_OFFSET))(this);
		}

		::System::Void RetrieveGoodsList(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_GOODSPLATFORMMANAGER_RETRIEVEGOODSLIST_OFFSET))(this, a1, a2);
		}

		::System::Void RequestListGoodsAPIWithCDNFallback(::MiHoYo::SDK::JSONObject* a1, ::System::Action_3<::System::Int32, ::System::String*, ::MiHoYo::SDK::JSONNode*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONObject*, ::System::Action_3<::System::Int32, ::System::String*, ::MiHoYo::SDK::JSONNode*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_GOODSPLATFORMMANAGER_REQUESTLISTGOODSAPIWITHCDNFALLBACK_OFFSET))(this, a1, a2);
		}

		::MiHoYo::SDK::JSONObject* NormalizeGoodsListData(::MiHoYo::SDK::JSONNode* a1)
		{
			return ((::MiHoYo::SDK::JSONObject*(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_GOODSPLATFORMMANAGER_NORMALIZEGOODSLISTDATA_OFFSET))(this, a1);
		}

		::System::Boolean HasValidGoodsList(::MiHoYo::SDK::JSONArray* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::JSONArray*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_GOODSPLATFORMMANAGER_HASVALIDGOODSLIST_OFFSET))(this, a1);
		}

		::System::Int32 ErrorCodeMapping(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_GOODSPLATFORMMANAGER_ERRORCODEMAPPING_OFFSET))(this, a1);
		}
	};
}
