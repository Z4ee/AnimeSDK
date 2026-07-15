#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_BOXCONFIGMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1886D630)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int BoxConfigModel_TypeDefinitionIndex = 7821;

	class BoxConfigModel : public ::System::Object
	{
	public:
		::System::Single save_image_time_out; // 0x10
		::System::Boolean save_image_loading; // 0x14
		::System::Single get_clipboard_data_timeout; // 0x18
		::System::Single share_time_out; // 0x1C
		::System::Int32 share_text_max_length; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BOXCONFIGMODEL__CTOR_OFFSET))(this);
		}
	};
}
