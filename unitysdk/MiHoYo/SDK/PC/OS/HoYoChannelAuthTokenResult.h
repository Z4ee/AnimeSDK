#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/HoYoChannelBaseResult.h"

namespace MiHoYo::SDK::PC::OS { class XboxAuthTokenExtension; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELAUTHTOKENRESULT_FROMJSON_OFFSET UNITYSDK_OFFSET(0x1BA1DDD0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELAUTHTOKENRESULT_TOJSON_OFFSET UNITYSDK_OFFSET(0x1BA1DDC0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELAUTHTOKENRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA1DE10)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelAuthTokenResult_TypeDefinitionIndex = 8537;

	class HoYoChannelAuthTokenResult : public ::MiHoYo::SDK::PC::OS::HoYoChannelBaseResult
	{
	public:
		// static const ::System::Int32 CHANNEL_USER_NOT_SIGNED_IN = 0xFFFFF82F; // 0x0
		::System::String* token; // 0x30
		::MiHoYo::SDK::PC::OS::XboxAuthTokenExtension* xbox; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELAUTHTOKENRESULT__CTOR_OFFSET))(this);
		}

		::System::String* ToJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELAUTHTOKENRESULT_TOJSON_OFFSET))(this);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelAuthTokenResult* FromJson(::System::String* a1)
		{
			return ((::MiHoYo::SDK::PC::OS::HoYoChannelAuthTokenResult*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELAUTHTOKENRESULT_FROMJSON_OFFSET))(a1);
		}
	};
}
