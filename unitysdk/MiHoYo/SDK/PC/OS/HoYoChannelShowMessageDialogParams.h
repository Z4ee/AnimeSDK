#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/HoYoChannelAsyncParams.h"

namespace System { class String; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELSHOWMESSAGEDIALOGPARAMS_TOJSON_OFFSET UNITYSDK_OFFSET(0x1B9DDCE0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELSHOWMESSAGEDIALOGPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9DDCF0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelShowMessageDialogParams_TypeDefinitionIndex = 20360;

	class HoYoChannelShowMessageDialogParams : public ::MiHoYo::SDK::PC::OS::HoYoChannelAsyncParams
	{
	public:
		::System::String* title; // 0x18
		::System::String* content; // 0x20
		::Il2CppArray<::System::String*>* button; // 0x28
		::System::Int32 defaultButton; // 0x30
		::System::Int32 cancelButton; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELSHOWMESSAGEDIALOGPARAMS__CTOR_OFFSET))(this);
		}

		::System::String* ToJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELSHOWMESSAGEDIALOGPARAMS_TOJSON_OFFSET))(this);
		}
	};
}
