#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int BrowserWin32Helper_DEVMODE_TypeDefinitionIndex = 44836;

	struct alignas(8) BrowserWin32Helper_DEVMODE
	{
		// static const ::System::Int32 CCHDEVICENAME = 0x20; // 0x0
		// static const ::System::Int32 Field_2_1 = 0x20; // 0x0
		::System::String* dmDeviceName; // 0x10
		::System::Int16 dmSpecVersion; // 0x18
		::System::Int16 dmDriverVersion; // 0x1A
		::System::Int16 dmSize; // 0x1C
		::System::Int16 dmDriverExtra; // 0x1E
		::System::Int32 dmFields; // 0x20
		::System::Int32 dmPositionX; // 0x24
		::System::Int32 dmPositionY; // 0x28
		::System::Int32 dmDisplayFixedOutput; // 0x2C
		::System::Int16 dmColor; // 0x30
		::System::Int16 dmDuplex; // 0x32
		::System::Int16 dmYResolution; // 0x34
		::System::Int16 dmTTOption; // 0x36
		::System::Int16 dmCollate; // 0x38
		::System::String* dmFormName; // 0x40
		::System::Int16 dmLogPixels; // 0x48
		::System::Int32 dmBitsPerPel; // 0x4C
		::System::Int32 dmPelsWidth; // 0x50
		::System::Int32 dmPelsHeight; // 0x54
		::System::Int32 dmDisplayFlags; // 0x58
		::System::Int32 dmDisplayFrequency; // 0x5C
		::System::Int32 dmICMMethod; // 0x60
		::System::Int32 dmICMIntent; // 0x64
		::System::Int32 dmMediaType; // 0x68
		::System::Int32 dmDitherType; // 0x6C
		::System::Int32 dmReserved1; // 0x70
		::System::Int32 dmReserved2; // 0x74
		::System::Int32 dmPanningWidth; // 0x78
		::System::Int32 dmPanningHeight; // 0x7C
	};
}
