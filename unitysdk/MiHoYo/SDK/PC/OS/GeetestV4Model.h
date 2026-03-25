#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_PC_OS_GEETESTV4MODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x15F568B0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int GeetestV4Model_TypeDefinitionIndex = 7434;

	class GeetestV4Model : public ::System::Object
	{
	public:
		::System::String* gt; // 0x10
		::System::String* new_captcha; // 0x18
		::System::String* success; // 0x20
		::System::String* lang; // 0x28
		::System::String* risk_type; // 0x30
		::System::String* session_id; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_GEETESTV4MODEL__CTOR_OFFSET))(this);
		}
	};
}
