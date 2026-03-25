#pragma once
#include "unitysdk/unitysdk.h"

namespace Microsoft::Win32
{
	inline static constexpr unsigned int UnsafeNativeMethods_ManifestEtw_EVENT_INFO_CLASS_TypeDefinitionIndex = 96;

	enum class UnsafeNativeMethods_ManifestEtw_EVENT_INFO_CLASS : ::System::Int32
	{
		BinaryTrackInfo = 0,
		SetEnableAllKeywords = 1,
		SetTraits = 2,
	};
}
