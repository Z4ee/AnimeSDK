#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/HoYoChannelBaseResult.h"

namespace System { class String; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELSHOWERRORDIALOGRESULT_FROMJSON_OFFSET UNITYSDK_OFFSET(0x1C968AE0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELSHOWERRORDIALOGRESULT_TOJSON_OFFSET UNITYSDK_OFFSET(0x1C968AD0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELSHOWERRORDIALOGRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C968B20)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelShowErrorDialogResult_TypeDefinitionIndex = 20363;

	class HoYoChannelShowErrorDialogResult : public ::MiHoYo::SDK::PC::OS::HoYoChannelBaseResult
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELSHOWERRORDIALOGRESULT__CTOR_OFFSET))(this);
		}

		::System::String* ToJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELSHOWERRORDIALOGRESULT_TOJSON_OFFSET))(this);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelShowErrorDialogResult* FromJson(::System::String* json)
		{
			return ((::MiHoYo::SDK::PC::OS::HoYoChannelShowErrorDialogResult*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELSHOWERRORDIALOGRESULT_FROMJSON_OFFSET))(json);
		}
	};
}
