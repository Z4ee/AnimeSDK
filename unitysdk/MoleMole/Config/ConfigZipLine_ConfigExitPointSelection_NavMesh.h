#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define MOLEMOLE_CONFIG_CONFIGZIPLINE_CONFIGEXITPOINTSELECTION_NAVMESH__CTOR_OFFSET UNITYSDK_OFFSET(0x16268260)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigZipLine_ConfigExitPointSelection_NavMesh_TypeDefinitionIndex = 52997;

	class ConfigZipLine_ConfigExitPointSelection_NavMesh : public ::System::Object
	{
	public:
		::System::Single InnerOffset; // 0x10
		::UnityEngine::Vector2 SelectDistance; // 0x14
		::System::Single SearchRadius; // 0x1C
		::System::Single ExtraSearchRange; // 0x20
		::System::Single ExtraSearchStep; // 0x24
		::System::Single ExtraSearchRadius; // 0x28
		::System::Single PreSelectDistance; // 0x2C
		::System::Single IterateTime; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGZIPLINE_CONFIGEXITPOINTSELECTION_NAVMESH__CTOR_OFFSET))(this);
		}
	};
}
