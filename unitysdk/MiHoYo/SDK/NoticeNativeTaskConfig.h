#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/SwitchBaseConfig.h"

namespace System { class String; }

#define MIHOYO_SDK_NOTICENATIVETASKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4ACFA0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int NoticeNativeTaskConfig_TypeDefinitionIndex = 20038;

	class NoticeNativeTaskConfig : public ::MiHoYo::SDK::SwitchBaseConfig
	{
	public:
		::System::Void _ctor(::System::String* dataString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NOTICENATIVETASKCONFIG__CTOR_OFFSET))(this, dataString);
		}
	};
}
