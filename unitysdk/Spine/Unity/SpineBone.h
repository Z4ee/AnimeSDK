#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Unity/SpineAttributeBase.h"

namespace Spine { class Bone; }
namespace Spine { class BoneData; }
namespace Spine::Unity { class SkeletonDataAsset; }
namespace Spine::Unity { class SkeletonRenderer; }
namespace System { class String; }

#define SPINE_UNITY_SPINEBONE_GETBONEDATA_OFFSET UNITYSDK_OFFSET(0x1E66BB20)
#define SPINE_UNITY_SPINEBONE_GETBONE_OFFSET UNITYSDK_OFFSET(0x1E66BAE0)
#define SPINE_UNITY_SPINEBONE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E66BAC0)

namespace Spine::Unity
{
	inline static constexpr unsigned int SpineBone_TypeDefinitionIndex = 43899;

	class SpineBone : public ::Spine::Unity::SpineAttributeBase
	{
	public:
		::System::Void _ctor(::System::String* a1, ::System::String* a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINEBONE__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::Spine::Bone* GetBone(::System::String* a1, ::Spine::Unity::SkeletonRenderer* a2)
		{
			return ((::Spine::Bone*(*)(::System::String*, ::Spine::Unity::SkeletonRenderer*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINEBONE_GETBONE_OFFSET))(a1, a2);
		}

		static ::Spine::BoneData* GetBoneData(::System::String* a1, ::Spine::Unity::SkeletonDataAsset* a2)
		{
			return ((::Spine::BoneData*(*)(::System::String*, ::Spine::Unity::SkeletonDataAsset*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINEBONE_GETBONEDATA_OFFSET))(a1, a2);
		}
	};
}
