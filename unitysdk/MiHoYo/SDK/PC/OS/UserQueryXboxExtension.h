#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_PC_OS_USERQUERYXBOXEXTENSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA38D50)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int UserQueryXboxExtension_TypeDefinitionIndex = 8582;

	class UserQueryXboxExtension : public ::System::Object
	{
	public:
		::System::Boolean isStoreUser; // 0x10
		::System::String* sandboxId; // 0x18
		::System::String* countryCode; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_USERQUERYXBOXEXTENSION__CTOR_OFFSET))(this);
		}
	};
}
