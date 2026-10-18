#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_PC_OS_EPICAUTHTOKENEXTENSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEE4CD0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int EpicAuthTokenExtension_TypeDefinitionIndex = 8532;

	class EpicAuthTokenExtension : public ::System::Object
	{
	public:
		::System::String* accountId; // 0x10
		::System::String* refreshToken; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_EPICAUTHTOKENEXTENSION__CTOR_OFFSET))(this);
		}
	};
}
