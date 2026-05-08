#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/NPCCPUAnimationGraphScriptBase.h"
#include "unitysdk/UnityEngine/Playables/DirectorUpdateMode.h"

namespace NPCCrowd::Animation { class NPCCPUAnimationPassBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }

#define NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_CORE_ADDANIMATIONPASS_OFFSET UNITYSDK_OFFSET(0xBDE4A90)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_CORE_CHECKVALID_OFFSET UNITYSDK_OFFSET(0xBDE4F70)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_CORE_DESTROY_OFFSET UNITYSDK_OFFSET(0xBDE5390)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_CORE_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBDE52F0)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_CORE_INIT_OFFSET UNITYSDK_OFFSET(0xBDE4840)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_CORE_PLAY_OFFSET UNITYSDK_OFFSET(0xBDE5220)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_CORE_REBUILD_OFFSET UNITYSDK_OFFSET(0xBDE4B40)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_CORE_SETTICKPAUSESTATE_OFFSET UNITYSDK_OFFSET(0xBDE5270)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_CORE_SORTSTABLE_OFFSET UNITYSDK_OFFSET(0xBDE4FD0)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_CORE__CCTOR_OFFSET UNITYSDK_OFFSET(0xBDE55F0)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_CORE__CTOR_OFFSET UNITYSDK_OFFSET(0xBDE5570)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_CORE___BASE_DESTROY_OFFSET UNITYSDK_OFFSET(0xBDE5630)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCCPUAnimationGraphScript_Core_TypeDefinitionIndex = 68279;

	class NPCCPUAnimationGraphScript_Core : public ::NPCCrowd::Animation::NPCCPUAnimationGraphScriptBase
	{
	public:
		static ::System::String** StaticGet__npcCpuAnimationGraphScriptFName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCCPUAnimationGraphScript_Core_TypeDefinitionIndex)->GetStaticField(0x44CA0);
		}
		::System::Collections::Generic::List_1<::NPCCrowd::Animation::NPCCPUAnimationPassBase*>* animationPasses; // 0x40
		::System::Boolean bIsPause; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_CORE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_CORE__CCTOR_OFFSET))();
		}

		::System::Void Init(::UnityEngine::Animator* inAnimator, ::UnityEngine::Playables::DirectorUpdateMode inUpdateMode)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::Playables::DirectorUpdateMode))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_CORE_INIT_OFFSET))(this, inAnimator, inUpdateMode);
		}

		::System::Void AddAnimationPass(::NPCCrowd::Animation::NPCCPUAnimationPassBase* pass, ::System::Boolean rebuild)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::NPCCPUAnimationPassBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_CORE_ADDANIMATIONPASS_OFFSET))(this, pass, rebuild);
		}

		::System::Void Rebuild()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_CORE_REBUILD_OFFSET))(this);
		}

		::System::Void Play()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_CORE_PLAY_OFFSET))(this);
		}

		::System::Boolean CheckValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_CORE_CHECKVALID_OFFSET))(this);
		}

		::System::Void SetTickPauseState(::System::Boolean pause)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_CORE_SETTICKPAUSESTATE_OFFSET))(this, pause);
		}

		::System::Void Evaluate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_CORE_EVALUATE_OFFSET))(this);
		}

		static ::System::Void SortStable(::System::Collections::Generic::List_1<::NPCCrowd::Animation::NPCCPUAnimationPassBase*>* list)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::NPCCrowd::Animation::NPCCPUAnimationPassBase*>*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_CORE_SORTSTABLE_OFFSET))(list);
		}

		::System::Void Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_CORE_DESTROY_OFFSET))(this);
		}

		::System::Void __base_Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_CORE___BASE_DESTROY_OFFSET))(this);
		}
	};
}
