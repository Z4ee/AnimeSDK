#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MHYSDKC_AdjustConfigInfo_TypeDefinitionIndex = 44473;

	class MHYSDKC_AdjustConfigInfo : public ::System::Object
	{
	public:
		// static const ::System::String* IS_PRODUCT; // 0x0
		// static const ::System::String* START_DELAY; // 0x0
		// static const ::System::String* ENABLE_BUFFER; // 0x0
		// static const ::System::String* SIGN; // 0x0
		// static const ::System::String* ENABLE_BACKGROUND; // 0x0
		// static const ::System::String* DEFAULT_TRACKER; // 0x0
		// static const ::System::String* ENABLE_LOG; // 0x0
	};
}
