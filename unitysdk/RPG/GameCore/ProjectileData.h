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

#define RPG_GAMECORE_PROJECTILEDATA_METHOD_2_82619479C17B3462_OFFSET UNITYSDK_OFFSET(0x1BA18DE0)
#define RPG_GAMECORE_PROJECTILEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA19FB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ProjectileData_TypeDefinitionIndex = 15046;

	class ProjectileData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* ColliderTemplate; // 0x10
		::RPG::GameCore::ProjectileMoveBehavior Behavior; // 0x18
		::RPG::GameCore::DynamicFloat* FlySpeed; // 0x20
		::System::Boolean EnableRayCast; // 0x28
		::RPG::GameCore::DynamicFloat* FlyTime; // 0x30
		::RPG::GameCore::EaseType SpeedEaseType; // 0x38
		::System::String* CustomSpeedEaseCurve; // 0x40
		::System::Single Gravity; // 0x48
		::System::Single MaxLifeTime; // 0x4C
		::System::Single CollisionEnableDelay; // 0x50
		::System::Boolean StartFromLastHitPos; // 0x54
		::System::Boolean UseLastHitVelocity; // 0x55
		::System::String* AttachPoint; // 0x58
		::System::Boolean AlignWithAttachPoint; // 0x60
		::RPG::GameCore::AxisType AttachPointAxis; // 0x64
		::RPG::MVector3 AttachOffset; // 0x68
		::System::String* TargetAttachPoint; // 0x78
		::RPG::MVector3 TargetOffset; // 0x80
		::System::Boolean UseLookat; // 0x8C
		::System::Single TargetDistanceOffset; // 0x90
		::System::Single HitEffectDistanceOffset; // 0x94
		::System::Boolean IgnoreTargetHitbox; // 0x98
		::System::String* FlyEffectUniqueName; // 0xA0
		::System::String* FlyEffect; // 0xA8
		::System::String* HitEffect; // 0xB0
		::System::Boolean FlyEffectFadeOut; // 0xB8
		::System::Boolean AlignHitEffect; // 0xB9
		::System::Boolean AttachHitEffectToTargetEntity; // 0xBA
		::System::Boolean CorrectedWhenTargetFormationChange; // 0xBB
		::RPG::GameCore::DynamicFloat* LinearPitchAngle; // 0xC0
		::RPG::GameCore::DynamicFloat* BoomerangEccentricity; // 0xC8
		::RPG::GameCore::DynamicFloat* BoomerangAngleRoll; // 0xD0
		::System::Boolean WriteProgressToEffectAnimator; // 0xD8
		::System::Boolean TriggerHitCallback; // 0xD9
		::System::Boolean StaticProjectileCanPassAirWall; // 0xDA
		::System::Single StaticExtraRadius; // 0xDC
		::System::Boolean StaticProjectileKeepHigh; // 0xE0
		::RPG::MVector3 StartDirction; // 0xE4
		::RPG::MVector3 StartOffsetRange; // 0xF0
		::RPG::MVector3 TargetOffsetRange; // 0xFC
		::System::Single TraceDelay; // 0x108
		::System::Single TurnSpeed; // 0x10C
		::System::Single ArriveDistance; // 0x110
		::System::Single ParabolaHeightRatio; // 0x114
		::System::Single ParabolaRoll; // 0x118
		::System::Boolean ParabolaUseWorldSpaceUp; // 0x11C
		::Il2CppArray<::RPG::GameCore::ProjectileBezierControlPoint*>* BezierControlPointList; // 0x120
		::System::Single Bounciness; // 0x128
		::RPG::MVector3 InitDirection; // 0x12C
		::System::Boolean FreezeRotation; // 0x138
		::RPG::GameCore::DynamicFloat* SubCurveIndex; // 0x140

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROJECTILEDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_82619479C17B3462(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ProjectileData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ProjectileData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROJECTILEDATA_METHOD_2_82619479C17B3462_OFFSET))(a1, a2);
		}
	};
}
