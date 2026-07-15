#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/HoYoChannelBaseResult.h"

namespace System { class String; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELAUTHTOKENRESULT_FROMJSON_OFFSET UNITYSDK_OFFSET(0x19940040)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELAUTHTOKENRESULT_TOJSON_OFFSET UNITYSDK_OFFSET(0x19940030)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELAUTHTOKENRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x19940080)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelAuthTokenResult_TypeDefinitionIndex = 8469;

	class HoYoChannelAuthTokenResult : public ::MiHoYo::SDK::PC::OS::HoYoChannelBaseResult
	{
	public:
		::System::String* token; // 0x28

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
