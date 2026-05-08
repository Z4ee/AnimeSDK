#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_TELEMETRYBOXCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3599A0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int TelemetryBoxConfig_TypeDefinitionIndex = 18783;

	class TelemetryBoxConfig : public ::System::Object
	{
	public:
		::System::Boolean datauploadEnable; // 0x10

		::System::Void _ctor(::System::String* dataString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TELEMETRYBOXCONFIG__CTOR_OFFSET))(this, dataString);
		}
	};
}
