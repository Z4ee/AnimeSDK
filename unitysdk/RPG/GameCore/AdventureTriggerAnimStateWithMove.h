#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureAnimStateType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AdventureAnimationMoveRange; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_ADVENTURETRIGGERANIMSTATEWITHMOVE_METHOD_3_0D598AFEBBDAAD7B_OFFSET UNITYSDK_OFFSET(0x1CDF7FF0)
#define RPG_GAMECORE_ADVENTURETRIGGERANIMSTATEWITHMOVE_METHOD_3_24ECD6458702E29A_OFFSET UNITYSDK_OFFSET(0x1CDF8040)
#define RPG_GAMECORE_ADVENTURETRIGGERANIMSTATEWITHMOVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDF8030)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureTriggerAnimStateWithMove_TypeDefinitionIndex = 19946;

	class AdventureTriggerAnimStateWithMove : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::AdventureAnimStateType AnimLogicState; // 0x20
		::System::String* AnimStateName; // 0x28
		::System::Single NormalizedTimeStart; // 0x30
		::System::Single TransitionDuration; // 0x34
		::System::Boolean StopWhenHitOthers; // 0x38
		::System::Boolean ForbidCrossfade; // 0x39
		::Il2CppArray<::RPG::GameCore::AdventureAnimationMoveRange*>* MovingRangeList; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURETRIGGERANIMSTATEWITHMOVE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0D598AFEBBDAAD7B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureTriggerAnimStateWithMove*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureTriggerAnimStateWithMove*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURETRIGGERANIMSTATEWITHMOVE_METHOD_3_0D598AFEBBDAAD7B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_24ECD6458702E29A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureTriggerAnimStateWithMove* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureTriggerAnimStateWithMove*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURETRIGGERANIMSTATEWITHMOVE_METHOD_3_24ECD6458702E29A_OFFSET))(a1, a2);
		}
	};
}
