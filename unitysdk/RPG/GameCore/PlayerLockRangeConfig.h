#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PLAYERLOCKRANGECONFIG_METHOD_2_193F85E115477945_OFFSET UNITYSDK_OFFSET(0x1BA0BE70)
#define RPG_GAMECORE_PLAYERLOCKRANGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA0C3E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerLockRangeConfig_TypeDefinitionIndex = 16903;

	class PlayerLockRangeConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single Radius; // 0x10
		::System::Single FanAngle; // 0x14
		::System::Single InfoRadiusOffset; // 0x18
		::System::Single AttackFanAngle; // 0x1C
		::RPG::MVector3 Offset; // 0x20
		::System::Single DistanceRatio; // 0x2C
		::System::Single AngleRatio; // 0x30
		::System::Single PlayerOriginWeight; // 0x34
		::System::Single CameraOriginWeight; // 0x38
		::System::Single PlayerInputWeight; // 0x3C
		::System::Single PlayerDistanceWeight; // 0x40
		::System::Single CameraDistanceWeight; // 0x44
		::System::Single MonsterWeight; // 0x48
		::System::Single UnLockTime; // 0x4C
		::System::Single UnLockRatio; // 0x50
		::System::Single LockHeightLimit; // 0x54
		::System::Boolean EnableInViewportCheck; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKRANGECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_193F85E115477945(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayerLockRangeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerLockRangeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKRANGECONFIG_METHOD_2_193F85E115477945_OFFSET))(a1, a2);
		}
	};
}
