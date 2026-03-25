#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define CRIWARE_CRIFSWEBINSTALLER_MODULEPLATFORMCONFIG_GET_DEFAULTCONFIG_OFFSET UNITYSDK_OFFSET(0x11A3D560)

namespace CriWare
{
	inline static constexpr unsigned int CriFsWebInstaller_ModulePlatformConfig_TypeDefinitionIndex = 31146;

	struct alignas(1) CriFsWebInstaller_ModulePlatformConfig
	{
		::System::Byte reserved; // 0x10

		static ::CriWare::CriFsWebInstaller_ModulePlatformConfig get_defaultConfig()
		{
			return ((::CriWare::CriFsWebInstaller_ModulePlatformConfig(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIFSWEBINSTALLER_MODULEPLATFORMCONFIG_GET_DEFAULTCONFIG_OFFSET))();
		}
	};
}
