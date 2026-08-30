#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackFormulaType.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/DamageIntegerizeCategory.h"
#include "unitysdk/RPG/GameCore/FinalDamageFormulaType.h"
#include "unitysdk/RPG/GameCore/HitTimeSlowIntensity.h"
#include "unitysdk/RPG/GameCore/HitTimeSlowType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AttackDamageTypeConfig; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class HitMotionParams; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_ATTACKDATA_METHOD_2_7E9645886120E859_OFFSET UNITYSDK_OFFSET(0x1CE2CCC0)
#define RPG_GAMECORE_ATTACKDATA_METHOD_2_9F0425A182D9ECC3_OFFSET UNITYSDK_OFFSET(0x1CE2D1A0)
#define RPG_GAMECORE_ATTACKDATA_SHAREBYCOPY_OFFSET UNITYSDK_OFFSET(0x1CE2E3C0)
#define RPG_GAMECORE_ATTACKDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE2CE00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AttackData_TypeDefinitionIndex = 22341;

	class AttackData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::AttackDamageTypeConfig* DamageType; // 0x10
		::RPG::GameCore::AttackFormulaType FormulaType; // 0x18
		::RPG::GameCore::DynamicFloat* DamagePercentage; // 0x20
		::RPG::GameCore::DynamicFloat* DamageValue; // 0x28
		::RPG::GameCore::AttackFormulaType ExtraFormulaType; // 0x30
		::RPG::GameCore::DynamicFloat* ExtraDamagePercentage; // 0x38
		::RPG::GameCore::DynamicFloat* StanceValue; // 0x40
		::RPG::GameCore::DynamicFloat* HitSplitRatio; // 0x48
		::RPG::GameCore::DynamicFloat* DamageMulRatio; // 0x50
		::System::Boolean IsIndirect; // 0x58
		::System::Boolean IsNotHit; // 0x59
		::RPG::GameCore::DamageIntegerizeCategory IntegerizeCategory; // 0x5C
		::RPG::GameCore::DynamicFloat* SPHitRatio; // 0x60
		::RPG::GameCore::AttackDamageTypeConfig* StanceDamageType; // 0x68
		::System::Boolean ForceMatchStanceWeakness; // 0x70
		::RPG::GameCore::AttackType AttackType; // 0x74
		::Il2CppArray<::RPG::GameCore::JsonEnum*>* DamageTag; // 0x78
		::RPG::GameCore::DynamicString* CustomName; // 0x80
		::System::Boolean DoNotTriggerBreak; // 0x88
		::RPG::GameCore::DynamicFloat* BreakDamagePercentage; // 0x90
		::RPG::GameCore::DynamicFloat* ElationDamagePercentage; // 0x98
		::RPG::GameCore::FinalDamageFormulaType FinalFormulaType; // 0xA0
		::System::Boolean IsMortallyWonded; // 0xA4
		::System::Boolean IsNonlethal; // 0xA5
		::RPG::GameCore::JsonEnum* DamageBehavior; // 0xA8
		::RPG::GameCore::DynamicFloat* FrameHalt; // 0xB0
		::System::Boolean FrameHaltActiveNextFrame; // 0xB8
		::System::Boolean IsFaceToHitDir; // 0xB9
		::System::String* HitAnimation; // 0xC0
		::System::String* HitEffectKey; // 0xC8
		::System::String* HitEffect; // 0xD0
		::RPG::GameCore::DynamicFloat* HitEffectMinMutexTime; // 0xD8
		::RPG::GameCore::DynamicFloat* HitEffectMaxMutexCount; // 0xE0
		::Il2CppArray<::System::String*>* HitRandomEffect; // 0xE8
		::System::Single HitEffectHeight; // 0xF0
		::System::Boolean IsHitEffectOffsetByScale; // 0xF4
		::System::Single HitEffectOffsetAngle; // 0xF8
		::RPG::GameCore::HitTimeSlowType HitTimeSlowType; // 0xFC
		::RPG::GameCore::HitTimeSlowIntensity HitTimeSlowIntensity; // 0x100
		::RPG::GameCore::HitMotionParams* HitMotion; // 0x108
		::System::Single HitPosHeight; // 0x110
		::System::Single HitAngleHorizontal; // 0x114
		::System::Single RandomHitAngleHorizontal; // 0x118
		::System::Single HitAngleVertical; // 0x11C
		::RPG::GameCore::TargetEvaluator* HitSource; // 0x120
		::System::Boolean TriggerHPBarAnimation; // 0x128
		::System::Boolean ScreenSpaceFloatMsg; // 0x129
		::RPG::GameCore::TargetEvaluator* InheritTargetType; // 0x130
		::System::Boolean InheritDamageType; // 0x138
		::System::Boolean InheritHitEffect; // 0x139
		::System::Boolean InheritHitAnimation; // 0x13A
		::System::Boolean InheritHitPos; // 0x13B

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ATTACKDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_7E9645886120E859(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AttackData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AttackData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ATTACKDATA_METHOD_2_7E9645886120E859_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_9F0425A182D9ECC3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AttackData* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AttackData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ATTACKDATA_METHOD_2_9F0425A182D9ECC3_OFFSET))(a1, a2);
		}

		::System::Object* ShareByCopy()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ATTACKDATA_SHAREBYCOPY_OFFSET))(this);
		}
	};
}
