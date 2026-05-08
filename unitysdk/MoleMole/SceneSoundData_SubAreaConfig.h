#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigSoundActionGeneral; }

#define MOLEMOLE_SCENESOUNDDATA_SUBAREACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1606AB60)

namespace MoleMole
{
	inline static constexpr unsigned int SceneSoundData_SubAreaConfig_TypeDefinitionIndex = 55492;

	class SceneSoundData_SubAreaConfig : public ::System::Object
	{
	public:
		::System::Int32 priority; // 0x10
		::MoleMole::Config::ConfigSoundActionGeneral* enterAction; // 0x18
		::MoleMole::Config::ConfigSoundActionGeneral* leaveAction; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDDATA_SUBAREACONFIG__CTOR_OFFSET))(this);
		}
	};
}
