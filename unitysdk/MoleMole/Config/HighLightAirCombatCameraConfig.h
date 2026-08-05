#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/HighLightAirCombatCameraFollowType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Cameras { class CameraTrackBlending; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_HIGHLIGHTAIRCOMBATCAMERACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1350DD10)

namespace MoleMole::Config
{
	inline static constexpr unsigned int HighLightAirCombatCameraConfig_TypeDefinitionIndex = 69589;

	class HighLightAirCombatCameraConfig : public ::System::Object
	{
	public:
		::MoleMole::Cameras::CameraTrackBlending* blendIn; // 0x10
		::MoleMole::Cameras::CameraTrackBlending* blendOut; // 0x18
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::HighLightAirCombatCameraFollowType, ::System::Collections::Generic::List_1<::System::String*>*>* cameraFollows; // 0x20
		::System::String* cameraTarget; // 0x28
		::UnityEngine::Vector3 baseEulerOffset; // 0x30
		::System::Single fov; // 0x3C
		::UnityEngine::Vector2 viewOffset; // 0x40
		::System::Single inputRotateSpeed; // 0x48
		::System::Single minYaw; // 0x4C
		::System::Single maxYaw; // 0x50
		::System::Single minPitch; // 0x54
		::System::Single maxPitch; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HIGHLIGHTAIRCOMBATCAMERACONFIG__CTOR_OFFSET))(this);
		}
	};
}
