#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK::PC::OS { class ProductData; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_XBOXPAYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA2FF30)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int XboxPayInfo_TypeDefinitionIndex = 8604;

	class XboxPayInfo : public ::System::Object
	{
	public:
		::System::String* storeId; // 0x10
		::System::String* orderNo; // 0x18
		::System::String* skuId; // 0x20
		::System::String* countryCode; // 0x28
		::MiHoYo::SDK::PC::OS::ProductData* productData; // 0x30
		::System::String* xuid; // 0x38
		::System::String* collectionsId; // 0x40
		::MiHoYo::SDK::JSONNode* paramsInfo; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_XBOXPAYINFO__CTOR_OFFSET))(this);
		}
	};
}
