#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MHYSDKC_AdjustSessionResultInfo_TypeDefinitionIndex = 44477;

	class MHYSDKC_AdjustSessionResultInfo : public ::System::Object
	{
	public:
		// static const ::System::String* SUCCEED; // 0x0
		// static const ::System::String* DEVICEID; // 0x0
		// static const ::System::String* MESSAGE; // 0x0
		// static const ::System::String* TIMESTAMP; // 0x0
		// static const ::System::String* JSON_RESPONSE; // 0x0
		// static const ::System::String* WILL_RETRY; // 0x0
	};
}
