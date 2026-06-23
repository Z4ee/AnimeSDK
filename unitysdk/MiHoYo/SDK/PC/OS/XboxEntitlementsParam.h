#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_PC_OS_XBOXENTITLEMENTSPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE591D0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int XboxEntitlementsParam_TypeDefinitionIndex = 20405;

	class XboxEntitlementsParam : public ::System::Object
	{
	public:
		::System::String* serviceTicket; // 0x10
		::System::String* publisherUserId; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_XBOXENTITLEMENTSPARAM__CTOR_OFFSET))(this);
		}
	};
}
