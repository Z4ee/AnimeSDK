#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/HoYoChannelBaseResult.h"

namespace System { class String; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELMICROTXNRESULT_FROMJSON_OFFSET UNITYSDK_OFFSET(0x1B337D20)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELMICROTXNRESULT_TOJSON_OFFSET UNITYSDK_OFFSET(0x1B337D10)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELMICROTXNRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B337D60)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelMicroTxnResult_TypeDefinitionIndex = 20449;

	class HoYoChannelMicroTxnResult : public ::MiHoYo::SDK::PC::OS::HoYoChannelBaseResult
	{
	public:
		::System::UInt32 appId; // 0x30
		::System::String* orderId; // 0x38
		::System::Boolean authorized; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELMICROTXNRESULT__CTOR_OFFSET))(this);
		}

		::System::String* ToJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELMICROTXNRESULT_TOJSON_OFFSET))(this);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelMicroTxnResult* FromJson(::System::String* json)
		{
			return ((::MiHoYo::SDK::PC::OS::HoYoChannelMicroTxnResult*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELMICROTXNRESULT_FROMJSON_OFFSET))(json);
		}
	};
}
