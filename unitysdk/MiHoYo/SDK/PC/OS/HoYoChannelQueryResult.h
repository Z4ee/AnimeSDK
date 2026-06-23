#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/HoYoChannelBaseResult.h"

namespace MiHoYo::SDK::PC::OS { class DeviceQueryResult; }
namespace MiHoYo::SDK::PC::OS { class UserQueryResult; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELQUERYRESULT_FROMJSON_OFFSET UNITYSDK_OFFSET(0x1C3951C0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELQUERYRESULT_TOJSON_OFFSET UNITYSDK_OFFSET(0x1C3951B0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELQUERYRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C395200)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelQueryResult_TypeDefinitionIndex = 20390;

	class HoYoChannelQueryResult : public ::MiHoYo::SDK::PC::OS::HoYoChannelBaseResult
	{
	public:
		::MiHoYo::SDK::PC::OS::DeviceQueryResult* device; // 0x30
		::MiHoYo::SDK::PC::OS::UserQueryResult* user; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELQUERYRESULT__CTOR_OFFSET))(this);
		}

		::System::String* ToJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELQUERYRESULT_TOJSON_OFFSET))(this);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelQueryResult* FromJson(::System::String* json)
		{
			return ((::MiHoYo::SDK::PC::OS::HoYoChannelQueryResult*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELQUERYRESULT_FROMJSON_OFFSET))(json);
		}
	};
}
