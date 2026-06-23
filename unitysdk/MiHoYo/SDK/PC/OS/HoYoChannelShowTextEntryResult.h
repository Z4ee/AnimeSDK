#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/HoYoChannelBaseResult.h"

namespace System { class String; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELSHOWTEXTENTRYRESULT_FROMJSON_OFFSET UNITYSDK_OFFSET(0x1BF76050)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELSHOWTEXTENTRYRESULT_TOJSON_OFFSET UNITYSDK_OFFSET(0x1BF76040)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELSHOWTEXTENTRYRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF76090)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelShowTextEntryResult_TypeDefinitionIndex = 20357;

	class HoYoChannelShowTextEntryResult : public ::MiHoYo::SDK::PC::OS::HoYoChannelBaseResult
	{
	public:
		// static const ::System::Int32 CHANNEL_CANCELLED = 0xFFFFFFFA; // 0x0
		::System::String* text; // 0x30
		::System::Int32 size; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELSHOWTEXTENTRYRESULT__CTOR_OFFSET))(this);
		}

		::System::String* ToJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELSHOWTEXTENTRYRESULT_TOJSON_OFFSET))(this);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelShowTextEntryResult* FromJson(::System::String* json)
		{
			return ((::MiHoYo::SDK::PC::OS::HoYoChannelShowTextEntryResult*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELSHOWTEXTENTRYRESULT_FROMJSON_OFFSET))(json);
		}
	};
}
