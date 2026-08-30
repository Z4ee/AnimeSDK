#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define RPG_GAMECORE_PLAYERLOCKTARGETWEIGHTOVERRIDECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xE6C1890)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerLockTargetWeightOverrideConfig_TypeDefinitionIndex = 57808;

	class PlayerLockTargetWeightOverrideConfig : public ::System::Object
	{
	public:
		::System::Single DistanceRatio; // 0x10
		::System::Single AngleRatio; // 0x14
		::System::Single PlayerOriginWeight; // 0x18
		::System::Single CameraOriginWeight; // 0x1C
		::System::Single PlayerInputWeight; // 0x20
		::System::Single PlayerDistanceWeight; // 0x24
		::System::Single CameraDistanceWeight; // 0x28
		::System::Single MonsterWeight; // 0x2C
		::System::Single UnLockTime; // 0x30
		::System::Single UnLockRatio; // 0x34
		::System::Single RaycastOffsetHeight; // 0x38
		::System::Nullable_1<::System::Single> OverrideNotPropAdditiveScore; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETWEIGHTOVERRIDECONFIG__CTOR_OFFSET))(this);
		}
	};
}
