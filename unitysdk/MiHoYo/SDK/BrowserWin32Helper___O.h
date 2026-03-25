#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class BrowserWin32Helper_EnumWindowsProc; }
namespace MiHoYo::SDK { class BrowserWin32Helper_WndProcDelegate; }

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int BrowserWin32Helper___O_TypeDefinitionIndex = 37298;

	class BrowserWin32Helper___O : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::BrowserWin32Helper_WndProcDelegate** StaticGet__0___wndProc()
		{
			return (::MiHoYo::SDK::BrowserWin32Helper_WndProcDelegate**)Il2CppClass::FromTypeDefinitionIndex(BrowserWin32Helper___O_TypeDefinitionIndex)->GetStaticField(0xCCF0);
		}
		static ::MiHoYo::SDK::BrowserWin32Helper_EnumWindowsProc** StaticGet__1___EnumThreadWindowsProc()
		{
			return (::MiHoYo::SDK::BrowserWin32Helper_EnumWindowsProc**)Il2CppClass::FromTypeDefinitionIndex(BrowserWin32Helper___O_TypeDefinitionIndex)->GetStaticField(0xCCF8);
		}
	};
}
