#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimGrenadierAttackType.h"
#include "unitysdk/RPG/GameCore/FiveDimGrenadierTargetType.h"
#include "unitysdk/RPG/GameCore/FiveDimOrthoDirection.h"
#include "unitysdk/RPG/GameCore/FiveDimPropSpawnerParam.h"
#include "unitysdk/RPG/GameCore/FiveDimSimpleProjectileMoveType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimGrenadierProjectileConfig; }

#define RPG_GAMECORE_FIVEDIMGRENADIERPROPSPAWNERPARAM_METHOD_3_1636ADB9B3ECA84F_OFFSET UNITYSDK_OFFSET(0x171F69E0)
#define RPG_GAMECORE_FIVEDIMGRENADIERPROPSPAWNERPARAM_METHOD_3_CD1343F2AAB20C3F_OFFSET UNITYSDK_OFFSET(0x171F6A30)
#define RPG_GAMECORE_FIVEDIMGRENADIERPROPSPAWNERPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x171F6A20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimGrenadierPropSpawnerParam_TypeDefinitionIndex = 17055;

	class FiveDimGrenadierPropSpawnerParam : public ::RPG::GameCore::FiveDimPropSpawnerParam
	{
	public:
		::System::Boolean EnableOverrideMoveSpeed; // 0x10
		::System::Single MoveSpeedOverride; // 0x14
		::System::Boolean EnableOverrideAttackDistance; // 0x18
		::System::Single AttackDistance; // 0x1C
		::System::Boolean EnableOverrideAttackInterval; // 0x20
		::System::Single AttackInterval; // 0x24
		::System::Boolean EnableOverrideAttackType; // 0x28
		::RPG::GameCore::FiveDimGrenadierAttackType AttackType; // 0x2C
		::System::Boolean EnableOverrideProjectileMoveType; // 0x30
		::RPG::GameCore::FiveDimSimpleProjectileMoveType ProjectileMoveType; // 0x34
		::System::Single ParabolaHeightOffset; // 0x38
		::System::Single LaunchSpeed; // 0x3C
		::System::Boolean EnableOverrideProjectileConfigList; // 0x40
		::Il2CppArray<::RPG::GameCore::FiveDimGrenadierProjectileConfig*>* ProjectileConfigList; // 0x48
		::RPG::GameCore::FiveDimOrthoDirection Direction; // 0x50
		::RPG::GameCore::FiveDimGrenadierTargetType TargetType; // 0x54
		::System::UInt32 CustomTargetID; // 0x58
		::System::Single StartOffset; // 0x5C
		::System::Single EndOffset; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGRENADIERPROPSPAWNERPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1636ADB9B3ECA84F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimGrenadierPropSpawnerParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimGrenadierPropSpawnerParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGRENADIERPROPSPAWNERPARAM_METHOD_3_1636ADB9B3ECA84F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CD1343F2AAB20C3F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimGrenadierPropSpawnerParam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimGrenadierPropSpawnerParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGRENADIERPROPSPAWNERPARAM_METHOD_3_CD1343F2AAB20C3F_OFFSET))(a1, a2);
		}
	};
}
