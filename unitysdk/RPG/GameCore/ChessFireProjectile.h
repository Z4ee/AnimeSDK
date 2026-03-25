#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class ProjectileData; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_CHESSFIREPROJECTILE_METHOD_3_8407ADBB1B69A6E9_OFFSET UNITYSDK_OFFSET(0x1708BEE0)
#define RPG_GAMECORE_CHESSFIREPROJECTILE_METHOD_3_855FCB246DFE3061_OFFSET UNITYSDK_OFFSET(0x1708BF80)
#define RPG_GAMECORE_CHESSFIREPROJECTILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1708BF40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChessFireProjectile_TypeDefinitionIndex = 21988;

	class ChessFireProjectile : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::AliveStateMask TargetAliveState; // 0x20
		::RPG::GameCore::PredicateConfig* Predicate; // 0x28
		::System::Int32 TargetMaxHitCount; // 0x30
		::System::Int32 MaxNumber; // 0x34
		::System::Boolean ResetAllHitCount; // 0x38
		::RPG::GameCore::ProjectileData* Projectile; // 0x40
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnProjectileHit; // 0x48
		::System::Boolean WaitProjectileFinish; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESSFIREPROJECTILE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8407ADBB1B69A6E9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChessFireProjectile*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChessFireProjectile*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESSFIREPROJECTILE_METHOD_3_8407ADBB1B69A6E9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_855FCB246DFE3061(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChessFireProjectile* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChessFireProjectile*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESSFIREPROJECTILE_METHOD_3_855FCB246DFE3061_OFFSET))(a1, a2);
		}
	};
}
