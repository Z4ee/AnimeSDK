#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/AnimationPassEvent.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

#define NPCCROWD_ANIMATION_NPCCPUANIMATIONPASSBASE_CHECKVALID_OFFSET UNITYSDK_OFFSET(0x10C9B8B0)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONPASSBASE_CONNECT_OFFSET UNITYSDK_OFFSET(0x10C9B500)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONPASSBASE_DESTROY_OFFSET UNITYSDK_OFFSET(0x10C9B870)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONPASSBASE_DISCONNECT_OFFSET UNITYSDK_OFFSET(0x10C9B5F0)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONPASSBASE_GETOUTPUTPLAYABLE_OFFSET UNITYSDK_OFFSET(0x10C9B4A0)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONPASSBASE_INIT_OFFSET UNITYSDK_OFFSET(0x10C9B7F0)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONPASSBASE_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x10C9B780)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONPASSBASE_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x10C9B710)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONPASSBASE_RESET_OFFSET UNITYSDK_OFFSET(0x10C9B830)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONPASSBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x10C9B950)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCCPUAnimationPassBase_TypeDefinitionIndex = 61366;

	class NPCCPUAnimationPassBase : public ::System::Object
	{
	public:
		::UnityEngine::Playables::Playable inputPlayable; // 0x10
		::UnityEngine::Playables::Playable outputPlayable; // 0x20
		::NPCCrowd::Animation::AnimationPassEvent animationPassEvent; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONPASSBASE__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable GetOutputPlayable()
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONPASSBASE_GETOUTPUTPLAYABLE_OFFSET))(this);
		}

		::System::Boolean Connect(::UnityEngine::Playables::Playable input)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONPASSBASE_CONNECT_OFFSET))(this, input);
		}

		::System::Boolean DisConnect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONPASSBASE_DISCONNECT_OFFSET))(this);
		}

		static ::System::Boolean op_LessThan(::NPCCrowd::Animation::NPCCPUAnimationPassBase* lhs, ::NPCCrowd::Animation::NPCCPUAnimationPassBase* rhs)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Animation::NPCCPUAnimationPassBase*, ::NPCCrowd::Animation::NPCCPUAnimationPassBase*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONPASSBASE_OP_LESSTHAN_OFFSET))(lhs, rhs);
		}

		static ::System::Boolean op_GreaterThan(::NPCCrowd::Animation::NPCCPUAnimationPassBase* lhs, ::NPCCrowd::Animation::NPCCPUAnimationPassBase* rhs)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Animation::NPCCPUAnimationPassBase*, ::NPCCrowd::Animation::NPCCPUAnimationPassBase*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONPASSBASE_OP_GREATERTHAN_OFFSET))(lhs, rhs);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONPASSBASE_INIT_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONPASSBASE_RESET_OFFSET))(this);
		}

		::System::Void Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONPASSBASE_DESTROY_OFFSET))(this);
		}

		::System::Boolean CheckValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONPASSBASE_CHECKVALID_OFFSET))(this);
		}
	};
}
