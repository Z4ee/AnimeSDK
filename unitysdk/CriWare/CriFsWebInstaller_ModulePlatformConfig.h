#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define CRIWARE_CRIFSWEBINSTALLER_MODULEPLATFORMCONFIG_GET_DEFAULTCONFIG_OFFSET UNITYSDK_OFFSET(0x12C0BD70)

namespace CriWare
{
	inline static constexpr unsigned int CriFsWebInstaller_ModulePlatformConfig_TypeDefinitionIndex = 36866;

	struct alignas(1) CriFsWebInstaller_ModulePlatformConfig
	{
		::System::Byte reserved; // 0x10

		static ::CriWare::CriFsWebInstaller_ModulePlatformConfig get_defaultConfig()
		{
			return ((::CriWare::CriFsWebInstaller_ModulePlatformConfig(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIFSWEBINSTALLER_MODULEPLATFORMCONFIG_GET_DEFAULTCONFIG_OFFSET))();
		}
	};
}
