#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FishCameraConfig.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class FishFreeCameraConfig; }

#define MOLEMOLE_FISHCAMERACONFIGGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x15400340)

namespace MoleMole
{
	inline static constexpr unsigned int FishCameraConfigGroup_TypeDefinitionIndex = 38391;

	class FishCameraConfigGroup : public ::System::Object
	{
	public:
		::MoleMole::FishFreeCameraConfig* WaitFishFree; // 0x10
		::MoleMole::FishCameraConfig StartFish; // 0x18
		::MoleMole::FishCameraConfig FishQTE; // 0x40
		::MoleMole::FishCameraConfig FishLeft; // 0x68
		::MoleMole::FishCameraConfig FishRight; // 0x90
		::MoleMole::FishCameraConfig FishContinueClickLeft; // 0xB8
		::MoleMole::FishCameraConfig FishContinueClickRight; // 0xE0
		::MoleMole::FishCameraConfig FishPressLeft; // 0x108
		::MoleMole::FishCameraConfig FishPressRight; // 0x130

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FISHCAMERACONFIGGROUP__CTOR_OFFSET))(this);
		}
	};
}
