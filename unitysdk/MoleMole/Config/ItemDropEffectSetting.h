#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config { class ConfigPosRot; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_ITEMDROPEFFECTSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x172BD030)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ItemDropEffectSetting_TypeDefinitionIndex = 62713;

	class ItemDropEffectSetting : public ::System::Object
	{
	public:
		::System::Single DropItemInitPosYRatio; // 0x10
		::System::Single DropItemElevationAngle; // 0x14
		::UnityEngine::Vector2 DropItemInitRadius; // 0x18
		::System::Single DropItemInitPower; // 0x20
		::System::Single Item_InteractiveAreaRadius; // 0x24
		::System::Single Item_AutoPickAreaRadius; // 0x28
		::UnityEngine::Vector2 AdditionalForceXZ; // 0x2C
		::UnityEngine::Vector2 AdditionalForceY; // 0x34
		::UnityEngine::Vector2 IdleStayTimerZone; // 0x3C
		::System::Single FlyItemStopYVelocity; // 0x44
		::System::Single MotionPower; // 0x48
		::UnityEngine::Vector2 MotionPowerXZ; // 0x4C
		::UnityEngine::Vector2 ScatterRadius; // 0x54
		::UnityEngine::Vector2 MotionPowerY; // 0x5C
		::System::Single MotionGravity; // 0x64
		::System::Single MotionGroundCheckHeight; // 0x68
		::System::Single MotionGroundCheckTime; // 0x6C
		::System::Boolean MotionSwitchOpen; // 0x70
		::System::Single Bounciness; // 0x74
		::System::Single BounceStopVelocityThreshold; // 0x78
		::System::Single PickUpItemInitPower; // 0x7C
		::System::Single DropItemFlySpeed; // 0x80
		::System::String* TargetColliderName; // 0x88
		::UnityEngine::Vector2 MaxDistanceRegion; // 0x90
		::UnityEngine::Vector2 MaxSteerLerpRegion; // 0x98
		::System::Single MaxFlySpeed; // 0xA0
		::System::Single TargetFinalYRatio; // 0xA4
		::System::Single DefaultColliderRadius; // 0xA8
		::System::Single PassByDistance; // 0xAC
		::MoleMole::Config::ConfigPosRot* PickerPosConfigPosRot; // 0xB0
		::System::Single PickPosRadius; // 0xB8
		::System::Single DropRotateSpeed; // 0xBC
		::UnityEngine::AnimationCurve* DropRotateSpeedCurve; // 0xC0
		::System::Single IdleRotateSpeed; // 0xC8
		::System::Single PickUpRotateSpeed; // 0xCC
		::System::Boolean SkipIdleSate; // 0xD0
		::System::Boolean ReplaceGravity; // 0xD1
		::UnityEngine::Vector3 ReplaceGravityValue; // 0xD4
		::UnityEngine::Vector2 ClampForFreeMotion; // 0xE0
		::UnityEngine::Vector2 MaxSpeedToPick; // 0xE8
		::System::Boolean UseDropItemFlyAcceleratedCurve; // 0xF0
		::UnityEngine::AnimationCurve* DropItemFlyAcceleratedCurve; // 0xF8
		::System::Boolean OverridePickUpDirSpeed; // 0x100
		::UnityEngine::AnimationCurve* PickUpDirSpeedCurve; // 0x108
		::System::Single PickUpDirSpeed; // 0x110

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ITEMDROPEFFECTSETTING__CTOR_OFFSET))(this);
		}
	};
}
