#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigZipLine_ExitPointSelectionMode.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigZipLine_ConfigExitPointSelection_NavMesh; }
namespace MoleMole::Config { class ConfigZipLine_ConfigPreEnterPointSelection; }

#define MOLEMOLE_CONFIG_CONFIGZIPLINE_CONFIGEXITPOINTSELECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x192AA5C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigZipLine_ConfigExitPointSelection_TypeDefinitionIndex = 51248;

	class ConfigZipLine_ConfigExitPointSelection : public ::System::Object
	{
	public:
		::MoleMole::Config::ConfigZipLine_ExitPointSelectionMode selectionMode; // 0x10
		::MoleMole::Config::ConfigZipLine_ConfigExitPointSelection_NavMesh* NavMesh; // 0x18
		::MoleMole::Config::ConfigZipLine_ConfigPreEnterPointSelection* ExitPointSelection; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGZIPLINE_CONFIGEXITPOINTSELECTION__CTOR_OFFSET))(this);
		}
	};
}
