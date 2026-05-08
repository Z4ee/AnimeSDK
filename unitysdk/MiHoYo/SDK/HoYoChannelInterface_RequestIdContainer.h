#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_HOYOCHANNELINTERFACE_REQUESTIDCONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD91C10)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoChannelInterface_RequestIdContainer_TypeDefinitionIndex = 35331;

	class HoYoChannelInterface_RequestIdContainer : public ::System::Object
	{
	public:
		::System::String* requestId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_REQUESTIDCONTAINER__CTOR_OFFSET))(this);
		}
	};
}
