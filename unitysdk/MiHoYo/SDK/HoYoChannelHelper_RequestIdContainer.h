#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_HOYOCHANNELHELPER_REQUESTIDCONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF822B0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoChannelHelper_RequestIdContainer_TypeDefinitionIndex = 37569;

	class HoYoChannelHelper_RequestIdContainer : public ::System::Object
	{
	public:
		::System::String* requestId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELHELPER_REQUESTIDCONTAINER__CTOR_OFFSET))(this);
		}
	};
}
