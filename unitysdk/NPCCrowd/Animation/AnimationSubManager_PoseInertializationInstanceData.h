#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/DefaultConstruct.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_PoseInertializationState.h"
#include "unitysdk/System/ValueType.h"

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONINSTANCEDATA_DEACTIVATE_OFFSET UNITYSDK_OFFSET(0x6C87E0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONINSTANCEDATA_GET_FRAMECOUNT_OFFSET UNITYSDK_OFFSET(0x6C87A0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONINSTANCEDATA_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x6C8790)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONINSTANCEDATA_GET_STATE_OFFSET UNITYSDK_OFFSET(0x6C8770)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONINSTANCEDATA_SET_FRAMECOUNT_OFFSET UNITYSDK_OFFSET(0x6C87B0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONINSTANCEDATA_SET_STATE_OFFSET UNITYSDK_OFFSET(0x6C8780)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x106FE800)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONINSTANCEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x4972B0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_PoseInertializationInstanceData_TypeDefinitionIndex = 57434;

	struct alignas(4) AnimationSubManager_PoseInertializationInstanceData
	{
		static ::NPCCrowd::Animation::AnimationSubManager_PoseInertializationInstanceData* StaticGet_Default()
		{
			return (::NPCCrowd::Animation::AnimationSubManager_PoseInertializationInstanceData*)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_PoseInertializationInstanceData_TypeDefinitionIndex)->GetStaticField(0xB350);
		}
		// static const ::System::UInt32 StateMask = 0x3; // 0x0
		// static const ::System::Int32 StateOffset = 0x0; // 0x0
		// static const ::System::UInt32 FrameMask = 0xC; // 0x0
		// static const ::System::Int32 FrameOffset = 0x2; // 0x0
		::System::Single ElapsedTime; // 0x10
		::System::Single Duration; // 0x14
		::System::Single Deficit; // 0x18
		::System::UInt32 _flags; // 0x1C

		::System::Void _ctor(::Foundation::DefaultConstruct _)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::DefaultConstruct))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONINSTANCEDATA__CTOR_OFFSET))(this, _);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONINSTANCEDATA__CCTOR_OFFSET))();
		}

		::NPCCrowd::Animation::AnimationSubManager_PoseInertializationState get_State()
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_PoseInertializationState(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONINSTANCEDATA_GET_STATE_OFFSET))(this);
		}

		::System::Void set_State(::NPCCrowd::Animation::AnimationSubManager_PoseInertializationState value)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager_PoseInertializationState))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONINSTANCEDATA_SET_STATE_OFFSET))(this, value);
		}

		::System::Boolean get_IsFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONINSTANCEDATA_GET_ISFINISHED_OFFSET))(this);
		}

		::System::Int32 get_FrameCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONINSTANCEDATA_GET_FRAMECOUNT_OFFSET))(this);
		}

		::System::Void set_FrameCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONINSTANCEDATA_SET_FRAMECOUNT_OFFSET))(this, value);
		}

		::System::Void Deactivate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONINSTANCEDATA_DEACTIVATE_OFFSET))(this);
		}
	};
}
