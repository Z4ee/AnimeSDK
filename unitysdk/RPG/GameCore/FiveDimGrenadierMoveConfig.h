#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimGrenadierAttackType.h"
#include "unitysdk/RPG/GameCore/FiveDimGrenadierMoveType.h"
#include "unitysdk/RPG/GameCore/FiveDimPropMoveConfig.h"
#include "unitysdk/RPG/GameCore/FiveDimSimpleProjectileMoveType.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimGrenadierProjectileConfig; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMGRENADIERMOVECONFIG_METHOD_3_94A3B3370C6703EF_OFFSET UNITYSDK_OFFSET(0x171F6070)
#define RPG_GAMECORE_FIVEDIMGRENADIERMOVECONFIG_METHOD_3_E125FA8DF60A6BA1_OFFSET UNITYSDK_OFFSET(0x171F60E0)
#define RPG_GAMECORE_FIVEDIMGRENADIERMOVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x171F60C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimGrenadierMoveConfig_TypeDefinitionIndex = 15304;

	class FiveDimGrenadierMoveConfig : public ::RPG::GameCore::FiveDimPropMoveConfig
	{
	public:
		::RPG::MVector3 ColliderCenter; // 0x40
		::System::Single BeatBackDistance; // 0x4C
		::System::Single AttackDistance; // 0x50
		::System::Single AttackDistancePerpendicular; // 0x54
		::System::Boolean ManualAttack; // 0x58
		::System::Single AttackInterval; // 0x5C
		::RPG::MVector3 CreationOffset; // 0x60
		::RPG::GameCore::FiveDimGrenadierAttackType AttackType; // 0x6C
		::RPG::GameCore::FiveDimSimpleProjectileMoveType ProjectileMoveType; // 0x70
		::System::Single ParabolaHeightOffset; // 0x74
		::System::Single LaunchSpeed; // 0x78
		::Il2CppArray<::RPG::GameCore::FiveDimGrenadierProjectileConfig*>* ProjectileConfigList; // 0x80
		::System::String* LineTraceEffectPath; // 0x88
		::System::Single StunTime; // 0x90
		::System::String* OnHitEvent; // 0x98
		::System::String* OnRecoverEvent; // 0xA0
		::System::String* OnAttackEvent; // 0xA8
		::System::Single TraceOffset; // 0xB0
		::RPG::GameCore::FiveDimGrenadierMoveType MoveType; // 0xB4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGRENADIERMOVECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_94A3B3370C6703EF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimGrenadierMoveConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimGrenadierMoveConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGRENADIERMOVECONFIG_METHOD_3_94A3B3370C6703EF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E125FA8DF60A6BA1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimGrenadierMoveConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimGrenadierMoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGRENADIERMOVECONFIG_METHOD_3_E125FA8DF60A6BA1_OFFSET))(a1, a2);
		}
	};
}
