#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/HoYoChannelAsyncParams.h"

namespace MiHoYo::SDK::PC::OS { class XboxPrivilegeParam; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELPRIVILEGEPARAMS_TOJSON_OFFSET UNITYSDK_OFFSET(0x1BE59180)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELPRIVILEGEPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE59190)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelPrivilegeParams_TypeDefinitionIndex = 20351;

	class HoYoChannelPrivilegeParams : public ::MiHoYo::SDK::PC::OS::HoYoChannelAsyncParams
	{
	public:
		::MiHoYo::SDK::PC::OS::XboxPrivilegeParam* xbox; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELPRIVILEGEPARAMS__CTOR_OFFSET))(this);
		}

		::System::String* ToJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELPRIVILEGEPARAMS_TOJSON_OFFSET))(this);
		}
	};
}
