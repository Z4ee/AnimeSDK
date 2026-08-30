#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class Web; }
namespace MiHoYo::SDK::HoYoPass { class WebPageManager; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1AEAB6E0)
#define MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER___C__DISPLAYCLASS7_0__OPENWEBPAGE_B__5_OFFSET UNITYSDK_OFFSET(0x1AEAC8E0)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int WebPageManager___c__DisplayClass7_0_TypeDefinitionIndex = 8302;

	class WebPageManager___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::HoYoPass::WebPageManager* __4__this; // 0x10
		::System::Action_2<::MiHoYo::SDK::Web*, ::MiHoYo::SDK::JSONNode*>* bridgeValue; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void _OpenWebPage_b__5(::MiHoYo::SDK::JSONNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER___C__DISPLAYCLASS7_0__OPENWEBPAGE_B__5_OFFSET))(this, a1);
		}
	};
}
