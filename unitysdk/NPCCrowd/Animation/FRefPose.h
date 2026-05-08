#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/Span_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/NapTransformData.h"

#define NPCCROWD_ANIMATION_FREFPOSE_GETGLOBALSPACETRANSFORM_OFFSET UNITYSDK_OFFSET(0x583920)
#define NPCCROWD_ANIMATION_FREFPOSE_GETGLOBALTRANSFORM_OFFSET UNITYSDK_OFFSET(0x584BE0)
#define NPCCROWD_ANIMATION_FREFPOSE_GETLOCALTRANSFORM_OFFSET UNITYSDK_OFFSET(0x5840D0)
#define NPCCROWD_ANIMATION_FREFPOSE_GETMESHSPACETRANSFORM_OFFSET UNITYSDK_OFFSET(0x5832C0)
#define NPCCROWD_ANIMATION_FREFPOSE_GETMESHTRANSFORM_OFFSET UNITYSDK_OFFSET(0x584290)
#define NPCCROWD_ANIMATION_FREFPOSE_GETPARENT_OFFSET UNITYSDK_OFFSET(0x583F20)
#define NPCCROWD_ANIMATION_FREFPOSE_GET_BONECOUNT_OFFSET UNITYSDK_OFFSET(0x582F90)
#define NPCCROWD_ANIMATION_FREFPOSE_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x582F70)
#define NPCCROWD_ANIMATION_FREFPOSE_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x582FB0)
#define NPCCROWD_ANIMATION_FREFPOSE_ISVALIDBONE_OFFSET UNITYSDK_OFFSET(0x584050)
#define NPCCROWD_ANIMATION_FREFPOSE_SETGLOBALTRANSFORM_OFFSET UNITYSDK_OFFSET(0x586CA0)
#define NPCCROWD_ANIMATION_FREFPOSE_SETLOCALTRANSFORM_OFFSET UNITYSDK_OFFSET(0x585B40)
#define NPCCROWD_ANIMATION_FREFPOSE_SETMESHTRANSFORM_OFFSET UNITYSDK_OFFSET(0x585C90)
#define NPCCROWD_ANIMATION_FREFPOSE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x583170)
#define NPCCROWD_ANIMATION_FREFPOSE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x583280)
#define NPCCROWD_ANIMATION_FREFPOSE__CTOR_OFFSET UNITYSDK_OFFSET(0x5830F0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int FRefPose_TypeDefinitionIndex = 72898;

	struct alignas(8) FRefPose
	{
		::System::ReadOnlySpan_1<::System::Int32> _skeletonRef; // 0x10
		::System::Span_1<::UnityEngine::NapTransformData> _poseRef; // 0x28
		::UnityEngine::NapTransformData _mesh; // 0x40

		::System::Void _ctor(::System::ReadOnlySpan_1<::System::Int32> skeletonRef, ::System::Span_1<::UnityEngine::NapTransformData> poseRef, ::UnityEngine::NapTransformData mesh)
		{
			return ((::System::Void(*)(::PVOID, ::System::ReadOnlySpan_1<::System::Int32>, ::System::Span_1<::UnityEngine::NapTransformData>, ::UnityEngine::NapTransformData))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_FREFPOSE__CTOR_OFFSET))(this, skeletonRef, poseRef, mesh);
		}

		::System::Void _ctor_1(::System::ReadOnlySpan_1<::System::Int32> skeletonRef, ::UnityEngine::NapTransformData* posePointer, ::UnityEngine::NapTransformData mesh)
		{
			return ((::System::Void(*)(::PVOID, ::System::ReadOnlySpan_1<::System::Int32>, ::UnityEngine::NapTransformData*, ::UnityEngine::NapTransformData))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_FREFPOSE__CTOR_1_OFFSET))(this, skeletonRef, posePointer, mesh);
		}

		::System::Void _ctor_2(::System::Int32 boneCount, ::System::Int32* skeletonPointer, ::UnityEngine::NapTransformData* posePointer, ::UnityEngine::NapTransformData mesh)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32*, ::UnityEngine::NapTransformData*, ::UnityEngine::NapTransformData))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_FREFPOSE__CTOR_2_OFFSET))(this, boneCount, skeletonPointer, posePointer, mesh);
		}

		::System::Boolean get_IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_FREFPOSE_GET_ISNULL_OFFSET))(this);
		}

		::System::Int32 get_BoneCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_FREFPOSE_GET_BONECOUNT_OFFSET))(this);
		}

		/*
		::UnityEngine::NapTransformData& get_Item(::Struct_2_6402D4A3EAB8BDC8 index)
		{
			return ((::UnityEngine::NapTransformData&(*)(::PVOID, ::Struct_2_6402D4A3EAB8BDC8))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_FREFPOSE_GET_ITEM_OFFSET))(this, index);
		}
		*/

		::UnityEngine::NapTransformData GetMeshSpaceTransform(::UnityEngine::NapTransformData globalTransform)
		{
			return ((::UnityEngine::NapTransformData(*)(::PVOID, ::UnityEngine::NapTransformData))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_FREFPOSE_GETMESHSPACETRANSFORM_OFFSET))(this, globalTransform);
		}

		::UnityEngine::NapTransformData GetGlobalSpaceTransform(::UnityEngine::NapTransformData meshTransform)
		{
			return ((::UnityEngine::NapTransformData(*)(::PVOID, ::UnityEngine::NapTransformData))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_FREFPOSE_GETGLOBALSPACETRANSFORM_OFFSET))(this, meshTransform);
		}

		/*
		::Struct_2_6402D4A3EAB8BDC8 GetParent(::Struct_2_6402D4A3EAB8BDC8 bone)
		{
			return ((::Struct_2_6402D4A3EAB8BDC8(*)(::PVOID, ::Struct_2_6402D4A3EAB8BDC8))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_FREFPOSE_GETPARENT_OFFSET))(this, bone);
		}
		*/

		/*
		::System::Boolean IsValidBone(::Struct_2_6402D4A3EAB8BDC8 bone)
		{
			return ((::System::Boolean(*)(::PVOID, ::Struct_2_6402D4A3EAB8BDC8))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_FREFPOSE_ISVALIDBONE_OFFSET))(this, bone);
		}
		*/

		/*
		::UnityEngine::NapTransformData GetLocalTransform(::Struct_2_6402D4A3EAB8BDC8 bone)
		{
			return ((::UnityEngine::NapTransformData(*)(::PVOID, ::Struct_2_6402D4A3EAB8BDC8))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_FREFPOSE_GETLOCALTRANSFORM_OFFSET))(this, bone);
		}
		*/

		/*
		::UnityEngine::NapTransformData GetMeshTransform(::Struct_2_6402D4A3EAB8BDC8 bone)
		{
			return ((::UnityEngine::NapTransformData(*)(::PVOID, ::Struct_2_6402D4A3EAB8BDC8))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_FREFPOSE_GETMESHTRANSFORM_OFFSET))(this, bone);
		}
		*/

		/*
		::UnityEngine::NapTransformData GetGlobalTransform(::Struct_2_6402D4A3EAB8BDC8 bone)
		{
			return ((::UnityEngine::NapTransformData(*)(::PVOID, ::Struct_2_6402D4A3EAB8BDC8))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_FREFPOSE_GETGLOBALTRANSFORM_OFFSET))(this, bone);
		}
		*/

		/*
		::System::Void SetLocalTransform(::Struct_2_6402D4A3EAB8BDC8 bone, ::UnityEngine::NapTransformData value)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_6402D4A3EAB8BDC8, ::UnityEngine::NapTransformData))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_FREFPOSE_SETLOCALTRANSFORM_OFFSET))(this, bone, value);
		}
		*/

		/*
		::System::Void SetMeshTransform(::Struct_2_6402D4A3EAB8BDC8 bone, ::UnityEngine::NapTransformData value)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_6402D4A3EAB8BDC8, ::UnityEngine::NapTransformData))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_FREFPOSE_SETMESHTRANSFORM_OFFSET))(this, bone, value);
		}
		*/

		/*
		::System::Void SetGlobalTransform(::Struct_2_6402D4A3EAB8BDC8 bone, ::UnityEngine::NapTransformData value)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_6402D4A3EAB8BDC8, ::UnityEngine::NapTransformData))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_FREFPOSE_SETGLOBALTRANSFORM_OFFSET))(this, bone, value);
		}
		*/
	};
}
