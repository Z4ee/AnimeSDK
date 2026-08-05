#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSurfCamera.h"
#include "unitysdk/MoleMole/Config/ConfigSurfExtraEffect.h"
#include "unitysdk/MoleMole/Config/ConfigSurfMovement.h"
#include "unitysdk/MoleMole/Config/ConfigSurfPhysics.h"
#include "unitysdk/MoleMole/Config/ConfigSurfVisualAudio.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIG_CONFIGSURFVEHICLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B560D10)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSurfVehicle_TypeDefinitionIndex = 71530;

	class ConfigSurfVehicle : public ::System::Object
	{
	public:
		::MoleMole::Config::ConfigSurfMovement Movement; // 0x10
		::MoleMole::Config::ConfigSurfPhysics Physics; // 0x158
		::MoleMole::Config::ConfigSurfCamera Camera; // 0x170
		::MoleMole::Config::ConfigSurfVisualAudio VisualAudio; // 0x230
		::MoleMole::Config::ConfigSurfExtraEffect ExtraEffect; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFVEHICLE__CTOR_OFFSET))(this);
		}
	};
}
