#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_PC_OS_STEAMINITEXTENSION__CTOR_OFFSET UNITYSDK_OFFSET(0x175B6E80)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int SteamInitExtension_TypeDefinitionIndex = 7566;

	class SteamInitExtension : public ::System::Object
	{
	public:
		::System::UInt32 appId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_STEAMINITEXTENSION__CTOR_OFFSET))(this);
		}
	};
}
