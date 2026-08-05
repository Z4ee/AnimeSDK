#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class XboxRecentPlayerEntry; }

#define MIHOYO_SDK_PC_OS_XBOXRECENTPLAYERSPARAMEXTENSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEADEA0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int XboxRecentPlayersParamExtension_TypeDefinitionIndex = 20768;

	class XboxRecentPlayersParamExtension : public ::System::Object
	{
	public:
		::Il2CppArray<::MiHoYo::SDK::PC::OS::XboxRecentPlayerEntry*>* players; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_XBOXRECENTPLAYERSPARAMEXTENSION__CTOR_OFFSET))(this);
		}
	};
}
