#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/HoYoChannelBaseResult.h"

namespace MiHoYo::SDK::PC::OS { class SteamLoginExtension; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELLOGINRESULT_FROMJSON_OFFSET UNITYSDK_OFFSET(0x194B2280)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELLOGINRESULT_TOJSON_OFFSET UNITYSDK_OFFSET(0x194B2270)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELLOGINRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x194B22C0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelLoginResult_TypeDefinitionIndex = 19379;

	class HoYoChannelLoginResult : public ::MiHoYo::SDK::PC::OS::HoYoChannelBaseResult
	{
	public:
		::System::Boolean authenticated; // 0x28
		::MiHoYo::SDK::PC::OS::SteamLoginExtension* steam; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELLOGINRESULT__CTOR_OFFSET))(this);
		}

		::System::String* ToJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELLOGINRESULT_TOJSON_OFFSET))(this);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelLoginResult* FromJson(::System::String* json)
		{
			return ((::MiHoYo::SDK::PC::OS::HoYoChannelLoginResult*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELLOGINRESULT_FROMJSON_OFFSET))(json);
		}
	};
}
