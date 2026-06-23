#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/HoYoChannelBaseResult.h"

namespace MiHoYo::SDK::PC::OS { class XboxSocialUpdateExtension; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELSOCIALUPDATERESULT_TOJSON_OFFSET UNITYSDK_OFFSET(0x1BB43550)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELSOCIALUPDATERESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB43560)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelSocialUpdateResult_TypeDefinitionIndex = 20372;

	class HoYoChannelSocialUpdateResult : public ::MiHoYo::SDK::PC::OS::HoYoChannelBaseResult
	{
	public:
		::MiHoYo::SDK::PC::OS::XboxSocialUpdateExtension* xbox; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELSOCIALUPDATERESULT__CTOR_OFFSET))(this);
		}

		::System::String* ToJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELSOCIALUPDATERESULT_TOJSON_OFFSET))(this);
		}
	};
}
