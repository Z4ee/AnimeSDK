#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONArray; }
namespace MiHoYo::SDK { class JSONObject; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define MIHOYO_SDK_BASE_GOODSPLATFORM_GOODSPLATFORMMANAGER___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x181E8120)
#define MIHOYO_SDK_BASE_GOODSPLATFORM_GOODSPLATFORMMANAGER___C__DISPLAYCLASS10_0__REQUESTLISTGOODSAPIWITHCDNFALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0x181E8260)

namespace MiHoYo::SDK::Base::GoodsPlatform
{
	inline static constexpr unsigned int GoodsPlatformManager___c__DisplayClass10_0_TypeDefinitionIndex = 8506;

	class GoodsPlatformManager___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::JSONObject* queries; // 0x10
		::System::Action_3<::System::Int32, ::System::String*, ::MiHoYo::SDK::JSONArray*>* callback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_GOODSPLATFORMMANAGER___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Void _RequestListGoodsAPIWithCDNFallback_b__0(::System::Int32 a1, ::System::String* a2, ::MiHoYo::SDK::JSONArray* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::MiHoYo::SDK::JSONArray*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_GOODSPLATFORMMANAGER___C__DISPLAYCLASS10_0__REQUESTLISTGOODSAPIWITHCDNFALLBACK_B__0_OFFSET))(this, a1, a2, a3);
		}
	};
}
