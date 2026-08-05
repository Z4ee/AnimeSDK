#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/AnimatorControllerParameterInfo.h"
#include "unitysdk/System/Object.h"

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEARCHETYPEDATA___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0xF875760)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEARCHETYPEDATA___C__DISPLAYCLASS17_0___CTOR_B__0_OFFSET UNITYSDK_OFFSET(0xF875770)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_StateMachineArchetypeData___c__DisplayClass17_0_TypeDefinitionIndex = 88247;

	class AnimationSubManager_StateMachineArchetypeData___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::System::Int32 i; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEARCHETYPEDATA___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __ctor_b__0(::NPCCrowd::Animation::AnimatorControllerParameterInfo item)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Animation::AnimatorControllerParameterInfo))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEARCHETYPEDATA___C__DISPLAYCLASS17_0___CTOR_B__0_OFFSET))(this, item);
		}
	};
}
