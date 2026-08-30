#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/MixBlend.h"
#include "unitysdk/Spine/Unity/SkeletonMecanim_MecanimTranslator_MixMode.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/AnimatorClipInfo.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

namespace Spine { class Animation; }
namespace Spine { class Skeleton; }
namespace Spine::Unity { class SkeletonDataAsset; }
namespace Spine::Unity { class SkeletonMecanim_MecanimTranslator_ClipInfos; }
namespace Spine::Unity { class SkeletonMecanim_MecanimTranslator_OnClipAppliedDelegate; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Animator; }

#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_ADD_ONCLIPAPPLIED_OFFSET UNITYSDK_OFFSET(0x1E658180)
#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_ADD__ONCLIPAPPLIED_OFFSET UNITYSDK_OFFSET(0x1E658080)
#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_ANIMATIONTIME_OFFSET UNITYSDK_OFFSET(0x1E658A20)
#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_APPLYANIMATION_OFFSET UNITYSDK_OFFSET(0x1E658510)
#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_APPLYINTERRUPTIONANIMATION_OFFSET UNITYSDK_OFFSET(0x1E658BB0)
#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_APPLY_OFFSET UNITYSDK_OFFSET(0x1E655C30)
#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_CLEARCLIPINFOSFORLAYERS_OFFSET UNITYSDK_OFFSET(0x1E658390)
#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_GETACTIVEANIMATIONANDTIME_OFFSET UNITYSDK_OFFSET(0x1E6596C0)
#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_GETANIMATION_OFFSET UNITYSDK_OFFSET(0x1E658820)
#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_GETANIMATORCLIPINFOS_OFFSET UNITYSDK_OFFSET(0x1E6594E0)
#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_GETANIMATORSTATEINFOS_OFFSET UNITYSDK_OFFSET(0x1E659590)
#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_GETMIXMODE_OFFSET UNITYSDK_OFFSET(0x1E659660)
#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_GETSTATEUPDATESFROMANIMATOR_OFFSET UNITYSDK_OFFSET(0x1E6590B0)
#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_GET_ANIMATOR_OFFSET UNITYSDK_OFFSET(0x1E658280)
#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_GET_MECANIMLAYERCOUNT_OFFSET UNITYSDK_OFFSET(0x1E658290)
#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_GET_MECANIMLAYERNAMES_OFFSET UNITYSDK_OFFSET(0x1E6582B0)
#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_INITCLIPINFOSFORLAYERS_OFFSET UNITYSDK_OFFSET(0x1E658F40)
#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1E6557D0)
#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_ONCLIPAPPLIEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1E658AB0)
#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_REMOVE_ONCLIPAPPLIED_OFFSET UNITYSDK_OFFSET(0x1E658200)
#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_REMOVE__ONCLIPAPPLIED_OFFSET UNITYSDK_OFFSET(0x1E658100)
#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_TOSPINEANIMATIONTIME_OFFSET UNITYSDK_OFFSET(0x1E6598E0)
#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1E655600)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonMecanim_MecanimTranslator_TypeDefinitionIndex = 43844;

	class SkeletonMecanim_MecanimTranslator : public ::System::Object
	{
	public:
		// static const ::System::Single WeightEpsilon; // 0x0
		::System::Boolean autoReset; // 0x10
		::System::Boolean useCustomMixMode; // 0x11
		::Il2CppArray<::Spine::Unity::SkeletonMecanim_MecanimTranslator_MixMode>* layerMixModes; // 0x18
		::Il2CppArray<::Spine::MixBlend>* layerBlendModes; // 0x20
		::Spine::Unity::SkeletonMecanim_MecanimTranslator_OnClipAppliedDelegate* _OnClipApplied; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Spine::Animation*>* animationTable; // 0x30
		::System::Collections::Generic::Dictionary_2<::UnityEngine::AnimationClip*, ::System::Int32>* clipNameHashCodeTable; // 0x38
		::System::Collections::Generic::List_1<::Spine::Animation*>* previousAnimations; // 0x40
		::Il2CppArray<::Spine::Unity::SkeletonMecanim_MecanimTranslator_ClipInfos*>* layerClipInfos; // 0x48
		::UnityEngine::Animator* animator; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR__CTOR_OFFSET))(this);
		}

		::System::Void add__OnClipApplied(::Spine::Unity::SkeletonMecanim_MecanimTranslator_OnClipAppliedDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonMecanim_MecanimTranslator_OnClipAppliedDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_ADD__ONCLIPAPPLIED_OFFSET))(this, a1);
		}

		::System::Void remove__OnClipApplied(::Spine::Unity::SkeletonMecanim_MecanimTranslator_OnClipAppliedDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonMecanim_MecanimTranslator_OnClipAppliedDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_REMOVE__ONCLIPAPPLIED_OFFSET))(this, a1);
		}

		::System::Void add_OnClipApplied(::Spine::Unity::SkeletonMecanim_MecanimTranslator_OnClipAppliedDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonMecanim_MecanimTranslator_OnClipAppliedDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_ADD_ONCLIPAPPLIED_OFFSET))(this, a1);
		}

		::System::Void remove_OnClipApplied(::Spine::Unity::SkeletonMecanim_MecanimTranslator_OnClipAppliedDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonMecanim_MecanimTranslator_OnClipAppliedDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_REMOVE_ONCLIPAPPLIED_OFFSET))(this, a1);
		}

		::UnityEngine::Animator* get_Animator()
		{
			return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_GET_ANIMATOR_OFFSET))(this);
		}

		::System::Int32 get_MecanimLayerCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_GET_MECANIMLAYERCOUNT_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* get_MecanimLayerNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_GET_MECANIMLAYERNAMES_OFFSET))(this);
		}

		::System::Void Initialize(::UnityEngine::Animator* a1, ::Spine::Unity::SkeletonDataAsset* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::Spine::Unity::SkeletonDataAsset*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_INITIALIZE_OFFSET))(this, a1, a2);
		}

		::System::Boolean ApplyAnimation(::Spine::Skeleton* a1, ::UnityEngine::AnimatorClipInfo a2, ::UnityEngine::AnimatorStateInfo a3, ::System::Int32 a4, ::System::Single a5, ::Spine::MixBlend a6, ::System::Boolean a7)
		{
			return ((::System::Boolean(*)(::PVOID, ::Spine::Skeleton*, ::UnityEngine::AnimatorClipInfo, ::UnityEngine::AnimatorStateInfo, ::System::Int32, ::System::Single, ::Spine::MixBlend, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_APPLYANIMATION_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Boolean ApplyInterruptionAnimation(::Spine::Skeleton* a1, ::System::Boolean a2, ::UnityEngine::AnimatorClipInfo a3, ::UnityEngine::AnimatorStateInfo a4, ::System::Int32 a5, ::System::Single a6, ::Spine::MixBlend a7, ::System::Single a8, ::System::Boolean a9)
		{
			return ((::System::Boolean(*)(::PVOID, ::Spine::Skeleton*, ::System::Boolean, ::UnityEngine::AnimatorClipInfo, ::UnityEngine::AnimatorStateInfo, ::System::Int32, ::System::Single, ::Spine::MixBlend, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_APPLYINTERRUPTIONANIMATION_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Void OnClipAppliedCallback(::Spine::Animation* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3, ::System::Single a4, ::System::Boolean a5, ::System::Single a6)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Animation*, ::UnityEngine::AnimatorStateInfo, ::System::Int32, ::System::Single, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_ONCLIPAPPLIEDCALLBACK_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void Apply(::Spine::Skeleton* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skeleton*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_APPLY_OFFSET))(this, a1);
		}

		::System::Collections::Generic::KeyValuePair_2<::Spine::Animation*, ::System::Single> GetActiveAnimationAndTime(::System::Int32 a1)
		{
			return ((::System::Collections::Generic::KeyValuePair_2<::Spine::Animation*, ::System::Single>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_GETACTIVEANIMATIONANDTIME_OFFSET))(this, a1);
		}

		static ::System::Single AnimationTime(::System::Single a1, ::System::Single a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_ANIMATIONTIME_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single ToSpineAnimationTime(::System::Single a1, ::System::Single a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_TOSPINEANIMATIONTIME_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void InitClipInfosForLayers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_INITCLIPINFOSFORLAYERS_OFFSET))(this);
		}

		::System::Void ClearClipInfosForLayers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_CLEARCLIPINFOSFORLAYERS_OFFSET))(this);
		}

		::Spine::Unity::SkeletonMecanim_MecanimTranslator_MixMode GetMixMode(::System::Int32 a1, ::Spine::MixBlend a2)
		{
			return ((::Spine::Unity::SkeletonMecanim_MecanimTranslator_MixMode(*)(::PVOID, ::System::Int32, ::Spine::MixBlend))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_GETMIXMODE_OFFSET))(this, a1, a2);
		}

		::System::Void GetStateUpdatesFromAnimator(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_GETSTATEUPDATESFROMANIMATOR_OFFSET))(this, a1);
		}

		::System::Void GetAnimatorClipInfos(::System::Int32 a1, ::System::Boolean& a2, ::System::Int32& a3, ::System::Int32& a4, ::System::Int32& a5, ::System::Collections::Generic::IList_1<::UnityEngine::AnimatorClipInfo>*& a6, ::System::Collections::Generic::IList_1<::UnityEngine::AnimatorClipInfo>*& a7, ::System::Collections::Generic::IList_1<::UnityEngine::AnimatorClipInfo>*& a8, ::System::Boolean& a9)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean&, ::System::Int32&, ::System::Int32&, ::System::Int32&, ::System::Collections::Generic::IList_1<::UnityEngine::AnimatorClipInfo>*&, ::System::Collections::Generic::IList_1<::UnityEngine::AnimatorClipInfo>*&, ::System::Collections::Generic::IList_1<::UnityEngine::AnimatorClipInfo>*&, ::System::Boolean&))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_GETANIMATORCLIPINFOS_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Void GetAnimatorStateInfos(::System::Int32 a1, ::System::Boolean& a2, ::UnityEngine::AnimatorStateInfo& a3, ::UnityEngine::AnimatorStateInfo& a4, ::UnityEngine::AnimatorStateInfo& a5, ::System::Single& a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean&, ::UnityEngine::AnimatorStateInfo&, ::UnityEngine::AnimatorStateInfo&, ::UnityEngine::AnimatorStateInfo&, ::System::Single&))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_GETANIMATORSTATEINFOS_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::Spine::Animation* GetAnimation(::UnityEngine::AnimationClip* a1)
		{
			return ((::Spine::Animation*(*)(::PVOID, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_GETANIMATION_OFFSET))(this, a1);
		}
	};
}
