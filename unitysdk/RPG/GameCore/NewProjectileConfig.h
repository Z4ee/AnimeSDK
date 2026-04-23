#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AxisType.h"
#include "unitysdk/RPG/GameCore/EaseType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class String; }

#define RPG_GAMECORE_NEWPROJECTILECONFIG_METHOD_2_1FDD6AE005C7BFF6_OFFSET UNITYSDK_OFFSET(0x18B7DFD0)
#define RPG_GAMECORE_NEWPROJECTILECONFIG_METHOD_2_9CDE6A8A9A441772_OFFSET UNITYSDK_OFFSET(0x18B7F4D0)
#define RPG_GAMECORE_NEWPROJECTILECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18B7F430)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NewProjectileConfig_TypeDefinitionIndex = 14821;

	class NewProjectileConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* FlySpeed; // 0x10
		::RPG::GameCore::DynamicFloat* FlyTime; // 0x18
		::System::Single ExtraRetainTime; // 0x20
		::RPG::GameCore::EaseType SpeedEaseType; // 0x24
		::System::String* CustomSpeedEaseCurve; // 0x28
		::System::String* HitEffect; // 0x30
		::System::Boolean AlignHitEffect; // 0x38
		::System::Boolean AttachHitEffectToTargetEntity; // 0x39
		::System::Boolean CorrectedWhenTargetFormationChange; // 0x3A
		::RPG::MVector3 InitDirection; // 0x3C
		::System::String* AttachPoint; // 0x48
		::RPG::MVector3 AttachOffset; // 0x50
		::System::Boolean StartFromLastHitPos; // 0x5C
		::System::Boolean FreezeRotation; // 0x5D
		::System::String* TargetAttachPoint; // 0x60
		::System::String* TargetAttachPoint2; // 0x68
		::RPG::MVector3 TargetOffset; // 0x70
		::System::Boolean UseLookat; // 0x7C
		::System::Boolean UseLastHitVelocity; // 0x7D
		::System::Boolean AlignWithAttachPoint; // 0x7E
		::RPG::GameCore::AxisType AttachPointAxis; // 0x80
		::System::Boolean IgnoreTargetHitbox; // 0x84
		::System::Boolean IgnoreCasterWallCheck; // 0x85
		::System::String* ColliderTemplate; // 0x88
		::System::Boolean EnableRayCast; // 0x90
		::System::String* FlyEffectUniqueName; // 0x98
		::System::String* FlyEffect; // 0xA0
		::System::Boolean FlyEffectFadeOut; // 0xA8
		::System::Boolean TriggerHitCallback; // 0xA9
		::System::Boolean WriteProgressToEffectAnimator; // 0xAA

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
