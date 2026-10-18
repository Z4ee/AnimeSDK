#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/HoYoChannelBaseResult.h"

namespace MiHoYo::SDK::PC::OS { class PurchaseData; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELCHECKOUTRESULT_FROMJSON_OFFSET UNITYSDK_OFFSET(0x1BF22140)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELCHECKOUTRESULT_TOJSON_OFFSET UNITYSDK_OFFSET(0x1BF22130)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELCHECKOUTRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF22180)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelCheckoutResult_TypeDefinitionIndex = 8601;

	class HoYoChannelCheckoutResult : public ::MiHoYo::SDK::PC::OS::HoYoChannelBaseResult
	{
	public:
		// static const ::System::Int32 CHANNEL_PURCHASE_PROCESSING = 0xFA5; // 0x0
		// static const ::System::Int32 CHANNEL_CANCELLED = 0xFFFFFFFA; // 0x0
		::MiHoYo::SDK::PC::OS::PurchaseData* purchase; // 0x30
		::System::Boolean canceled; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELCHECKOUTRESULT__CTOR_OFFSET))(this);
		}

		::System::String* ToJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELCHECKOUTRESULT_TOJSON_OFFSET))(this);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelCheckoutResult* FromJson(::System::String* a1)
		{
			return ((::MiHoYo::SDK::PC::OS::HoYoChannelCheckoutResult*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELCHECKOUTRESULT_FROMJSON_OFFSET))(a1);
		}
	};
}
