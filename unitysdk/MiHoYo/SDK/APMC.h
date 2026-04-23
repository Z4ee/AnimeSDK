#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int APMC_TypeDefinitionIndex = 43101;

	class APMC : public ::System::Object
	{
	public:
		// static const ::System::String* MODULE_NAME; // 0x0
		// static const ::System::String* OOM_PLUGIN; // 0x0
		// static const ::System::String* METRICS_PLUGIN; // 0x0
		// static const ::System::String* LOGBACK_PLUGIN; // 0x0
		// static const ::System::String* LOGBACK_PLUGIN_CONFIG; // 0x0
		// static const ::System::String* REPLAY_PLUGIN; // 0x0
		// static const ::System::String* FTC_SWITCH; // 0x0
		// static const ::System::String* FTC_LRSAG; // 0x0
	};
}
