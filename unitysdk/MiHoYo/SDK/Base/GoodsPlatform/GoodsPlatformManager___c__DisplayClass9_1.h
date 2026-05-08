#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONArray; }
namespace MiHoYo::SDK::Base::GoodsPlatform { class GoodsPlatformManager___c__DisplayClass9_0; }
namespace System { class String; }

#define MIHOYO_SDK_BASE_GOODSPLATFORM_GOODSPLATFORMMANAGER___C__DISPLAYCLASS9_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1A33DEB0)
#define MIHOYO_SDK_BASE_GOODSPLATFORM_GOODSPLATFORMMANAGER___C__DISPLAYCLASS9_1__RETRIEVEGOODSLIST_B__1_OFFSET UNITYSDK_OFFSET(0x1A33DEC0)

namespace MiHoYo::SDK::Base::GoodsPlatform
{
	inline static constexpr unsigned int GoodsPlatformManager___c__DisplayClass9_1_TypeDefinitionIndex = 19429;

	class GoodsPlatformManager___c__DisplayClass9_1 : public ::System::Object
	{
	public:
		::System::String* message; // 0x10
		::MiHoYo::SDK::Base::GoodsPlatform::GoodsPlatformManager___c__DisplayClass9_0* CS___8__locals1; // 0x18
		::MiHoYo::SDK::JSONArray* goods; // 0x20
		::System::Int64 listGoodsTime; // 0x28
		::System::Int32 code; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_GOODSPLATFORMMANAGER___C__DISPLAYCLASS9_1__CTOR_OFFSET))(this);
		}

		::System::Void _RetrieveGoodsList_b__1(::MiHoYo::SDK::JSONArray* updatedGoods, ::System::Boolean fromCache, ::System::Int32 errorCodeThirdParty, ::System::Int64 thirdPartyDuration)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONArray*, ::System::Boolean, ::System::Int32, ::System::Int64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_GOODSPLATFORMMANAGER___C__DISPLAYCLASS9_1__RETRIEVEGOODSLIST_B__1_OFFSET))(this, updatedGoods, fromCache, errorCodeThirdParty, thirdPartyDuration);
		}
	};
}
