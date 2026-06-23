#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK::PC::OS { class ProductData; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_XBOXPAYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE591E0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int XboxPayInfo_TypeDefinitionIndex = 20410;

	class XboxPayInfo : public ::System::Object
	{
	public:
		::System::String* xuid; // 0x10
		::System::String* skuId; // 0x18
		::System::String* storeId; // 0x20
		::System::String* orderNo; // 0x28
		::MiHoYo::SDK::JSONNode* paramsInfo; // 0x30
		::MiHoYo::SDK::PC::OS::ProductData* productData; // 0x38
		::System::String* countryCode; // 0x40
		::System::String* collectionsId; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_XBOXPAYINFO__CTOR_OFFSET))(this);
		}
	};
}
