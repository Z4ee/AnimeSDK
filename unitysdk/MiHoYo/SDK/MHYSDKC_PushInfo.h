#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MHYSDKC_PushInfo_TypeDefinitionIndex = 44465;

	class MHYSDKC_PushInfo : public ::System::Object
	{
	public:
		// static const ::System::String* NOTIFICATION_ID; // 0x0
		// static const ::System::String* TITLE; // 0x0
		// static const ::System::String* CONTENT; // 0x0
		// static const ::System::String* TIME; // 0x0
		// static const ::System::String* EXT; // 0x0
	};
}
