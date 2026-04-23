#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DeathSource.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_FORCEKILL_METHOD_3_65C4CA872D920D08_OFFSET UNITYSDK_OFFSET(0x18928C50)
#define RPG_GAMECORE_FORCEKILL_METHOD_3_91F7456C7AD92702_OFFSET UNITYSDK_OFFSET(0x18928CF0)
#define RPG_GAMECORE_FORCEKILL__CTOR_OFFSET UNITYSDK_OFFSET(0x18928CB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ForceKill_TypeDefinitionIndex = 21573;

	class ForceKill : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DeathSource DeathSource; // 0x20
		::RPG::GameCore::TargetEvaluator* KillerType; // 0x28
		::System::Boolean AbortUnusedInsertAbility; // 0x30
		::System::Boolean CanOverkill; // 0x31
		::System::Boolean MuteHpChange; // 0x32
		::System::Boolean MuteTriggerDeath; // 0x33
		::System::Boolean MuteAllTriggerDeath; // 0x34
		::System::Boolean AllowRevive; // 0x35

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORCEKILL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_65C4CA872D920D08(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ForceKill*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ForceKill*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORCEKILL_METHOD_3_65C4CA872D920D08_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_91F7456C7AD92702(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ForceKill* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ForceKill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORCEKILL_METHOD_3_91F7456C7AD92702_OFFSET))(a1, a2);
		}
	};
}
