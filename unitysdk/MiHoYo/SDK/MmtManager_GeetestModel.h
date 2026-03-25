#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_MMTMANAGER_GEETESTMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x15F38180)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MmtManager_GeetestModel_TypeDefinitionIndex = 7030;

	class MmtManager_GeetestModel : public ::System::Object
	{
	public:
		::System::String* challenge; // 0x10
		::System::String* gt; // 0x18
		::System::String* new_captcha; // 0x20
		::System::String* success; // 0x28
		::System::String* lang; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MMTMANAGER_GEETESTMODEL__CTOR_OFFSET))(this);
		}
	};
}
