#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/HoYoChannelBaseResult.h"

namespace MiHoYo::SDK::PC::OS { class XboxCheckPermissionExtension; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELCHECKPERMISSIONRESULT_FROMJSON_OFFSET UNITYSDK_OFFSET(0x1C7D2C70)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELCHECKPERMISSIONRESULT_TOJSON_OFFSET UNITYSDK_OFFSET(0x1C7D2C60)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELCHECKPERMISSIONRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C7D2CB0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelCheckPermissionResult_TypeDefinitionIndex = 20701;

	class HoYoChannelCheckPermissionResult : public ::MiHoYo::SDK::PC::OS::HoYoChannelBaseResult
	{
	public:
		::MiHoYo::SDK::PC::OS::XboxCheckPermissionExtension* xbox; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELCHECKPERMISSIONRESULT__CTOR_OFFSET))(this);
		}

		::System::String* ToJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELCHECKPERMISSIONRESULT_TOJSON_OFFSET))(this);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelCheckPermissionResult* FromJson(::System::String* json)
		{
			return ((::MiHoYo::SDK::PC::OS::HoYoChannelCheckPermissionResult*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELCHECKPERMISSIONRESULT_FROMJSON_OFFSET))(json);
		}
	};
}
