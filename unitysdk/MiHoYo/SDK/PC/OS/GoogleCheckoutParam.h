#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_PC_OS_GOOGLECHECKOUTPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1993BE00)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int GoogleCheckoutParam_TypeDefinitionIndex = 8429;

	class GoogleCheckoutParam : public ::System::Object
	{
	public:
		::System::String* obfuscatedAccountId; // 0x10
		::System::String* obfuscatedProfileId; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_GOOGLECHECKOUTPARAM__CTOR_OFFSET))(this);
		}
	};
}
