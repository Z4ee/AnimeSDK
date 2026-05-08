#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FishCameraConfig.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class FishFreeCameraConfig; }

#define MOLEMOLE_FISHCAMERACONFIGGROUPV2__CTOR_OFFSET UNITYSDK_OFFSET(0x1840F7B0)

namespace MoleMole
{
	inline static constexpr unsigned int FishCameraConfigGroupV2_TypeDefinitionIndex = 81695;

	class FishCameraConfigGroupV2 : public ::System::Object
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
		::MoleMole::FishCameraConfig FishBattleQteLeft; // 0x158
		::MoleMole::FishCameraConfig FishBattleQteRight; // 0x180
		::MoleMole::FishCameraConfig AssistCheer; // 0x1A8
		::MoleMole::FishCameraConfig FishSkill; // 0x1D0
		::MoleMole::FishCameraConfig FishSkillLate; // 0x1F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FISHCAMERACONFIGGROUPV2__CTOR_OFFSET))(this);
		}
	};
}
