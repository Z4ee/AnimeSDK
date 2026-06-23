#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::Animation { class AnimationSubManager; }
namespace NPCCrowd::Animation { class AnimationSubManager_IAnimationProcessor; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER__CREATEPROCESSORSFROMCONFIG_D__24_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xF9AD9A0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER__CREATEPROCESSORSFROMCONFIG_D__24_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_IANIMATIONPROCESSOR__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xF9ADCE0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER__CREATEPROCESSORSFROMCONFIG_D__24_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_IANIMATIONPROCESSOR__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xF9ADC70)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER__CREATEPROCESSORSFROMCONFIG_D__24_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xF9ADD60)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER__CREATEPROCESSORSFROMCONFIG_D__24_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xF9ADCD0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER__CREATEPROCESSORSFROMCONFIG_D__24_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xF9ADC80)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER__CREATEPROCESSORSFROMCONFIG_D__24_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF9AD990)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER__CREATEPROCESSORSFROMCONFIG_D__24__CTOR_OFFSET UNITYSDK_OFFSET(0xF9AD970)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager__CreateProcessorsFromConfig_d__24_TypeDefinitionIndex = 57466;

	class AnimationSubManager__CreateProcessorsFromConfig_d__24 : public ::System::Object
	{
	public:
		::NPCCrowd::Animation::AnimationSubManager* __3__manager; // 0x10
		::NPCCrowd::Animation::AnimationSubManager_IAnimationProcessor* __2__current; // 0x18
		::NPCCrowd::Animation::AnimationSubManager* manager; // 0x20
		::System::Int32 __1__state; // 0x28
		::System::Int32 __l__initialThreadId; // 0x2C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER__CREATEPROCESSORSFROMCONFIG_D__24__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER__CREATEPROCESSORSFROMCONFIG_D__24_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER__CREATEPROCESSORSFROMCONFIG_D__24_MOVENEXT_OFFSET))(this);
		}

		::NPCCrowd::Animation::AnimationSubManager_IAnimationProcessor* System_Collections_Generic_IEnumerator_NPCCrowd_Animation_AnimationSubManager_IAnimationProcessor__get_Current()
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_IAnimationProcessor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER__CREATEPROCESSORSFROMCONFIG_D__24_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_IANIMATIONPROCESSOR__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER__CREATEPROCESSORSFROMCONFIG_D__24_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER__CREATEPROCESSORSFROMCONFIG_D__24_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::NPCCrowd::Animation::AnimationSubManager_IAnimationProcessor*>* System_Collections_Generic_IEnumerable_NPCCrowd_Animation_AnimationSubManager_IAnimationProcessor__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::NPCCrowd::Animation::AnimationSubManager_IAnimationProcessor*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER__CREATEPROCESSORSFROMCONFIG_D__24_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_IANIMATIONPROCESSOR__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER__CREATEPROCESSORSFROMCONFIG_D__24_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
