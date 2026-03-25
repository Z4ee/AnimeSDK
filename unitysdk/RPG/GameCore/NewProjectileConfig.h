#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AxisType.h"
#include "unitysdk/RPG/GameCore/EaseType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_NEWPROJECTILECONFIG_METHOD_2_1FDD6AE005C7BFF6_OFFSET UNITYSDK_OFFSET(0x17471310)
#define RPG_GAMECORE_NEWPROJECTILECONFIG_METHOD_2_9CDE6A8A9A441772_OFFSET UNITYSDK_OFFSET(0x17472730)
#define RPG_GAMECORE_NEWPROJECTILECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17472720)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NewProjectileConfig_TypeDefinitionIndex = 14351;

	class NewProjectileConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single FlySpeed; // 0x10
		::System::Single FlyTime; // 0x14
		::System::Single ExtraRetainTime; // 0x18
		::RPG::GameCore::EaseType SpeedEaseType; // 0x1C
		::System::String* CustomSpeedEaseCurve; // 0x20
		::System::String* HitEffect; // 0x28
		::System::Boolean AlignHitEffect; // 0x30
		::System::Boolean AttachHitEffectToTargetEntity; // 0x31
		::System::Boolean CorrectedWhenTargetFormationChange; // 0x32
		::RPG::MVector3 InitDirection; // 0x34
		::System::String* AttachPoint; // 0x40
		::RPG::MVector3 AttachOffset; // 0x48
		::System::Boolean StartFromLastHitPos; // 0x54
		::System::Boolean FreezeRotation; // 0x55
		::System::String* TargetAttachPoint; // 0x58
		::System::String* TargetAttachPoint2; // 0x60
		::RPG::MVector3 TargetOffset; // 0x68
		::System::Boolean UseLookat; // 0x74
		::System::Boolean UseLastHitVelocity; // 0x75
		::System::Boolean AlignWithAttachPoint; // 0x76
		::RPG::GameCore::AxisType AttachPointAxis; // 0x78
		::System::Boolean IgnoreTargetHitbox; // 0x7C
		::System::Boolean IgnoreCasterWallCheck; // 0x7D
		::System::String* ColliderTemplate; // 0x80
		::System::Boolean EnableRayCast; // 0x88
		::System::String* FlyEffectUniqueName; // 0x90
		::System::String* FlyEffect; // 0x98
		::System::Boolean FlyEffectFadeOut; // 0xA0
		::System::Boolean TriggerHitCallback; // 0xA1
		::System::Boolean WriteProgressToEffectAnimator; // 0xA2

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NEWPROJECTILECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_1FDD6AE005C7BFF6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::NewProjectileConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NewProjectileConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NEWPROJECTILECONFIG_METHOD_2_1FDD6AE005C7BFF6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_9CDE6A8A9A441772(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::NewProjectileConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NewProjectileConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NEWPROJECTILECONFIG_METHOD_2_9CDE6A8A9A441772_OFFSET))(a1, a2);
		}
	};
}
