#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/AnimatorControllerInstance.h"
#include "unitysdk/NPCCrowd/Animation/AnimatorControllerParamEntry.h"
#include "unitysdk/NPCCrowd/Animation/AnimatorControllerStateEntry.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeSlice_1.h"
#include "unitysdk/UnityEngine/Animations/AnimatorControllerPlayable.h"

#define NPCCROWD_ANIMATION_INSTANCEEXTENSION_SET_1_OFFSET UNITYSDK_OFFSET(0xD253EE0)
#define NPCCROWD_ANIMATION_INSTANCEEXTENSION_SET_2_OFFSET UNITYSDK_OFFSET(0xD253F40)
#define NPCCROWD_ANIMATION_INSTANCEEXTENSION_SET_OFFSET UNITYSDK_OFFSET(0xD253E80)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int InstanceExtension_TypeDefinitionIndex = 58933;

	class InstanceExtension : public ::System::Object
	{
	public:
		static ::NPCCrowd::Animation::AnimatorControllerInstance& Set(::NPCCrowd::Animation::AnimatorControllerInstance& self, ::Unity::Collections::NativeSlice_1<::NPCCrowd::Animation::AnimatorControllerStateEntry> states)
		{
			return ((::NPCCrowd::Animation::AnimatorControllerInstance&(*)(::NPCCrowd::Animation::AnimatorControllerInstance&, ::Unity::Collections::NativeSlice_1<::NPCCrowd::Animation::AnimatorControllerStateEntry>))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_INSTANCEEXTENSION_SET_OFFSET))(self, states);
		}

		static ::NPCCrowd::Animation::AnimatorControllerInstance& Set_1(::NPCCrowd::Animation::AnimatorControllerInstance& self, ::Unity::Collections::NativeSlice_1<::NPCCrowd::Animation::AnimatorControllerParamEntry> params)
		{
			return ((::NPCCrowd::Animation::AnimatorControllerInstance&(*)(::NPCCrowd::Animation::AnimatorControllerInstance&, ::Unity::Collections::NativeSlice_1<::NPCCrowd::Animation::AnimatorControllerParamEntry>))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_INSTANCEEXTENSION_SET_1_OFFSET))(self, params);
		}

		static ::NPCCrowd::Animation::AnimatorControllerInstance& Set_2(::NPCCrowd::Animation::AnimatorControllerInstance& self, ::UnityEngine::Animations::AnimatorControllerPlayable playable)
		{
			return ((::NPCCrowd::Animation::AnimatorControllerInstance&(*)(::NPCCrowd::Animation::AnimatorControllerInstance&, ::UnityEngine::Animations::AnimatorControllerPlayable))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_INSTANCEEXTENSION_SET_2_OFFSET))(self, playable);
		}
	};
}
