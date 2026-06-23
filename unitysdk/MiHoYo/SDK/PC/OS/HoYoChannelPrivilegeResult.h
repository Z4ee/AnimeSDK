#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/HoYoChannelBaseResult.h"

namespace MiHoYo::SDK::PC::OS { class XboxPrivilegeExtension; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELPRIVILEGERESULT_FROMJSON_OFFSET UNITYSDK_OFFSET(0x1B337DC0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELPRIVILEGERESULT_TOJSON_OFFSET UNITYSDK_OFFSET(0x1B337DB0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELPRIVILEGERESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B337E00)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelPrivilegeResult_TypeDefinitionIndex = 20352;

	class HoYoChannelPrivilegeResult : public ::MiHoYo::SDK::PC::OS::HoYoChannelBaseResult
	{
	public:
		::MiHoYo::SDK::PC::OS::XboxPrivilegeExtension* xbox; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELPRIVILEGERESULT__CTOR_OFFSET))(this);
		}

		::System::String* ToJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELPRIVILEGERESULT_TOJSON_OFFSET))(this);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelPrivilegeResult* FromJson(::System::String* json)
		{
			return ((::MiHoYo::SDK::PC::OS::HoYoChannelPrivilegeResult*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELPRIVILEGERESULT_FROMJSON_OFFSET))(json);
		}
	};
}
