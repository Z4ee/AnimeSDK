#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace MiHoYo::SDK::PC::OS { class AgeGatePayManager; }
namespace System { class Action; }

#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER___C__DISPLAYCLASS25_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9C51F0)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER___C__DISPLAYCLASS25_0__REQUESTPARENTCONSENT_G__CALLBACK_0_OFFSET UNITYSDK_OFFSET(0x1B9C6E70)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int AgeGatePayManager___c__DisplayClass25_0_TypeDefinitionIndex = 8442;

	class AgeGatePayManager___c__DisplayClass25_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::PC::OS::AgeGatePayManager* __4__this; // 0x10
		::System::Action* successCallback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER___C__DISPLAYCLASS25_0__CTOR_OFFSET))(this);
		}

		::System::Void _RequestParentConsent_g__callback_0(::MiHoYo::SDK::NetworkResponseModelEx* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER___C__DISPLAYCLASS25_0__REQUESTPARENTCONSENT_G__CALLBACK_0_OFFSET))(this, a1);
		}
	};
}
