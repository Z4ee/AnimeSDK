#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class FishFreeCameraConfig; }

#define MOLEMOLE_FISHPOSCONFIG_METHOD_1_F5972DD1C3F4267B_OFFSET UNITYSDK_OFFSET(0x10B9A830)
#define MOLEMOLE_FISHPOSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x10B9A820)

namespace MoleMole
{
	inline static constexpr unsigned int FishPosConfig_TypeDefinitionIndex = 67139;

	class FishPosConfig : public ::System::Object
	{
	public:
		::System::Int32 FishingAreaId; // 0x10
		::UnityEngine::Vector3 PlayerPos; // 0x14
		::System::Single PlayerFaceAngle; // 0x20
		::System::Int32 MaleTimelineKey; // 0x24
		::System::Single FishFadeDelayTime; // 0x28
		::System::Single FishFadeDuration; // 0x2C
		::UnityEngine::Vector2 FishPosVector2; // 0x30
		::System::Single FishHeight; // 0x38
		::System::Single FishEffectHeightOffset; // 0x3C
		::System::Single BossFishEffectHeightOffset; // 0x40
		::MoleMole::FishFreeCameraConfig* WaitFishFree; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FISHPOSCONFIG__CTOR_OFFSET))(this);
		}

		::System::Single Method_1_F5972DD1C3F4267B(::System::Boolean a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FISHPOSCONFIG_METHOD_1_F5972DD1C3F4267B_OFFSET))(this, a1);
		}
	};
}
