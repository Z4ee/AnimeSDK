#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_SWITCHMASCOTCONFIG_METHOD_2_7DF43947B3A6411D_OFFSET UNITYSDK_OFFSET(0x1E150230)
#define RPG_GAMECORE_SWITCHMASCOTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E150C30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchMascotConfig_TypeDefinitionIndex = 16815;

	class SwitchMascotConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 FakeAvatarID; // 0x10
		::System::Single FakeAvatarScale; // 0x14
		::System::UInt32 PickupPropID; // 0x18
		::Il2CppArray<::RPG::MVector3>* PickupSpawnOffset; // 0x20
		::System::String* Event_ExitGame; // 0x28
		::System::String* Event_ResetGame; // 0x30
		::System::Single MoveSpeed; // 0x38
		::System::Single MaxFlySpeed; // 0x3C
		::System::Single FlyUpAccelSpeed; // 0x40
		::System::Single FlyDownAccelSpeed; // 0x44
		::System::Single FlyUpDecelSpeed; // 0x48
		::System::Single FlyDownDecelSpeed; // 0x4C
		::System::UInt32 MaxPickupCount; // 0x50
		::System::UInt32 InitPickupCount; // 0x54
		::System::Single AutoAddPickupCoolDown; // 0x58
		::System::UInt32 AutoAddPickupCount; // 0x5C
		::System::UInt32 SpawnGuaranteePropPickupCount; // 0x60
		::System::String* Event_SpawnGuaranteeProp; // 0x68
		::System::String* EntryBlackHoleAttachPoint; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>* BulletEffectPreload; // 0x78
		::System::String* HitDecalEffect; // 0x80
		::System::Single HitDecalEffectLifeTime; // 0x88
		::System::Int32 HitDecalEffectMaxCountPC; // 0x8C
		::System::Int32 HitDecalEffectMaxCountMobile; // 0x90
		::System::String* TargetAttachPoint; // 0x98
		::System::String* TargetAttachPoint2; // 0xA0
		::System::Single CameraLookAtPressAtkTime; // 0xA8
		::System::Single CameraLookAtTransitionTime; // 0xAC
		::System::String* CameraLookAtTransitionCurvePath; // 0xB0
		::System::Boolean CameraLookAtMuteByInputRotating; // 0xB8
		::System::UInt32 ShootKillMonsterAchievement; // 0xBC
		::System::Single LockFanAngle; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHMASCOTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_7DF43947B3A6411D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchMascotConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchMascotConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHMASCOTCONFIG_METHOD_2_7DF43947B3A6411D_OFFSET))(a1, a2);
		}
	};
}
