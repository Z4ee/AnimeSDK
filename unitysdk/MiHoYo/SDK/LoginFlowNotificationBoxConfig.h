#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_LOGINFLOWNOTIFICATIONBOXCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1835AFB0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int LoginFlowNotificationBoxConfig_TypeDefinitionIndex = 7870;

	class LoginFlowNotificationBoxConfig : public ::System::Object
	{
	public:
		::System::Boolean enable; // 0x10

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LOGINFLOWNOTIFICATIONBOXCONFIG__CTOR_OFFSET))(this, a1);
		}
	};
}
