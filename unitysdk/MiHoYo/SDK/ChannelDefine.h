#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_CHANNELDEFINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1A8870)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ChannelDefine_TypeDefinitionIndex = 7520;

	class ChannelDefine : public ::System::Object
	{
	public:
		// static const ::System::String* APP_ID; // 0x0
		// static const ::System::String* APP_KEY; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CHANNELDEFINE__CTOR_OFFSET))(this);
		}
	};
}
