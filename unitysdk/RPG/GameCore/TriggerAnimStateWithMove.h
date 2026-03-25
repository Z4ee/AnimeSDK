#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimStateLogicType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AnimationMoveRange; }
namespace RPG::GameCore { class AnimationTimeEvent; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_TRIGGERANIMSTATEWITHMOVE_METHOD_3_57B6CF32F17C97A6_OFFSET UNITYSDK_OFFSET(0x178BEB10)
#define RPG_GAMECORE_TRIGGERANIMSTATEWITHMOVE_METHOD_3_E8E42C7968867E18_OFFSET UNITYSDK_OFFSET(0x178BEDA0)
#define RPG_GAMECORE_TRIGGERANIMSTATEWITHMOVE__CTOR_OFFSET UNITYSDK_OFFSET(0x178BEC70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerAnimStateWithMove_TypeDefinitionIndex = 20651;

	class TriggerAnimStateWithMove : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::AnimStateLogicType AnimLogicState; // 0x20
		::System::String* AnimStateName; // 0x28
		::RPG::GameCore::DynamicFloat* NormalizedTimeStart; // 0x30
		::RPG::GameCore::DynamicFloat* NormalizedTimeEnd; // 0x38
		::RPG::GameCore::DynamicFloat* NormalizedTransitionDuration; // 0x40
		::Il2CppArray<::RPG::GameCore::AnimationMoveRange*>* MovingRangeList; // 0x48
		::Il2CppArray<::RPG::GameCore::AnimationTimeEvent*>* EventList; // 0x50
		::System::Boolean ForceStart; // 0x58
		::System::Boolean WaitAnimState; // 0x59

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERANIMSTATEWITHMOVE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_57B6CF32F17C97A6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerAnimStateWithMove*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerAnimStateWithMove*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERANIMSTATEWITHMOVE_METHOD_3_57B6CF32F17C97A6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E8E42C7968867E18(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerAnimStateWithMove* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerAnimStateWithMove*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERANIMSTATEWITHMOVE_METHOD_3_E8E42C7968867E18_OFFSET))(a1, a2);
		}
	};
}
