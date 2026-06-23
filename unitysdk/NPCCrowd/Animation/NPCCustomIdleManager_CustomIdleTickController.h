#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NPCCROWD_ANIMATION_NPCCUSTOMIDLEMANAGER_CUSTOMIDLETICKCONTROLLER_SHOULDTICKLATEUPDATE_OFFSET UNITYSDK_OFFSET(0xEBDBE10)
#define NPCCROWD_ANIMATION_NPCCUSTOMIDLEMANAGER_CUSTOMIDLETICKCONTROLLER_SHOULDUNDERCLOCKING_OFFSET UNITYSDK_OFFSET(0xEBDBD30)
#define NPCCROWD_ANIMATION_NPCCUSTOMIDLEMANAGER_CUSTOMIDLETICKCONTROLLER_SHOULDUPDATETHISFRAME_OFFSET UNITYSDK_OFFSET(0xEBDBD70)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCCustomIdleManager_CustomIdleTickController_TypeDefinitionIndex = 53779;

	class NPCCustomIdleManager_CustomIdleTickController : public ::System::Object
	{
	public:
		static ::System::Single* StaticGet__lastUpdateTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NPCCustomIdleManager_CustomIdleTickController_TypeDefinitionIndex)->GetStaticField(0xE6B0);
		}
		static ::System::Boolean* StaticGet__shouldUpdateCurrentFrame()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NPCCustomIdleManager_CustomIdleTickController_TypeDefinitionIndex)->GetStaticField(0xE6B4);
		}
		// static const ::System::Single TargetTickRate; // 0x0
		// static const ::System::Single FrameTime; // 0x0

		static ::System::Boolean ShouldUnderclocking()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCUSTOMIDLEMANAGER_CUSTOMIDLETICKCONTROLLER_SHOULDUNDERCLOCKING_OFFSET))();
		}

		static ::System::Boolean ShouldUpdateThisFrame()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCUSTOMIDLEMANAGER_CUSTOMIDLETICKCONTROLLER_SHOULDUPDATETHISFRAME_OFFSET))();
		}

		static ::System::Boolean ShouldTickLateUpdate()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCUSTOMIDLEMANAGER_CUSTOMIDLETICKCONTROLLER_SHOULDTICKLATEUPDATE_OFFSET))();
		}
	};
}
