#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AxisType.h"
#include "unitysdk/RPG/GameCore/EaseType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/ProjectileMoveBehavior.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class ProjectileBezierControlPoint; }
namespace System { class String; }

#define RPG_GAMECORE_PROJECTILEDATA_METHOD_2_BE58D2EA3FC7D8AB_OFFSET UNITYSDK_OFFSET(0x17513E20)
#define RPG_GAMECORE_PROJECTILEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x17515030)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ProjectileData_TypeDefinitionIndex = 14350;

	class ProjectileData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* ColliderTemplate; // 0x10
		::RPG::GameCore::ProjectileMoveBehavior Behavior; // 0x18
		::System::Single FlySpeed; // 0x1C
		::System::Boolean EnableRayCast; // 0x20
		::System::Single FlyTime; // 0x24
		::RPG::GameCore::EaseType SpeedEaseType; // 0x28
		::System::String* CustomSpeedEaseCurve; // 0x30
		::System::Single Gravity; // 0x38
		::System::Single MaxLifeTime; // 0x3C
		::System::Single CollisionEnableDelay; // 0x40
		::System::Boolean StartFromLastHitPos; // 0x44
		::System::Boolean UseLastHitVelocity; // 0x45
		::System::String* AttachPoint; // 0x48
		::System::Boolean AlignWithAttachPoint; // 0x50
		::RPG::GameCore::AxisType AttachPointAxis; // 0x54
		::RPG::MVector3 AttachOffset; // 0x58
		::System::String* TargetAttachPoint; // 0x68
		::RPG::MVector3 TargetOffset; // 0x70
		::System::Boolean UseLookat; // 0x7C
		::System::Single TargetDistanceOffset; // 0x80
		::System::Single HitEffectDistanceOffset; // 0x84
		::System::Boolean IgnoreTargetHitbox; // 0x88
		::System::String* FlyEffectUniqueName; // 0x90
		::System::String* FlyEffect; // 0x98
		::System::String* HitEffect; // 0xA0
		::System::Boolean FlyEffectFadeOut; // 0xA8
		::System::Boolean AlignHitEffect; // 0xA9
		::System::Boolean AttachHitEffectToTargetEntity; // 0xAA
		::System::Boolean CorrectedWhenTargetFormationChange; // 0xAB
		::RPG::GameCore::DynamicFloat* LinearPitchAngle; // 0xB0
		::System::Single BoomerangEccentricity; // 0xB8
		::System::Single BoomerangAngleRoll; // 0xBC
		::System::Boolean WriteProgressToEffectAnimator; // 0xC0
		::System::Boolean TriggerHitCallback; // 0xC1
		::System::Boolean StaticProjectileCanPassAirWall; // 0xC2
		::System::Single StaticExtraRadius; // 0xC4
		::System::Boolean StaticProjectileKeepHigh; // 0xC8
		::RPG::MVector3 StartDirction; // 0xCC
		::RPG::MVector3 StartOffsetRange; // 0xD8
		::RPG::MVector3 TargetOffsetRange; // 0xE4
		::System::Single TraceDelay; // 0xF0
		::System::Single TurnSpeed; // 0xF4
		::System::Single ArriveDistance; // 0xF8
		::System::Single ParabolaHeightRatio; // 0xFC
		::System::Single ParabolaRoll; // 0x100
		::System::Boolean ParabolaUseWorldSpaceUp; // 0x104
		::Il2CppArray<::RPG::GameCore::ProjectileBezierControlPoint*>* BezierControlPointList; // 0x108
		::System::Single Bounciness; // 0x110
		::RPG::MVector3 InitDirection; // 0x114
		::System::Boolean FreezeRotation; // 0x120
		::RPG::GameCore::DynamicFloat* SubCurveIndex; // 0x128

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROJECTILEDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_BE58D2EA3FC7D8AB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ProjectileData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ProjectileData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROJECTILEDATA_METHOD_2_BE58D2EA3FC7D8AB_OFFSET))(a1, a2);
		}
	};
}
