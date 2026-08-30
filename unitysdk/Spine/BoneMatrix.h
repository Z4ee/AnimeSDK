#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Spine { class Bone; }
namespace Spine { class BoneData; }

#define SPINE_BONEMATRIX_CALCULATESETUPWORLD_OFFSET UNITYSDK_OFFSET(0x18304290)
#define SPINE_BONEMATRIX_GETINHERITEDINTERNAL_OFFSET UNITYSDK_OFFSET(0x18304340)
#define SPINE_BONEMATRIX_TRANSFORMMATRIX_OFFSET UNITYSDK_OFFSET(0x3ADD3D0)
#define SPINE_BONEMATRIX__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3ADD2C0)
#define SPINE_BONEMATRIX__CTOR_OFFSET UNITYSDK_OFFSET(0x3ADD1B0)

namespace Spine
{
	inline static constexpr unsigned int BoneMatrix_TypeDefinitionIndex = 43802;

	struct alignas(4) BoneMatrix
	{
		::System::Single a; // 0x10
		::System::Single b; // 0x14
		::System::Single c; // 0x18
		::System::Single d; // 0x1C
		::System::Single x; // 0x20
		::System::Single y; // 0x24

		::System::Void _ctor(::Spine::BoneData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::BoneData*))((::PBYTE)hIl2Cpp + SPINE_BONEMATRIX__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::Spine::Bone* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Bone*))((::PBYTE)hIl2Cpp + SPINE_BONEMATRIX__CTOR_1_OFFSET))(this, a1);
		}

		static ::Spine::BoneMatrix CalculateSetupWorld(::Spine::BoneData* a1)
		{
			return ((::Spine::BoneMatrix(*)(::Spine::BoneData*))((::PBYTE)hIl2Cpp + SPINE_BONEMATRIX_CALCULATESETUPWORLD_OFFSET))(a1);
		}

		static ::Spine::BoneMatrix GetInheritedInternal(::Spine::BoneData* a1, ::Spine::BoneMatrix a2)
		{
			return ((::Spine::BoneMatrix(*)(::Spine::BoneData*, ::Spine::BoneMatrix))((::PBYTE)hIl2Cpp + SPINE_BONEMATRIX_GETINHERITEDINTERNAL_OFFSET))(a1, a2);
		}

		::Spine::BoneMatrix TransformMatrix(::Spine::BoneMatrix a1)
		{
			return ((::Spine::BoneMatrix(*)(::PVOID, ::Spine::BoneMatrix))((::PBYTE)hIl2Cpp + SPINE_BONEMATRIX_TRANSFORMMATRIX_OFFSET))(this, a1);
		}
	};
}
