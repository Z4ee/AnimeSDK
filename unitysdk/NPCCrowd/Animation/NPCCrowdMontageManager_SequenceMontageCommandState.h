#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/NPCCrowdMontageManager_SequenceLayerClipState.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_SEQUENCEMONTAGECOMMANDSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0xFFCB620)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCCrowdMontageManager_SequenceMontageCommandState_TypeDefinitionIndex = 65139;

	class NPCCrowdMontageManager_SequenceMontageCommandState : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::NPCCrowd::Animation::NPCCrowdMontageManager_SequenceLayerClipState>* layerStates; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_SEQUENCEMONTAGECOMMANDSTATE__CTOR_OFFSET))(this);
		}
	};
}
