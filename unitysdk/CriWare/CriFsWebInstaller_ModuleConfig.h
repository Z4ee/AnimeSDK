#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriFsWebInstaller_ModulePlatformConfig.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace CriWare
{
	inline static constexpr unsigned int CriFsWebInstaller_ModuleConfig_TypeDefinitionIndex = 37967;

	struct alignas(8) CriFsWebInstaller_ModuleConfig
	{
		::System::UInt32 numInstallers; // 0x10
		::System::String* proxyHost; // 0x18
		::System::UInt16 proxyPort; // 0x20
		::System::String* userAgent; // 0x28
		::System::UInt32 inactiveTimeoutSec; // 0x30
		::System::Boolean allowInsecureSSL; // 0x34
		::System::Boolean crcEnabled; // 0x35
		::CriWare::CriFsWebInstaller_ModulePlatformConfig platformConfig; // 0x36
	};
}
