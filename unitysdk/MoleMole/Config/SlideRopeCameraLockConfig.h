#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Cameras { class CameraTrackBlending; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_SLIDEROPECAMERALOCKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x161A0980)

namespace MoleMole::Config
{
	inline static constexpr unsigned int SlideRopeCameraLockConfig_TypeDefinitionIndex = 45253;

	class SlideRopeCameraLockConfig : public ::System::Object
	{
	public:
		::MoleMole::Cameras::CameraTrackBlending* blendIn; // 0x10
		::MoleMole::Cameras::CameraTrackBlending* blendOut; // 0x18
		::System::String* bindCameraObjectName; // 0x20
		::System::Boolean useMapping; // 0x28
		::System::Single mappingStart; // 0x2C
		::System::Single mappingEnd; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SLIDEROPECAMERALOCKCONFIG__CTOR_OFFSET))(this);
		}
	};
}
