#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace Spine::Unity { class AnimationData; }
namespace Spine::Unity { class SkeletonGraphic; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SPINE_UNITY_SKELETONGRAPHICCONTROLLER_ONANIMATIONCHECK_OFFSET UNITYSDK_OFFSET(0x1E653AF0)
#define SPINE_UNITY_SKELETONGRAPHICCONTROLLER_ONSKINCHECK_OFFSET UNITYSDK_OFFSET(0x1E653CE0)
#define SPINE_UNITY_SKELETONGRAPHICCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1E653D70)
#define SPINE_UNITY_SKELETONGRAPHICCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E653D90)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonGraphicController_TypeDefinitionIndex = 43842;

	class SkeletonGraphicController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::Spine::Unity::AnimationData*>* mAnimationList; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* mSkinList; // 0x20
		::Spine::Unity::SkeletonGraphic* mSkeletonGraphic; // 0x28
		::System::Int32 AnimationIndex; // 0x30
		::System::Int32 mAnimationIndex; // 0x34
		::System::Int32 mSkinIndex; // 0x38
		::System::Int32 SkinIndex; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHICCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnAnimationCheck()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHICCONTROLLER_ONANIMATIONCHECK_OFFSET))(this);
		}

		::System::Void OnSkinCheck()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHICCONTROLLER_ONSKINCHECK_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHICCONTROLLER_UPDATE_OFFSET))(this);
		}
	};
}
