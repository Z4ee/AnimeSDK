#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/StateMachine/Parameter.h"
#include "unitysdk/Foundation/StateMachine/ParameterId.h"
#include "unitysdk/NPCCrowd/Animation/AnimatorControllerParamEntry.h"
#include "unitysdk/NPCCrowd/Animation/AnimatorControllerStateEntry.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeSlice_1.h"
#include "unitysdk/UnityEngine/Animations/AnimatorControllerPlayable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace NPCCrowd::Animation { class AnimationControllerAnimationClipOverrideItem; }
namespace NPCCrowd::Animation { class AnimationControllerParameterOverrideItem; }
namespace NPCCrowd::Animation { class AnimationControllerStateOverrideItem; }
namespace NPCCrowd::Animation { class AnimationControllerTemplateConfig; }
namespace NPCCrowd::Animation { class ICPUAnimationLib; }
namespace UnityEngine { class AnimatorOverrideController; }

#define NPCCROWD_ANIMATION_ANIMATIONCONTROLLERINSTANCEENTRY_APPLYPARAMTO_OFFSET UNITYSDK_OFFSET(0x157AD7F0)
#define NPCCROWD_ANIMATION_ANIMATIONCONTROLLERINSTANCEENTRY_CREATEANIMATORCONTROLLER_OFFSET UNITYSDK_OFFSET(0x157ADCE0)
#define NPCCROWD_ANIMATION_ANIMATIONCONTROLLERINSTANCEENTRY_FETCHEXPOSEDPARAM_1_OFFSET UNITYSDK_OFFSET(0x157AD630)
#define NPCCROWD_ANIMATION_ANIMATIONCONTROLLERINSTANCEENTRY_FETCHEXPOSEDPARAM_OFFSET UNITYSDK_OFFSET(0x157AD530)
#define NPCCROWD_ANIMATION_ANIMATIONCONTROLLERINSTANCEENTRY_FETCHSTATE_OFFSET UNITYSDK_OFFSET(0x157AE1C0)
#define NPCCROWD_ANIMATION_ANIMATIONCONTROLLERINSTANCEENTRY_GETEXPOSEDPARAMCOUNT_OFFSET UNITYSDK_OFFSET(0x157AD4A0)
#define NPCCROWD_ANIMATION_ANIMATIONCONTROLLERINSTANCEENTRY_GET_ISANIMATIONCONFIG_OFFSET UNITYSDK_OFFSET(0x157ACE00)
#define NPCCROWD_ANIMATION_ANIMATIONCONTROLLERINSTANCEENTRY_INSTANTIATE_1_OFFSET UNITYSDK_OFFSET(0x157AD3E0)
#define NPCCROWD_ANIMATION_ANIMATIONCONTROLLERINSTANCEENTRY_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x157ACEB0)
#define NPCCROWD_ANIMATION_ANIMATIONCONTROLLERINSTANCEENTRY_ISMATCH_OFFSET UNITYSDK_OFFSET(0x157ACE10)
#define NPCCROWD_ANIMATION_ANIMATIONCONTROLLERINSTANCEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x157AE420)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationControllerInstanceEntry_TypeDefinitionIndex = 65902;

	class AnimationControllerInstanceEntry : public ::System::Object
	{
	public:
		::Il2CppArray<::NPCCrowd::Animation::AnimationControllerAnimationClipOverrideItem*>* items; // 0x10
		::Il2CppArray<::NPCCrowd::Animation::AnimationControllerStateOverrideItem*>* states; // 0x18
		::Il2CppArray<::NPCCrowd::Animation::AnimationControllerParameterOverrideItem*>* parameters; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONCONTROLLERINSTANCEENTRY__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsAnimationConfig()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONCONTROLLERINSTANCEENTRY_GET_ISANIMATIONCONFIG_OFFSET))(this);
		}

		::System::Boolean IsMatch(::System::Int32 animationId, ::System::Int32& stateIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONCONTROLLERINSTANCEENTRY_ISMATCH_OFFSET))(this, animationId, stateIndex);
		}

		::UnityEngine::Animations::AnimatorControllerPlayable Instantiate(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::AnimatorOverrideController* controller)
		{
			return ((::UnityEngine::Animations::AnimatorControllerPlayable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::AnimatorOverrideController*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONCONTROLLERINSTANCEENTRY_INSTANTIATE_OFFSET))(this, graph, controller);
		}

		::System::Void Instantiate_1(::Unity::Collections::NativeSlice_1<::Foundation::StateMachine::Parameter> params)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::NativeSlice_1<::Foundation::StateMachine::Parameter>))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONCONTROLLERINSTANCEENTRY_INSTANTIATE_1_OFFSET))(this, params);
		}

		::System::Int32 GetExposedParamCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONCONTROLLERINSTANCEENTRY_GETEXPOSEDPARAMCOUNT_OFFSET))(this);
		}

		::System::Int32 FetchExposedParam(::Unity::Collections::NativeSlice_1<::NPCCrowd::Animation::AnimatorControllerParamEntry> buffer)
		{
			return ((::System::Int32(*)(::PVOID, ::Unity::Collections::NativeSlice_1<::NPCCrowd::Animation::AnimatorControllerParamEntry>))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONCONTROLLERINSTANCEENTRY_FETCHEXPOSEDPARAM_OFFSET))(this, buffer);
		}

		::System::Int32 FetchExposedParam_1(::Unity::Collections::NativeSlice_1<::Foundation::StateMachine::ParameterId> buffer)
		{
			return ((::System::Int32(*)(::PVOID, ::Unity::Collections::NativeSlice_1<::Foundation::StateMachine::ParameterId>))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONCONTROLLERINSTANCEENTRY_FETCHEXPOSEDPARAM_1_OFFSET))(this, buffer);
		}

		::System::Boolean ApplyParamTo(::UnityEngine::Animations::AnimatorControllerPlayable playable)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Animations::AnimatorControllerPlayable))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONCONTROLLERINSTANCEENTRY_APPLYPARAMTO_OFFSET))(this, playable);
		}

		::UnityEngine::AnimatorOverrideController* CreateAnimatorController(::NPCCrowd::Animation::AnimationControllerTemplateConfig* template_, ::NPCCrowd::Animation::ICPUAnimationLib* animationLib)
		{
			return ((::UnityEngine::AnimatorOverrideController*(*)(::PVOID, ::NPCCrowd::Animation::AnimationControllerTemplateConfig*, ::NPCCrowd::Animation::ICPUAnimationLib*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONCONTROLLERINSTANCEENTRY_CREATEANIMATORCONTROLLER_OFFSET))(this, template_, animationLib);
		}

		::System::Int32 FetchState(::Unity::Collections::NativeSlice_1<::NPCCrowd::Animation::AnimatorControllerStateEntry> buffer, ::NPCCrowd::Animation::AnimationControllerTemplateConfig* template_)
		{
			return ((::System::Int32(*)(::PVOID, ::Unity::Collections::NativeSlice_1<::NPCCrowd::Animation::AnimatorControllerStateEntry>, ::NPCCrowd::Animation::AnimationControllerTemplateConfig*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONCONTROLLERINSTANCEENTRY_FETCHSTATE_OFFSET))(this, buffer, template_);
		}
	};
}
