#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Cameras { class FirstPersonCameraConfig; }
namespace MoleMole::Cameras { class PhotoCameraConfig; }
namespace MoleMole::Config { class CharacterPhotoCameraCommon; }
namespace MoleMole::Photo { class ScopedFirstPersonCameraMotionConfig; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CHARACTERCONFIGPHOTOCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x122FF140)

namespace MoleMole::Config
{
	inline static constexpr unsigned int CharacterConfigPhotoCamera_TypeDefinitionIndex = 53959;

	class CharacterConfigPhotoCamera : public ::System::Object
	{
	public:
		::System::Int32 ID; // 0x10
		::System::String* Name; // 0x18
		::MoleMole::Cameras::PhotoCameraConfig* ThridPerson; // 0x20
		::MoleMole::Cameras::FirstPersonCameraConfig* FirstPerson; // 0x28
		::MoleMole::Photo::ScopedFirstPersonCameraMotionConfig* FirstPersonMotion; // 0x30
		::MoleMole::Config::CharacterPhotoCameraCommon* Common; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHARACTERCONFIGPHOTOCAMERA__CTOR_OFFSET))(this);
		}
	};
}
