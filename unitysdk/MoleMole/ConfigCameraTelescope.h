#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class TelescopeCameraControlConfigInput; }
namespace MoleMole::Cameras { class TelescopeCameraConfig; }

#define MOLEMOLE_CONFIGCAMERATELESCOPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A077CE0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigCameraTelescope_TypeDefinitionIndex = 70216;

	class ConfigCameraTelescope : public ::System::Object
	{
	public:
		::MoleMole::Cameras::TelescopeCameraConfig* Config; // 0x10
		::MoleMole::TelescopeCameraControlConfigInput* Input; // 0x18
		::System::Int32 PhotoUiStyleID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGCAMERATELESCOPE__CTOR_OFFSET))(this);
		}
	};
}
