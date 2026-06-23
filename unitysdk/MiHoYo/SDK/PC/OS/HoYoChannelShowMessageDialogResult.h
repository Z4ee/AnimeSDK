#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/HoYoChannelBaseResult.h"

namespace System { class String; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELSHOWMESSAGEDIALOGRESULT_FROMJSON_OFFSET UNITYSDK_OFFSET(0x1C395260)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELSHOWMESSAGEDIALOGRESULT_TOJSON_OFFSET UNITYSDK_OFFSET(0x1C395250)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELSHOWMESSAGEDIALOGRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3952A0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelShowMessageDialogResult_TypeDefinitionIndex = 20361;

	class HoYoChannelShowMessageDialogResult : public ::MiHoYo::SDK::PC::OS::HoYoChannelBaseResult
	{
	public:
		::System::Int32 button; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELSHOWMESSAGEDIALOGRESULT__CTOR_OFFSET))(this);
		}

		::System::String* ToJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELSHOWMESSAGEDIALOGRESULT_TOJSON_OFFSET))(this);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelShowMessageDialogResult* FromJson(::System::String* json)
		{
			return ((::MiHoYo::SDK::PC::OS::HoYoChannelShowMessageDialogResult*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELSHOWMESSAGEDIALOGRESULT_FROMJSON_OFFSET))(json);
		}
	};
}
