#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define MIHOYO_SDK_PS_PAYMANAGER_PSPRODUCT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3B68530)

namespace MiHoYo::SDK::PS
{
	inline static constexpr unsigned int PayManager_PSProduct_TypeDefinitionIndex = 8853;

	struct alignas(8) PayManager_PSProduct
	{
		::System::String* productLabel; // 0x10
		::System::String* productName; // 0x18
		::System::String* longDescription; // 0x20
		::System::String* skuLabel; // 0x28
		::System::String* price; // 0x30
		::System::UInt64 intPrice; // 0x38

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER_PSPRODUCT_TOSTRING_OFFSET))(this);
		}
	};
}
