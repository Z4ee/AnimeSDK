#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimStateLogicType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_TRIGGERANIMSTATE_METHOD_3_3B1D629349725B87_OFFSET UNITYSDK_OFFSET(0x19E07620)
#define RPG_GAMECORE_TRIGGERANIMSTATE_METHOD_3_54D77F5BB0010A8F_OFFSET UNITYSDK_OFFSET(0x19E07450)
#define RPG_GAMECORE_TRIGGERANIMSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x19E07490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerAnimState_TypeDefinitionIndex = 21627;

	class TriggerAnimState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::AnimStateLogicType AnimLogicState; // 0x20
		::System::String* AnimStateName; // 0x28
		::RPG::GameCore::DynamicFloat* NormalizedTimeStart; // 0x30
		::RPG::GameCore::DynamicFloat* NormalizedTimeEnd; // 0x38
		::RPG::GameCore::DynamicFloat* NormalizedTimeWait; // 0x40
		::RPG::GameCore::DynamicFloat* NormalizedTransitionDuration; // 0x48
		::System::Boolean ForceStart; // 0x50
		::System::Boolean RandomHitAngle; // 0x51
		::System::Boolean WaitAnimState; // 0x52

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERANIMSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_54D77F5BB0010A8F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerAnimState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerAnimState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERANIMSTATE_METHOD_3_54D77F5BB0010A8F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3B1D629349725B87(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerAnimState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerAnimState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERANIMSTATE_METHOD_3_3B1D629349725B87_OFFSET))(a1, a2);
		}
	};
}
