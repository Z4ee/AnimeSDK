#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigPageCameraBase.h"

namespace MoleMole::Config { class UISystemCameraLibrary; }

#define MOLEMOLE_CONFIG_BUDDYDIYPAGECAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0xE960750)

namespace MoleMole::Config
{
	inline static constexpr unsigned int BuddyDiyPageCamera_TypeDefinitionIndex = 49249;

	class BuddyDiyPageCamera : public ::MoleMole::Config::ConfigPageCameraBase
	{
	public:
		::MoleMole::Config::UISystemCameraLibrary* _cameraLibrary; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BUDDYDIYPAGECAMERA__CTOR_OFFSET))(this);
		}
	};
}
