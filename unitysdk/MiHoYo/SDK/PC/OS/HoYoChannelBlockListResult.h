#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/HoYoChannelBaseResult.h"

namespace MiHoYo::SDK::PC::OS { class XboxBlockListExtension; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELBLOCKLISTRESULT_FROMJSON_OFFSET UNITYSDK_OFFSET(0x1BDD6E00)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELBLOCKLISTRESULT_TOJSON_OFFSET UNITYSDK_OFFSET(0x1BDD6DF0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELBLOCKLISTRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDD6E40)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelBlockListResult_TypeDefinitionIndex = 20715;

	class HoYoChannelBlockListResult : public ::MiHoYo::SDK::PC::OS::HoYoChannelBaseResult
	{
	public:
		::MiHoYo::SDK::PC::OS::XboxBlockListExtension* xbox; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELBLOCKLISTRESULT__CTOR_OFFSET))(this);
		}

		::System::String* ToJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELBLOCKLISTRESULT_TOJSON_OFFSET))(this);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelBlockListResult* FromJson(::System::String* json)
		{
			return ((::MiHoYo::SDK::PC::OS::HoYoChannelBlockListResult*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELBLOCKLISTRESULT_FROMJSON_OFFSET))(json);
		}
	};
}
