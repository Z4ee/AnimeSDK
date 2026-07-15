#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MHYSDKC_Crash_TypeDefinitionIndex = 44445;

	class MHYSDKC_Crash : public ::System::Object
	{
	public:
		// static const ::System::String* SET_CUSTEOM_KEY; // 0x0
		// static const ::System::String* SET_USER_ID; // 0x0
		// static const ::System::String* APPEND_LOG; // 0x0
		// static const ::System::String* CONFIG; // 0x0
		// static const ::System::String* ENABLE_REPORT; // 0x0
		// static const ::System::String* DELETE_UNSENT_EVENT; // 0x0
	};
}
