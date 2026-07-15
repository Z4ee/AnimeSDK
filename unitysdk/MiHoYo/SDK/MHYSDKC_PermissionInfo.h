#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MHYSDKC_PermissionInfo_TypeDefinitionIndex = 44440;

	class MHYSDKC_PermissionInfo : public ::System::Object
	{
	public:
		// static const ::System::String* PERMISSION; // 0x0
		// static const ::System::String* SILENCE_REQUEST; // 0x0
		// static const ::System::String* REQUEST_DESCRIPTION; // 0x0
		// static const ::System::String* REJECT_DESCRIPTION; // 0x0
	};
}
