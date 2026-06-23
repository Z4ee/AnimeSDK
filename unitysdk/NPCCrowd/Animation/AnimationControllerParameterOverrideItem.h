#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/StateMachine/Parameter.h"
#include "unitysdk/Foundation/StateMachine/ParameterId.h"
#include "unitysdk/NPCCrowd/Animation/AnimatorControllerParamEntry.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeSlice_1.h"
#include "unitysdk/UnityEngine/Animations/AnimatorControllerPlayable.h"
#include "unitysdk/UnityEngine/AnimatorControllerParameterType.h"

namespace System { class String; }
namespace UnityEngine { class AnimatorControllerParameter; }

#define NPCCROWD_ANIMATION_ANIMATIONCONTROLLERPARAMETEROVERRIDEITEM_APPLY_1_OFFSET UNITYSDK_OFFSET(0xD937610)
#define NPCCROWD_ANIMATION_ANIMATIONCONTROLLERPARAMETEROVERRIDEITEM_APPLY_OFFSET UNITYSDK_OFFSET(0xD936FE0)
#define NPCCROWD_ANIMATION_ANIMATIONCONTROLLERPARAMETEROVERRIDEITEM_ASSIGNTO_OFFSET UNITYSDK_OFFSET(0xD937720)
#define NPCCROWD_ANIMATION_ANIMATIONCONTROLLERPARAMETEROVERRIDEITEM_GET_ID_OFFSET UNITYSDK_OFFSET(0xD937510)
#define NPCCROWD_ANIMATION_ANIMATIONCONTROLLERPARAMETEROVERRIDEITEM_ISSAMEITEM_OFFSET UNITYSDK_OFFSET(0xD9377B0)
#define NPCCROWD_ANIMATION_ANIMATIONCONTROLLERPARAMETEROVERRIDEITEM_MATCHES_OFFSET UNITYSDK_OFFSET(0xD936F50)
#define NPCCROWD_ANIMATION_ANIMATIONCONTROLLERPARAMETEROVERRIDEITEM_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0xD937240)
#define NPCCROWD_ANIMATION_ANIMATIONCONTROLLERPARAMETEROVERRIDEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xD937840)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationControllerParameterOverrideItem_TypeDefinitionIndex = 86122;

	class AnimationControllerParameterOverrideItem : public ::System::Object
	{
	public:
		::System::Int32 paramIndex; // 0x10
		::System::String* paramName; // 0x18
		::UnityEngine::AnimatorControllerParameterType paramType; // 0x20
		::System::Boolean expose; // 0x24
		::System::Single floatValue; // 0x28
		::System::Boolean boolValue; // 0x2C
		::System::Int32 intValue; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONCONTROLLERPARAMETEROVERRIDEITEM__CTOR_OFFSET))(this);
		}

		::System::Boolean Matches(::UnityEngine::AnimatorControllerParameter* param)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::AnimatorControllerParameter*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONCONTROLLERPARAMETEROVERRIDEITEM_MATCHES_OFFSET))(this, param);
		}

		::System::Void Apply(::UnityEngine::Animations::AnimatorControllerPlayable playable)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimatorControllerPlayable))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONCONTROLLERPARAMETEROVERRIDEITEM_APPLY_OFFSET))(this, playable);
		}

		static ::NPCCrowd::Animation::AnimatorControllerParamEntry op_Explicit(::NPCCrowd::Animation::AnimationControllerParameterOverrideItem* item)
		{
			return ((::NPCCrowd::Animation::AnimatorControllerParamEntry(*)(::NPCCrowd::Animation::AnimationControllerParameterOverrideItem*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONCONTROLLERPARAMETEROVERRIDEITEM_OP_EXPLICIT_OFFSET))(item);
		}

		::Foundation::StateMachine::ParameterId get_Id()
		{
			return ((::Foundation::StateMachine::ParameterId(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONCONTROLLERPARAMETEROVERRIDEITEM_GET_ID_OFFSET))(this);
		}

		::System::Void Apply_1(::Unity::Collections::NativeSlice_1<::Foundation::StateMachine::Parameter> parameters)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::NativeSlice_1<::Foundation::StateMachine::Parameter>))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONCONTROLLERPARAMETEROVERRIDEITEM_APPLY_1_OFFSET))(this, parameters);
		}

		::System::Void AssignTo(::NPCCrowd::Animation::AnimationControllerParameterOverrideItem* other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationControllerParameterOverrideItem*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONCONTROLLERPARAMETEROVERRIDEITEM_ASSIGNTO_OFFSET))(this, other);
		}

		::System::Boolean IsSameItem(::NPCCrowd::Animation::AnimationControllerParameterOverrideItem* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Animation::AnimationControllerParameterOverrideItem*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONCONTROLLERPARAMETEROVERRIDEITEM_ISSAMEITEM_OFFSET))(this, other);
		}
	};
}
