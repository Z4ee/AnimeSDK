#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK { class UGCInterface; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_UGCINTERFACE___C__DISPLAYCLASS37_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB2BFAF0)
#define MIHOYO_SDK_UGCINTERFACE___C__DISPLAYCLASS37_0__POSTHTTPREQUESTTASK_B__0_OFFSET UNITYSDK_OFFSET(0xB2C2BA0)
#define MIHOYO_SDK_UGCINTERFACE___C__DISPLAYCLASS37_0__POSTHTTPREQUESTTASK_B__1_OFFSET UNITYSDK_OFFSET(0xB2C2F20)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int UGCInterface___c__DisplayClass37_0_TypeDefinitionIndex = 46904;

	class UGCInterface___c__DisplayClass37_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::UGCInterface* __4__this; // 0x10
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback; // 0x18
		::System::Action* task; // 0x20
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* tokenFailedCallback; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE___C__DISPLAYCLASS37_0__CTOR_OFFSET))(this);
		}

		::System::Void _PostHttpRequestTask_b__0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE___C__DISPLAYCLASS37_0__POSTHTTPREQUESTTASK_B__0_OFFSET))(this, a1);
		}

		::System::Void _PostHttpRequestTask_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE___C__DISPLAYCLASS37_0__POSTHTTPREQUESTTASK_B__1_OFFSET))(this);
		}
	};
}
