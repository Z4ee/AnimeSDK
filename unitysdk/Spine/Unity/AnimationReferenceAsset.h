#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace Spine { class Animation; }
namespace Spine::Unity { class SkeletonDataAsset; }
namespace System { class String; }

#define SPINE_UNITY_ANIMATIONREFERENCEASSET_CLEAR_OFFSET UNITYSDK_OFFSET(0x183F12D0)
#define SPINE_UNITY_ANIMATIONREFERENCEASSET_GET_ANIMATION_OFFSET UNITYSDK_OFFSET(0x183F10D0)
#define SPINE_UNITY_ANIMATIONREFERENCEASSET_GET_SKELETONDATAASSET_OFFSET UNITYSDK_OFFSET(0x183F10C0)
#define SPINE_UNITY_ANIMATIONREFERENCEASSET_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x183F1100)
#define SPINE_UNITY_ANIMATIONREFERENCEASSET_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x183F17E0)
#define SPINE_UNITY_ANIMATIONREFERENCEASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x183F1820)

namespace Spine::Unity
{
	inline static constexpr unsigned int AnimationReferenceAsset_TypeDefinitionIndex = 34732;

	class AnimationReferenceAsset : public ::UnityEngine::ScriptableObject
	{
	public:
		// static const ::System::Boolean QuietSkeletonData; // 0x0
		::Spine::Unity::SkeletonDataAsset* skeletonDataAsset; // 0x18
		::System::String* animationName; // 0x20
		::Spine::Animation* animation; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ANIMATIONREFERENCEASSET__CTOR_OFFSET))(this);
		}

		::Spine::Unity::SkeletonDataAsset* get_SkeletonDataAsset()
		{
			return ((::Spine::Unity::SkeletonDataAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ANIMATIONREFERENCEASSET_GET_SKELETONDATAASSET_OFFSET))(this);
		}

		::Spine::Animation* get_Animation()
		{
			return ((::Spine::Animation*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ANIMATIONREFERENCEASSET_GET_ANIMATION_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ANIMATIONREFERENCEASSET_CLEAR_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ANIMATIONREFERENCEASSET_INITIALIZE_OFFSET))(this);
		}

		static ::Spine::Animation* op_Implicit(::Spine::Unity::AnimationReferenceAsset* asset)
		{
			return ((::Spine::Animation*(*)(::Spine::Unity::AnimationReferenceAsset*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ANIMATIONREFERENCEASSET_OP_IMPLICIT_OFFSET))(asset);
		}
	};
}
