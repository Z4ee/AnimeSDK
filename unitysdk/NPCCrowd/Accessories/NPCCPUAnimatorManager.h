#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/NPCCrowdModuleManagerBase.h"

namespace NPCCrowd::Animation { class NPCCPUAnimationGraphDataset; }
namespace NPCCrowd::Animation { class NPCCPUAnimator; }
namespace NPCCrowd::Avatar { class NPCAvatarGOReference; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_ACCESSORIES_NPCCPUANIMATORMANAGER_CREATECPUANIMATOR_OFFSET UNITYSDK_OFFSET(0xCD326B0)
#define NPCCROWD_ACCESSORIES_NPCCPUANIMATORMANAGER_GET_OFFSET UNITYSDK_OFFSET(0xCD323E0)
#define NPCCROWD_ACCESSORIES_NPCCPUANIMATORMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0xCD32560)
#define NPCCROWD_ACCESSORIES_NPCCPUANIMATORMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xCD32AB0)
#define NPCCROWD_ACCESSORIES_NPCCPUANIMATORMANAGER_RELEASEUNIONANIMATOR_OFFSET UNITYSDK_OFFSET(0xCD328A0)
#define NPCCROWD_ACCESSORIES_NPCCPUANIMATORMANAGER_SHOULDTICK_OFFSET UNITYSDK_OFFSET(0xCD32610)
#define NPCCROWD_ACCESSORIES_NPCCPUANIMATORMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0xCD32940)
#define NPCCROWD_ACCESSORIES_NPCCPUANIMATORMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xCD32C30)
#define NPCCROWD_ACCESSORIES_NPCCPUANIMATORMANAGER___BASE_INIT_OFFSET UNITYSDK_OFFSET(0xCD32C50)
#define NPCCROWD_ACCESSORIES_NPCCPUANIMATORMANAGER___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xCD32CD0)
#define NPCCROWD_ACCESSORIES_NPCCPUANIMATORMANAGER___BASE_SHOULDTICK_OFFSET UNITYSDK_OFFSET(0xCD32D50)
#define NPCCROWD_ACCESSORIES_NPCCPUANIMATORMANAGER___BASE_UPDATE_OFFSET UNITYSDK_OFFSET(0xCD32DD0)

namespace NPCCrowd::Accessories
{
	inline static constexpr unsigned int NPCCPUAnimatorManager_TypeDefinitionIndex = 56732;

	class NPCCPUAnimatorManager : public ::NPCCrowd::NPCCrowdModuleManagerBase
	{
	public:
		::System::Collections::Generic::List_1<::NPCCrowd::Animation::NPCCPUAnimator*>* animators; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCCPUANIMATORMANAGER__CTOR_OFFSET))(this);
		}

		static ::NPCCrowd::Accessories::NPCCPUAnimatorManager* Get()
		{
			return ((::NPCCrowd::Accessories::NPCCPUAnimatorManager*(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCCPUANIMATORMANAGER_GET_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCCPUANIMATORMANAGER_INIT_OFFSET))(this);
		}

		::System::Boolean ShouldTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCCPUANIMATORMANAGER_SHOULDTICK_OFFSET))(this);
		}

		::NPCCrowd::Animation::NPCCPUAnimator* CreateCPUAnimator(::NPCCrowd::Avatar::NPCAvatarGOReference* go, ::NPCCrowd::Animation::NPCCPUAnimationGraphDataset* graphData, ::System::Boolean useAnimatorPass)
		{
			return ((::NPCCrowd::Animation::NPCCPUAnimator*(*)(::PVOID, ::NPCCrowd::Avatar::NPCAvatarGOReference*, ::NPCCrowd::Animation::NPCCPUAnimationGraphDataset*, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCCPUANIMATORMANAGER_CREATECPUANIMATOR_OFFSET))(this, go, graphData, useAnimatorPass);
		}

		::System::Void ReleaseUnionAnimator(::NPCCrowd::Animation::NPCCPUAnimator* animator)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::NPCCPUAnimator*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCCPUANIMATORMANAGER_RELEASEUNIONANIMATOR_OFFSET))(this, animator);
		}

		::System::Void Update(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCCPUANIMATORMANAGER_UPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCCPUANIMATORMANAGER_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCCPUANIMATORMANAGER___BASE_INIT_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCCPUANIMATORMANAGER___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Boolean __base_ShouldTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCCPUANIMATORMANAGER___BASE_SHOULDTICK_OFFSET))(this);
		}

		::System::Void __base_Update(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCCPUANIMATORMANAGER___BASE_UPDATE_OFFSET))(this, P0);
		}
	};
}
