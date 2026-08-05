#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/HoYoChannelAsyncParams.h"

namespace System { class String; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELSHOWERRORDIALOGPARAMS_TOJSON_OFFSET UNITYSDK_OFFSET(0x1D4AF560)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELSHOWERRORDIALOGPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4AF570)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelShowErrorDialogParams_TypeDefinitionIndex = 20709;

	class HoYoChannelShowErrorDialogParams : public ::MiHoYo::SDK::PC::OS::HoYoChannelAsyncParams
	{
	public:
		::System::Int32 errorCode; // 0x18
		::System::String* content; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELSHOWERRORDIALOGPARAMS__CTOR_OFFSET))(this);
		}

		::System::String* ToJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELSHOWERRORDIALOGPARAMS_TOJSON_OFFSET))(this);
		}
	};
}
