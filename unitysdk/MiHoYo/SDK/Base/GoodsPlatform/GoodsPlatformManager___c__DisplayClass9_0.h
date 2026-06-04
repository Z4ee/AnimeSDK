#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONArray; }
namespace MiHoYo::SDK::Base::GoodsPlatform { class GoodsPlatformManager; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_BASE_GOODSPLATFORM_GOODSPLATFORMMANAGER___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x181E8060)
#define MIHOYO_SDK_BASE_GOODSPLATFORM_GOODSPLATFORMMANAGER___C__DISPLAYCLASS9_0__RETRIEVEGOODSLIST_B__0_OFFSET UNITYSDK_OFFSET(0x181E83B0)

namespace MiHoYo::SDK::Base::GoodsPlatform
{
	inline static constexpr unsigned int GoodsPlatformManager___c__DisplayClass9_0_TypeDefinitionIndex = 8504;

	class GoodsPlatformManager___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* callback; // 0x10
		::MiHoYo::SDK::Base::GoodsPlatform::GoodsPlatformManager* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_GOODSPLATFORMMANAGER___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Void _RetrieveGoodsList_b__0(::System::Int32 a1, ::System::String* a2, ::MiHoYo::SDK::JSONArray* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::MiHoYo::SDK::JSONArray*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_GOODSPLATFORMMANAGER___C__DISPLAYCLASS9_0__RETRIEVEGOODSLIST_B__0_OFFSET))(this, a1, a2, a3);
		}
	};
}
