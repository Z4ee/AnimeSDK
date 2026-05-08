#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace NPCCrowd::Animation { class AnimationControllerInstanceConfig; }
namespace NPCCrowd::Animation { class AnimationControllerTemplateConfig; }
namespace NPCCrowd::Animation { class ICPUAnimationLib; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_ANIMATION_ANIMATIONCONTROLLERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x11B1FC30)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationControllerData_TypeDefinitionIndex = 81013;

	class AnimationControllerData : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::NPCCrowd::Animation::AnimationControllerTemplateConfig*, ::System::Collections::Generic::List_1<::NPCCrowd::Animation::AnimationControllerInstanceConfig*>*>* logicController; // 0x58
		::System::Collections::Generic::Dictionary_2<::NPCCrowd::Animation::ICPUAnimationLib*, ::System::Collections::Generic::Dictionary_2<::NPCCrowd::Animation::AnimationControllerTemplateConfig*, ::System::Collections::Generic::List_1<::NPCCrowd::Animation::AnimationControllerInstanceConfig*>*>*>* animationController; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONCONTROLLERDATA__CTOR_OFFSET))(this);
		}
	};
}
