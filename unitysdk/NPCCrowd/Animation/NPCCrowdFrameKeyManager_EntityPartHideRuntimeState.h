#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/NPCCrowdFrameKeyManager_HiddenPartVisibilitySnapshot.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_ENTITYPARTHIDERUNTIMESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0xF613DA0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCCrowdFrameKeyManager_EntityPartHideRuntimeState_TypeDefinitionIndex = 56703;

	class NPCCrowdFrameKeyManager_EntityPartHideRuntimeState : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::NPCCrowd::Animation::NPCCrowdFrameKeyManager_HiddenPartVisibilitySnapshot>* hiddenPartSnapshots; // 0x10
		::System::Boolean hiddenApplied; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_ENTITYPARTHIDERUNTIMESTATE__CTOR_OFFSET))(this);
		}
	};
}
