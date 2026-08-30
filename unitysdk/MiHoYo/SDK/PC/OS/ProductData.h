#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class XboxProductExtension; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_PRODUCTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA38CE0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int ProductData_TypeDefinitionIndex = 8538;

	class ProductData : public ::System::Object
	{
	public:
		::System::String* productIdentifier; // 0x10
		::System::String* localizedTitle; // 0x18
		::System::String* localizedDescription; // 0x20
		::System::String* productName; // 0x28
		::System::String* currencyCode; // 0x30
		::System::String* showPrice; // 0x38
		::System::Double price; // 0x40
		::System::String* offerId; // 0x48
		::MiHoYo::SDK::PC::OS::XboxProductExtension* xbox; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_PRODUCTDATA__CTOR_OFFSET))(this);
		}
	};
}
