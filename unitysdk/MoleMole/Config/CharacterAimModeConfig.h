#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/Config/CharacterAimAnimConfig.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config { class CharacterAimControlConfig; }
namespace MoleMole::Config { class IAimModeCameraConfig; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CHARACTERAIMMODECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD4F6C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int CharacterAimModeConfig_TypeDefinitionIndex = 64485;

	class CharacterAimModeConfig : public ::System::Object
	{
	public:
		::MoleMole::Config::IAimModeCameraConfig* cameraConfig; // 0x10
		::MoleMole::Config::CharacterAimControlConfig* controlConfig; // 0x18
		::System::Single crosshairShowDelay; // 0x20
		::Foundation::AssetPath crosshairPath; // 0x28
		::System::Boolean disableAimPitchAnimation; // 0x38
		::System::Single enterRotateDuration; // 0x3C
		::System::String* enterRotateCurve; // 0x40
		::System::Single aimingMinDistance; // 0x48
		::UnityEngine::Vector3 aimingDirection; // 0x4C
		::System::String* sampleAimingPoint; // 0x58
		::UnityEngine::Vector3 sampleAimingDir; // 0x60
		::System::String* sampleStateName; // 0x70
		::MoleMole::Config::CharacterAimAnimConfig aiming; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHARACTERAIMMODECONFIG__CTOR_OFFSET))(this);
		}
	};
}
