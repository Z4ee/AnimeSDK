#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MHYSDKC_Special_TypeDefinitionIndex = 44441;

	class MHYSDKC_Special : public ::System::Object
	{
	public:
		// static const ::System::String* IS_SUPPORT_APPLE_LOGIN; // 0x0
		// static const ::System::String* CHECK_APPLE_ACCOUNT_AUTHORIZED_STATE; // 0x0
		// static const ::System::String* APPLE_LOGIN; // 0x0
	};
}
