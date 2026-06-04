#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DamageDisplayData; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_FIREPROJECTILEBASE_METHOD_3_11B3D1FF8FE6043E_OFFSET UNITYSDK_OFFSET(0x19724BA0)
#define RPG_GAMECORE_FIREPROJECTILEBASE_METHOD_3_C17F6D174D7DFB00_OFFSET UNITYSDK_OFFSET(0x19724DE0)
#define RPG_GAMECORE_FIREPROJECTILEBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x19724B60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FireProjectileBase_TypeDefinitionIndex = 21346;

	class FireProjectileBase : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::AliveStateMask TargetAliveState; // 0x20
		::RPG::GameCore::PredicateConfig* Predicate; // 0x28
		::System::Int32 TargetMaxHitCount; // 0x30
		::System::Int32 MaxNumber; // 0x34
		::System::Boolean ResetAllHitCount; // 0x38
		::RPG::GameCore::TargetEvaluator* CustomAnchorTarget; // 0x40
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnProjectileHit; // 0x48
		::System::Boolean WaitProjectileFinish; // 0x50
		::RPG::GameCore::DamageDisplayData* DisplayData; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIREPROJECTILEBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_11B3D1FF8FE6043E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FireProjectileBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FireProjectileBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIREPROJECTILEBASE_METHOD_3_11B3D1FF8FE6043E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C17F6D174D7DFB00(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FireProjectileBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FireProjectileBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIREPROJECTILEBASE_METHOD_3_C17F6D174D7DFB00_OFFSET))(a1, a2);
		}
	};
}
