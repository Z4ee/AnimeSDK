#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimGrenadierAttackType.h"
#include "unitysdk/RPG/GameCore/FiveDimGrenadierTargetType.h"
#include "unitysdk/RPG/GameCore/FiveDimOrthoDirection.h"
#include "unitysdk/RPG/GameCore/FiveDimPropSpawnerParam.h"
#include "unitysdk/RPG/GameCore/FiveDimSimpleProjectileMoveType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimGrenadierProjectileConfig; }

#define RPG_GAMECORE_FIVEDIMGRENADIERPROPSPAWNERPARAM_METHOD_3_8E9EE9AF3B346134_OFFSET UNITYSDK_OFFSET(0x1D0EBF30)
#define RPG_GAMECORE_FIVEDIMGRENADIERPROPSPAWNERPARAM_METHOD_3_CF38851C4B9CA149_OFFSET UNITYSDK_OFFSET(0x1D0EBF80)
#define RPG_GAMECORE_FIVEDIMGRENADIERPROPSPAWNERPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0EBF70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimGrenadierPropSpawnerParam_TypeDefinitionIndex = 18372;

	class FiveDimGrenadierPropSpawnerParam : public ::RPG::GameCore::FiveDimPropSpawnerParam
	{
	public:
		::System::Boolean EnableOverrideMoveSpeed; // 0x10
		::System::Single MoveSpeedOverride; // 0x14
		::System::Boolean EnableOverrideTraceAcceleration; // 0x18
		::System::Single TraceAccelerationOverride; // 0x1C
		::System::Boolean EnableOverrideTraceDeceleration; // 0x20
		::System::Single TraceDecelerationOverride; // 0x24
		::System::Boolean EnableOverrideAttackDistance; // 0x28
		::System::Single AttackDistance; // 0x2C
		::System::Boolean EnableOverrideAttackInterval; // 0x30
		::System::Single AttackInterval; // 0x34
		::System::Boolean EnableOverrideAttackType; // 0x38
		::RPG::GameCore::FiveDimGrenadierAttackType AttackType; // 0x3C
		::System::Boolean EnableOverrideProjectileMoveType; // 0x40
		::RPG::GameCore::FiveDimSimpleProjectileMoveType ProjectileMoveType; // 0x44
		::System::Single ParabolaHeightOffset; // 0x48
		::System::Single LaunchSpeed; // 0x4C
		::System::Boolean EnableOverrideProjectileConfigList; // 0x50
		::Il2CppArray<::RPG::GameCore::FiveDimGrenadierProjectileConfig*>* ProjectileConfigList; // 0x58
		::RPG::GameCore::FiveDimOrthoDirection Direction; // 0x60
		::RPG::GameCore::FiveDimGrenadierTargetType TargetType; // 0x64
		::System::UInt32 CustomTargetID; // 0x68
		::System::Single StartOffset; // 0x6C
		::System::Single EndOffset; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGRENADIERPROPSPAWNERPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8E9EE9AF3B346134(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimGrenadierPropSpawnerParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimGrenadierPropSpawnerParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGRENADIERPROPSPAWNERPARAM_METHOD_3_8E9EE9AF3B346134_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CF38851C4B9CA149(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimGrenadierPropSpawnerParam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimGrenadierPropSpawnerParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGRENADIERPROPSPAWNERPARAM_METHOD_3_CF38851C4B9CA149_OFFSET))(a1, a2);
		}
	};
}
