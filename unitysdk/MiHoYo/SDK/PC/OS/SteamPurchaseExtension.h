#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_PC_OS_STEAMPURCHASEEXTENSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABE1070)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int SteamPurchaseExtension_TypeDefinitionIndex = 8642;

	class SteamPurchaseExtension : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_STEAMPURCHASEEXTENSION__CTOR_OFFSET))(this);
		}
	};
}
