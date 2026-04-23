#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Unity/SpineAttributeBase.h"

namespace Spine { class Bone; }
namespace Spine { class BoneData; }
namespace Spine::Unity { class SkeletonDataAsset; }
namespace Spine::Unity { class SkeletonRenderer; }
namespace System { class String; }

#define SPINE_UNITY_SPINEBONE_GETBONEDATA_OFFSET UNITYSDK_OFFSET(0x19E69380)
#define SPINE_UNITY_SPINEBONE_GETBONE_OFFSET UNITYSDK_OFFSET(0x19E69340)
#define SPINE_UNITY_SPINEBONE__CTOR_OFFSET UNITYSDK_OFFSET(0x19E69320)

namespace Spine::Unity
{
	inline static constexpr unsigned int SpineBone_TypeDefinitionIndex = 40646;

	class SpineBone : public ::Spine::Unity::SpineAttributeBase
	{
	public:
		::System::Void _ctor(::System::String* startsWith, ::System::String* dataField, ::System::Boolean includeNone, ::System::Boolean fallbackToTextField)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINEBONE__CTOR_OFFSET))(this, startsWith, dataField, includeNone, fallbackToTextField);
		}

		static ::Spine::Bone* GetBone(::System::String* boneName, ::Spine::Unity::SkeletonRenderer* renderer)
		{
			return ((::Spine::Bone*(*)(::System::String*, ::Spine::Unity::SkeletonRenderer*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINEBONE_GETBONE_OFFSET))(boneName, renderer);
		}

		static ::Spine::BoneData* GetBoneData(::System::String* boneName, ::Spine::Unity::SkeletonDataAsset* skeletonDataAsset)
		{
			return ((::Spine::BoneData*(*)(::System::String*, ::Spine::Unity::SkeletonDataAsset*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINEBONE_GETBONEDATA_OFFSET))(boneName, skeletonDataAsset);
		}
	};
}
