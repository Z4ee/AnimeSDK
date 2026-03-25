#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ProjectileData; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_CHESSFIREWAVEPROJECTILE_METHOD_3_185FDE17572F8F02_OFFSET UNITYSDK_OFFSET(0x1708C320)
#define RPG_GAMECORE_CHESSFIREWAVEPROJECTILE_METHOD_3_376983363DD54C7A_OFFSET UNITYSDK_OFFSET(0x1708C3B0)
#define RPG_GAMECORE_CHESSFIREWAVEPROJECTILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1708C380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChessFireWaveProjectile_TypeDefinitionIndex = 21989;

	class ChessFireWaveProjectile : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* CasterTargetType; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Int32 Count; // 0x28
		::System::Single Interval; // 0x2C
		::RPG::GameCore::ProjectileData* Projectile; // 0x30
		::System::Boolean WaitProjectileFinish; // 0x38
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnProjectileHitClientOnly; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESSFIREWAVEPROJECTILE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_185FDE17572F8F02(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChessFireWaveProjectile*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChessFireWaveProjectile*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESSFIREWAVEPROJECTILE_METHOD_3_185FDE17572F8F02_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_376983363DD54C7A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChessFireWaveProjectile* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChessFireWaveProjectile*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESSFIREWAVEPROJECTILE_METHOD_3_376983363DD54C7A_OFFSET))(a1, a2);
		}
	};
}
