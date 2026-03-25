#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Spine { class Bone; }
namespace Spine { class BoneData; }

#define SPINE_BONEMATRIX_CALCULATESETUPWORLD_OFFSET UNITYSDK_OFFSET(0x183EFF60)
#define SPINE_BONEMATRIX_GETINHERITEDINTERNAL_OFFSET UNITYSDK_OFFSET(0x183F0010)
#define SPINE_BONEMATRIX_TRANSFORMMATRIX_OFFSET UNITYSDK_OFFSET(0x20FB210)
#define SPINE_BONEMATRIX__CTOR_1_OFFSET UNITYSDK_OFFSET(0x20FB110)
#define SPINE_BONEMATRIX__CTOR_OFFSET UNITYSDK_OFFSET(0x20FB000)

namespace Spine
{
	inline static constexpr unsigned int BoneMatrix_TypeDefinitionIndex = 34730;

	struct alignas(4) BoneMatrix
	{
		::System::Single a; // 0x10
		::System::Single b; // 0x14
		::System::Single c; // 0x18
		::System::Single d; // 0x1C
		::System::Single x; // 0x20
		::System::Single y; // 0x24

		::System::Void _ctor(::Spine::BoneData* boneData)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::BoneData*))((::PBYTE)hIl2Cpp + SPINE_BONEMATRIX__CTOR_OFFSET))(this, boneData);
		}

		::System::Void _ctor_1(::Spine::Bone* bone)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Bone*))((::PBYTE)hIl2Cpp + SPINE_BONEMATRIX__CTOR_1_OFFSET))(this, bone);
		}

		static ::Spine::BoneMatrix CalculateSetupWorld(::Spine::BoneData* boneData)
		{
			return ((::Spine::BoneMatrix(*)(::Spine::BoneData*))((::PBYTE)hIl2Cpp + SPINE_BONEMATRIX_CALCULATESETUPWORLD_OFFSET))(boneData);
		}

		static ::Spine::BoneMatrix GetInheritedInternal(::Spine::BoneData* boneData, ::Spine::BoneMatrix parentMatrix)
		{
			return ((::Spine::BoneMatrix(*)(::Spine::BoneData*, ::Spine::BoneMatrix))((::PBYTE)hIl2Cpp + SPINE_BONEMATRIX_GETINHERITEDINTERNAL_OFFSET))(boneData, parentMatrix);
		}

		::Spine::BoneMatrix TransformMatrix(::Spine::BoneMatrix local)
		{
			return ((::Spine::BoneMatrix(*)(::PVOID, ::Spine::BoneMatrix))((::PBYTE)hIl2Cpp + SPINE_BONEMATRIX_TRANSFORMMATRIX_OFFSET))(this, local);
		}
	};
}
