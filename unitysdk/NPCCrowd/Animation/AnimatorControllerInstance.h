#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/AnimatorControllerParamEntry.h"
#include "unitysdk/NPCCrowd/Animation/AnimatorControllerStateEntry.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeSlice_1.h"
#include "unitysdk/UnityEngine/Animations/AnimatorControllerPlayable.h"

namespace NPCCrowd::Animation { class AnimationControllerInstanceConfig; }
namespace NPCCrowd::Animation { class IAnimatorControllerManager; }
namespace NPCCrowd::Animation { template <typename T1, typename T2> class AnimatorControllerInstance_2; }
namespace NPCCrowd::Animation { template <typename T> class AnimatorControllerParamResolver_1; }
namespace NPCCrowd::Animation { template <typename T> class AnimatorControllerStateResolver_1; }

#define NPCCROWD_ANIMATION_ANIMATORCONTROLLERINSTANCE_GET_ISBUFFERVALID_OFFSET UNITYSDK_OFFSET(0x651A40)
#define NPCCROWD_ANIMATION_ANIMATORCONTROLLERINSTANCE_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x651A30)
#define NPCCROWD_ANIMATION_ANIMATORCONTROLLERINSTANCE_GET_PARAMETERS_OFFSET UNITYSDK_OFFSET(0x651AA0)
#define NPCCROWD_ANIMATION_ANIMATORCONTROLLERINSTANCE_GET_PLAYABLE_OFFSET UNITYSDK_OFFSET(0x2ADAB0)
#define NPCCROWD_ANIMATION_ANIMATORCONTROLLERINSTANCE_GET_STATES_OFFSET UNITYSDK_OFFSET(0x651AC0)
#define NPCCROWD_ANIMATION_ANIMATORCONTROLLERINSTANCE_RESET_1_OFFSET UNITYSDK_OFFSET(0x651B40)
#define NPCCROWD_ANIMATION_ANIMATORCONTROLLERINSTANCE_RESET_OFFSET UNITYSDK_OFFSET(0x651B30)
#define NPCCROWD_ANIMATION_ANIMATORCONTROLLERINSTANCE_SETBOOL_OFFSET UNITYSDK_OFFSET(0x651B10)
#define NPCCROWD_ANIMATION_ANIMATORCONTROLLERINSTANCE_SETFLOAT_OFFSET UNITYSDK_OFFSET(0x651AF0)
#define NPCCROWD_ANIMATION_ANIMATORCONTROLLERINSTANCE_SETINTEGER_OFFSET UNITYSDK_OFFSET(0x651B00)
#define NPCCROWD_ANIMATION_ANIMATORCONTROLLERINSTANCE_SETSTATE_OFFSET UNITYSDK_OFFSET(0x651AE0)
#define NPCCROWD_ANIMATION_ANIMATORCONTROLLERINSTANCE_TRIGGER_OFFSET UNITYSDK_OFFSET(0x651B20)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimatorControllerInstance_TypeDefinitionIndex = 74277;

	struct alignas(8) AnimatorControllerInstance
	{
		::UnityEngine::Animations::AnimatorControllerPlayable Controller; // 0x10
		::Unity::Collections::NativeSlice_1<::NPCCrowd::Animation::AnimatorControllerStateEntry> StateEntries; // 0x20
		::Unity::Collections::NativeSlice_1<::NPCCrowd::Animation::AnimatorControllerParamEntry> ParamEntries; // 0x30

		::UnityEngine::Animations::AnimatorControllerPlayable get_Playable()
		{
			return ((::UnityEngine::Animations::AnimatorControllerPlayable(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATORCONTROLLERINSTANCE_GET_PLAYABLE_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATORCONTROLLERINSTANCE_GET_ISVALID_OFFSET))(this);
		}

		::System::Boolean get_IsBufferValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATORCONTROLLERINSTANCE_GET_ISBUFFERVALID_OFFSET))(this);
		}

		/*
		::Unity::Collections::NativeSlice_1<::NPCCrowd::Animation::AnimatorControllerParamIdentifier> get_Parameters()
		{
			return ((::Unity::Collections::NativeSlice_1<::NPCCrowd::Animation::AnimatorControllerParamIdentifier>(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATORCONTROLLERINSTANCE_GET_PARAMETERS_OFFSET))(this);
		}
		*/

		/*
		::Unity::Collections::NativeSlice_1<::NPCCrowd::Animation::AnimatorControllerStateIdentifier> get_States()
		{
			return ((::Unity::Collections::NativeSlice_1<::NPCCrowd::Animation::AnimatorControllerStateIdentifier>(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATORCONTROLLERINSTANCE_GET_STATES_OFFSET))(this);
		}
		*/

		/*
		::System::Void SetState(::NPCCrowd::Animation::AnimatorControllerStateIdentifier state, ::System::Single frameTime, ::System::Single speed)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimatorControllerStateIdentifier, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATORCONTROLLERINSTANCE_SETSTATE_OFFSET))(this, state, frameTime, speed);
		}
		*/

		::System::Void SetFloat(::System::Int32 paramIndex, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATORCONTROLLERINSTANCE_SETFLOAT_OFFSET))(this, paramIndex, value);
		}

		::System::Void SetInteger(::System::Int32 paramIndex, ::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATORCONTROLLERINSTANCE_SETINTEGER_OFFSET))(this, paramIndex, value);
		}

		::System::Void SetBool(::System::Int32 paramIndex, ::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATORCONTROLLERINSTANCE_SETBOOL_OFFSET))(this, paramIndex, value);
		}

		::System::Void Trigger(::System::Int32 paramIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATORCONTROLLERINSTANCE_TRIGGER_OFFSET))(this, paramIndex);
		}

		::System::Void Reset(::System::Int32 paramIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATORCONTROLLERINSTANCE_RESET_OFFSET))(this, paramIndex);
		}

		::System::Void Reset_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATORCONTROLLERINSTANCE_RESET_1_OFFSET))(this);
		}
	};
}
