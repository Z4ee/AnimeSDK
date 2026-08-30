#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/BrowserWin32Helper_RECT.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_BROWSERWIN32HELPER_MONITORINFOEX__CTOR_OFFSET UNITYSDK_OFFSET(0x16A864C0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int BrowserWin32Helper_MONITORINFOEX_TypeDefinitionIndex = 47071;

	class BrowserWin32Helper_MONITORINFOEX : public ::System::Object
	{
	public:
		::System::Int32 cbSize; // 0x10
		::MiHoYo::SDK::BrowserWin32Helper_RECT rcMonitor; // 0x14
		::MiHoYo::SDK::BrowserWin32Helper_RECT rcWork; // 0x24
		::System::Int32 dwFlags; // 0x34
		::Il2CppArray<::System::Char>* szDevice; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_MONITORINFOEX__CTOR_OFFSET))(this);
		}
	};
}
