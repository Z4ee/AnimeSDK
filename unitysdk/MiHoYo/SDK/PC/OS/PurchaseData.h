#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class GooglePurchaseExtension; }
namespace MiHoYo::SDK::PC::OS { class SteamPurchaseExtension; }
namespace MiHoYo::SDK::PC::OS { class XboxPurchaseExtension; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_PURCHASEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEACD60)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int PurchaseData_TypeDefinitionIndex = 20692;

	class PurchaseData : public ::System::Object
	{
	public:
		::System::String* productIdentifier; // 0x10
		::System::String* transactionId; // 0x18
		::MiHoYo::SDK::PC::OS::GooglePurchaseExtension* google; // 0x20
		::MiHoYo::SDK::PC::OS::SteamPurchaseExtension* steam; // 0x28
		::MiHoYo::SDK::PC::OS::XboxPurchaseExtension* xbox; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_PURCHASEDATA__CTOR_OFFSET))(this);
		}
	};
}
