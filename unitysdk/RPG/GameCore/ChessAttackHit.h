#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HitTimeSlowIntensity.h"
#include "unitysdk/RPG/GameCore/HitTimeSlowType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class HitMotionParams; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_CHESSATTACKHIT_METHOD_3_7A73BC45F86A4AB1_OFFSET UNITYSDK_OFFSET(0x1708A8D0)
#define RPG_GAMECORE_CHESSATTACKHIT_METHOD_3_F3D3DA7312C30FAE_OFFSET UNITYSDK_OFFSET(0x1708A790)
#define RPG_GAMECORE_CHESSATTACKHIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1708A840)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChessAttackHit_TypeDefinitionIndex = 21992;

	class ChessAttackHit : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicFloat* FrameHalt; // 0x20
		::System::Boolean IsFaceToHitDir; // 0x28
		::System::String* HitAnimation; // 0x30
		::System::String* HitEffect; // 0x38
		::Il2CppArray<::System::String*>* HitRandomEffect; // 0x40
		::System::Single HitEffectHeight; // 0x48
		::System::Single HitEffectOffsetAngle; // 0x4C
		::RPG::GameCore::HitTimeSlowType HitTimeSlowType; // 0x50
		::RPG::GameCore::HitTimeSlowIntensity HitTimeSlowIntensity; // 0x54
		::RPG::GameCore::HitMotionParams* HitMotion; // 0x58
		::System::Single HitPosHeight; // 0x60
		::System::Single HitAngleHorizontal; // 0x64
		::System::Single HitAngleVertical; // 0x68
		::RPG::GameCore::TargetEvaluator* HitSource; // 0x70
		::System::Boolean TriggerHPBarAnimation; // 0x78
		::System::Boolean ScreenSpaceFloatMsg; // 0x79
		::RPG::GameCore::TargetEvaluator* InheritTargetType; // 0x80
		::System::Boolean InheritDamageType; // 0x88
		::System::Boolean InheritHitEffect; // 0x89
		::System::Boolean InheritHitAnimation; // 0x8A
		::System::Boolean InheritHitPos; // 0x8B

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESSATTACKHIT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F3D3DA7312C30FAE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChessAttackHit*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChessAttackHit*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESSATTACKHIT_METHOD_3_F3D3DA7312C30FAE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7A73BC45F86A4AB1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChessAttackHit* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChessAttackHit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESSATTACKHIT_METHOD_3_7A73BC45F86A4AB1_OFFSET))(a1, a2);
		}
	};
}
