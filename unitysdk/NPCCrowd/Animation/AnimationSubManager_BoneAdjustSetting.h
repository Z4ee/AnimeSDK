#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_6402D4A3EAB8BDC8.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeSlice_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_BoneAdjustSetting_TypeDefinitionIndex = 57419;

	struct alignas(8) AnimationSubManager_BoneAdjustSetting
	{
		::Unity::Collections::NativeSlice_1<::Struct_2_6402D4A3EAB8BDC8> MasterBone; // 0x10
		::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3> MasterForwardBoneBindPos; // 0x20
		::Unity::Collections::NativeSlice_1<::UnityEngine::Quaternion> CoordRot; // 0x30
		::Unity::Collections::NativeSlice_1<::System::Int32> DrivenBoneCount; // 0x40
		::Unity::Collections::NativeSlice_1<::System::Int32> TargetPoseCount; // 0x50
		::System::Int32 MaxDrivenBoneCount; // 0x60
		::Unity::Collections::NativeSlice_1<::Struct_2_6402D4A3EAB8BDC8> DrivenBone; // 0x68
		::System::Int32 MaxTriangleCount; // 0x78
		::Unity::Collections::NativeSlice_1<::System::Int32> TriangleIndices; // 0x80
		::System::Int32 MaxEdgesCount; // 0x90
		::Unity::Collections::NativeSlice_1<::System::Int32> ExteriorEdges; // 0x98
		::System::Int32 MaxTargetPoseCount; // 0xA8
		::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3> DirVec; // 0xB0
		::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3> DrivenBonePosDelta; // 0xC0
		::Unity::Collections::NativeSlice_1<::UnityEngine::Quaternion> DrivenBoneRotDelta; // 0xD0
		::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3> DrivenBoneScaleDelta; // 0xE0
	};
}
