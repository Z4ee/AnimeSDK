#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int APMInfo_TypeDefinitionIndex = 7524;

	class APMInfo : public ::System::Object
	{
	public:
		// static const ::System::String* IGNORE_INIT; // 0x0
		// static const ::System::String* REGION; // 0x0
		// static const ::System::String* USER_ID; // 0x0
	};
}
