#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/HoYoChannelBaseResult.h"

namespace MiHoYo::SDK::PC::OS { class PurchaseData; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELCHECKOUTRESULT_FROMJSON_OFFSET UNITYSDK_OFFSET(0x1B9DCBA0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELCHECKOUTRESULT_TOJSON_OFFSET UNITYSDK_OFFSET(0x1B9DCB90)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELCHECKOUTRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9DCBE0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelCheckoutResult_TypeDefinitionIndex = 20347;

	class HoYoChannelCheckoutResult : public ::MiHoYo::SDK::PC::OS::HoYoChannelBaseResult
	{
	public:
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

		static ::MiHoYo::SDK::PC::OS::HoYoChannelCheckoutResult* FromJson(::System::String* json)
		{
			return ((::MiHoYo::SDK::PC::OS::HoYoChannelCheckoutResult*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELCHECKOUTRESULT_FROMJSON_OFFSET))(json);
		}
	};
}
