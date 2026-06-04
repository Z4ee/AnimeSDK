#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace MiHoYo::SDK::PC::OS { class AgeGatePayManager; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER___C__DISPLAYCLASS29_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18387300)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER___C__DISPLAYCLASS29_0__TRYUPDATETICKET_G__NETWORKCALLBACK_0_OFFSET UNITYSDK_OFFSET(0x183885A0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int AgeGatePayManager___c__DisplayClass29_0_TypeDefinitionIndex = 8407;

	class AgeGatePayManager___c__DisplayClass29_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::Int32>* callback; // 0x10
		::MiHoYo::SDK::PC::OS::AgeGatePayManager* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER___C__DISPLAYCLASS29_0__CTOR_OFFSET))(this);
		}

		::System::Void _TryUpdateTicket_g__networkCallback_0(::MiHoYo::SDK::NetworkResponseModelEx* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER___C__DISPLAYCLASS29_0__TRYUPDATETICKET_G__NETWORKCALLBACK_0_OFFSET))(this, a1);
		}
	};
}
