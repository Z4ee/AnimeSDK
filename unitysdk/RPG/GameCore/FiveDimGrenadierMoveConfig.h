#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimGrenadierAttackType.h"
#include "unitysdk/RPG/GameCore/FiveDimGrenadierMoveType.h"
#include "unitysdk/RPG/GameCore/FiveDimPropMoveConfig.h"
#include "unitysdk/RPG/GameCore/FiveDimSimpleProjectileMoveType.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimGrenadierProjectileConfig; }
namespace RPG::GameCore { class FloatCurve; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMGRENADIERMOVECONFIG_METHOD_3_0CB3A01DA5CCCA4D_OFFSET UNITYSDK_OFFSET(0x1BA9A420)
#define RPG_GAMECORE_FIVEDIMGRENADIERMOVECONFIG_METHOD_3_DAC8813EA51DA148_OFFSET UNITYSDK_OFFSET(0x1BA9A3B0)
#define RPG_GAMECORE_FIVEDIMGRENADIERMOVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA9A400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimGrenadierMoveConfig_TypeDefinitionIndex = 16052;

	class FiveDimGrenadierMoveConfig : public ::RPG::GameCore::FiveDimPropMoveConfig
	{
	public:
		::RPG::MVector3 ColliderCenter; // 0x40
		::System::Single BeatBackDistance; // 0x4C
		::System::Single AttackDistance; // 0x50
		::System::Single AttackDistancePerpendicular; // 0x54
		::System::Single TraceOffset; // 0x58
		::System::Single TraceAcceleration; // 0x5C
		::System::Single TraceDeceleration; // 0x60
		::System::Single TraceDistanceThreshold; // 0x64
		::RPG::GameCore::FloatCurve* TraceDistAccelerationCurve; // 0x68
		::RPG::GameCore::FiveDimGrenadierMoveType MoveType; // 0x70
		::System::Boolean ManualAttack; // 0x74
		::System::Single AttackInterval; // 0x78
		::RPG::MVector3 CreationOffset; // 0x7C
		::RPG::GameCore::FiveDimGrenadierAttackType AttackType; // 0x88
		::RPG::GameCore::FiveDimSimpleProjectileMoveType ProjectileMoveType; // 0x8C
		::System::Single ParabolaHeightOffset; // 0x90
		::System::Single LaunchSpeed; // 0x94
		::Il2CppArray<::RPG::GameCore::FiveDimGrenadierProjectileConfig*>* ProjectileConfigList; // 0x98
		::System::Single AttackStartup; // 0xA0
		::System::String* OnAttackEvent; // 0xA8
		::System::String* LineTraceEffectPath; // 0xB0
		::System::Single StunTime; // 0xB8
		::System::String* OnHitEvent; // 0xC0
		::System::String* OnRecoverEvent; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGRENADIERMOVECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DAC8813EA51DA148(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimGrenadierMoveConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimGrenadierMoveConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGRENADIERMOVECONFIG_METHOD_3_DAC8813EA51DA148_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0CB3A01DA5CCCA4D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimGrenadierMoveConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimGrenadierMoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGRENADIERMOVECONFIG_METHOD_3_0CB3A01DA5CCCA4D_OFFSET))(a1, a2);
		}
	};
}
