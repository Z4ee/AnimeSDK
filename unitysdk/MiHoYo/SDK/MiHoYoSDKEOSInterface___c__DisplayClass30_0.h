#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONArray; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_MIHOYOSDKEOSINTERFACE___C__DISPLAYCLASS30_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5E0530)
#define MIHOYO_SDK_MIHOYOSDKEOSINTERFACE___C__DISPLAYCLASS30_0__GETPRODUCTLIST_B__0_OFFSET UNITYSDK_OFFSET(0x1E5E0540)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKEOSInterface___c__DisplayClass30_0_TypeDefinitionIndex = 37352;

	class MiHoYoSDKEOSInterface___c__DisplayClass30_0 : public ::System::Object
	{
	public:
		::System::String* traceId; // 0x10
		::MiHoYo::SDK::JSONArray* productArray; // 0x18
		::System::Action_1<::MiHoYo::SDK::JSONArray*>* callback; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSINTERFACE___C__DISPLAYCLASS30_0__CTOR_OFFSET))(this);
		}

		::System::Void _GetProductList_b__0(::System::Boolean result)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSINTERFACE___C__DISPLAYCLASS30_0__GETPRODUCTLIST_B__0_OFFSET))(this, result);
		}
	};
}
