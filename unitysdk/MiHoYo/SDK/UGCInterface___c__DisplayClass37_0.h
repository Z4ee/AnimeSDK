#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK { class UGCInterface; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_UGCINTERFACE___C__DISPLAYCLASS37_0__CTOR_OFFSET UNITYSDK_OFFSET(0x85A1310)
#define MIHOYO_SDK_UGCINTERFACE___C__DISPLAYCLASS37_0__POSTHTTPREQUESTTASK_B__0_OFFSET UNITYSDK_OFFSET(0x85A4470)
#define MIHOYO_SDK_UGCINTERFACE___C__DISPLAYCLASS37_0__POSTHTTPREQUESTTASK_B__1_OFFSET UNITYSDK_OFFSET(0x85A4800)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int UGCInterface___c__DisplayClass37_0_TypeDefinitionIndex = 37208;

	class UGCInterface___c__DisplayClass37_0 : public ::System::Object
	{
	public:
		::System::Action* task; // 0x10
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* tokenFailedCallback; // 0x18
		::MiHoYo::SDK::UGCInterface* __4__this; // 0x20
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE___C__DISPLAYCLASS37_0__CTOR_OFFSET))(this);
		}

		::System::Void _PostHttpRequestTask_b__0(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE___C__DISPLAYCLASS37_0__POSTHTTPREQUESTTASK_B__0_OFFSET))(this, response);
		}

		::System::Void _PostHttpRequestTask_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE___C__DISPLAYCLASS37_0__POSTHTTPREQUESTTASK_B__1_OFFSET))(this);
		}
	};
}
