#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK::Base::GoodsPlatform { class GoodsPlatformManager; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_BASE_GOODSPLATFORM_GOODSPLATFORMMANAGER___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC347C0)
#define MIHOYO_SDK_BASE_GOODSPLATFORM_GOODSPLATFORMMANAGER___C__DISPLAYCLASS9_0__RETRIEVEGOODSLIST_B__0_OFFSET UNITYSDK_OFFSET(0x1BC34E10)
#define MIHOYO_SDK_BASE_GOODSPLATFORM_GOODSPLATFORMMANAGER___C__DISPLAYCLASS9_0__RETRIEVEGOODSLIST_B__1_OFFSET UNITYSDK_OFFSET(0x1BC358A0)

namespace MiHoYo::SDK::Base::GoodsPlatform
{
	inline static constexpr unsigned int GoodsPlatformManager___c__DisplayClass9_0_TypeDefinitionIndex = 8844;

	class GoodsPlatformManager___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Base::GoodsPlatform::GoodsPlatformManager* __4__this; // 0x10
		::System::Action_3<::System::Int32, ::System::String*, ::MiHoYo::SDK::JSONNode*>* onGoodsListResult; // 0x18
		::System::Action_1<::System::String*>* callback; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_GOODSPLATFORMMANAGER___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Void _RetrieveGoodsList_b__0(::System::Int32 a1, ::System::String* a2, ::MiHoYo::SDK::JSONNode* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_GOODSPLATFORMMANAGER___C__DISPLAYCLASS9_0__RETRIEVEGOODSLIST_B__0_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _RetrieveGoodsList_b__1(::System::Int32 a1, ::System::String* a2, ::MiHoYo::SDK::JSONNode* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_GOODSPLATFORMMANAGER___C__DISPLAYCLASS9_0__RETRIEVEGOODSLIST_B__1_OFFSET))(this, a1, a2, a3);
		}
	};
}
