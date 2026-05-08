#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Cameras { class OverShoulderCameraConfig; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_HACKERDRONECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x12319270)

namespace MoleMole::Config
{
	inline static constexpr unsigned int HackerDroneConfig_TypeDefinitionIndex = 38917;

	class HackerDroneConfig : public ::System::Object
	{
	public:
		// static const ::System::Single GroupLabelWidth1; // 0x0
		::System::String* Key; // 0x10
		::System::Single RollPitchLimit; // 0x18
		::System::Single LeftYawLimit; // 0x1C
		::System::Single RightYawLimit; // 0x20
		::System::Single DampTimeRollPitch; // 0x24
		::System::Single DampTimeYaw; // 0x28
		::UnityEngine::Vector3 InitTargetPositionOffset; // 0x2C
		::MoleMole::Cameras::OverShoulderCameraConfig* OverShoulderCameraConfig; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERDRONECONFIG__CTOR_OFFSET))(this);
		}
	};
}
