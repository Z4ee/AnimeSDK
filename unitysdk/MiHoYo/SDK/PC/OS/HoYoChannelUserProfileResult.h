#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/HoYoChannelBaseResult.h"

namespace MiHoYo::SDK::PC::OS { class UserProfileData; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELUSERPROFILERESULT_FROMJSON_OFFSET UNITYSDK_OFFSET(0x1C575FB0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELUSERPROFILERESULT_TOJSON_OFFSET UNITYSDK_OFFSET(0x1C575FA0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELUSERPROFILERESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C575FF0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelUserProfileResult_TypeDefinitionIndex = 20371;

	class HoYoChannelUserProfileResult : public ::MiHoYo::SDK::PC::OS::HoYoChannelBaseResult
	{
	public:
		::MiHoYo::SDK::PC::OS::UserProfileData* profile; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELUSERPROFILERESULT__CTOR_OFFSET))(this);
		}

		::System::String* ToJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELUSERPROFILERESULT_TOJSON_OFFSET))(this);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelUserProfileResult* FromJson(::System::String* json)
		{
			return ((::MiHoYo::SDK::PC::OS::HoYoChannelUserProfileResult*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELUSERPROFILERESULT_FROMJSON_OFFSET))(json);
		}
	};
}
