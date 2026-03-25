#pragma once
#include "unitysdk/unitysdk.h"

namespace Microsoft::Win32
{
	inline static constexpr unsigned int UnsafeNativeMethods_ManifestEtw_ActivityControl_TypeDefinitionIndex = 95;

	enum class UnsafeNativeMethods_ManifestEtw_ActivityControl : ::System::UInt32
	{
		EVENT_ACTIVITY_CTRL_GET_ID = 0x1,
		EVENT_ACTIVITY_CTRL_SET_ID = 0x2,
		EVENT_ACTIVITY_CTRL_CREATE_ID = 0x3,
		EVENT_ACTIVITY_CTRL_GET_SET_ID = 0x4,
		EVENT_ACTIVITY_CTRL_CREATE_SET_ID = 0x5,
	};
}
