#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_PC_OS_XBOXPURCHASEEXTENSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABE1230)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int XboxPurchaseExtension_TypeDefinitionIndex = 8596;

	class XboxPurchaseExtension : public ::System::Object
	{
	public:
		::System::String* xuid; // 0x10
		::System::String* storeId; // 0x18
		::System::String* skuId; // 0x20
		::System::String* collectionsId; // 0x28
		::System::Int32 quantity; // 0x30
		::System::String* trackingId; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_XBOXPURCHASEEXTENSION__CTOR_OFFSET))(this);
		}
	};
}
