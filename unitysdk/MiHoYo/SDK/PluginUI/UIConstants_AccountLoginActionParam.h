#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int UIConstants_AccountLoginActionParam_TypeDefinitionIndex = 45042;

	class UIConstants_AccountLoginActionParam : public ::System::Object
	{
	public:
		// static const ::System::String* ACCOUNT; // 0x0
		// static const ::System::String* PASSWORD; // 0x0
		// static const ::System::String* IS_PROTOCOL_CHECKED; // 0x0
		// static const ::System::String* IS_PERSISTENT_DATA_CHECKED; // 0x0
	};
}
