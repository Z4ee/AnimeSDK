#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/HoYoChannelBaseResult.h"

namespace MiHoYo::SDK::PC::OS { class SteamLoginExtension; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELLOGINRESULT_FROMJSON_OFFSET UNITYSDK_OFFSET(0x18394190)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELLOGINRESULT_TOJSON_OFFSET UNITYSDK_OFFSET(0x18394180)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELLOGINRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x183941D0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelLoginResult_TypeDefinitionIndex = 8455;

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

		static ::MiHoYo::SDK::PC::OS::HoYoChannelLoginResult* FromJson(::System::String* a1)
		{
			return ((::MiHoYo::SDK::PC::OS::HoYoChannelLoginResult*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELLOGINRESULT_FROMJSON_OFFSET))(a1);
		}
	};
}
