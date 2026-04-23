#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK::PC::OS { class ProductData; }
namespace MiHoYo::SDK::PC::OS { class PurchaseData; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_GOOGLEPLAYBILLINGPAYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x175A3180)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int GooglePlayBillingPayInfo_TypeDefinitionIndex = 7515;

	class GooglePlayBillingPayInfo : public ::System::Object
	{
	public:
		::MiHoYo::SDK::JSONNode* paramsInfo; // 0x10
		::MiHoYo::SDK::PC::OS::PurchaseData* purchaseData; // 0x18
		::MiHoYo::SDK::PC::OS::ProductData* productData; // 0x20
		::System::String* orderNo; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_GOOGLEPLAYBILLINGPAYINFO__CTOR_OFFSET))(this);
		}
	};
}
