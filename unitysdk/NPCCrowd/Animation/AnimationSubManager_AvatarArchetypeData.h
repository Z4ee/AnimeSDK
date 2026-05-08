#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENPCAvatarGender.h"
#include "unitysdk/ENPCAvatarSize.h"
#include "unitysdk/Foundation/BitSet256.h"
#include "unitysdk/Foundation/Container/NativeVector_1.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AdjustPelvisSetting.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AvatarAnimationCurve.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AvatarArchetypeChunkData.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AvatarSkeletonBoneIndex.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_BoneAdjustSetting.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_FootOnGroundSegment.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_FootStepSetting.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_LookAtIKSetting.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_TwoBonesIKSetting.h"
#include "unitysdk/NPCCrowd/Chunk/ChunkView2D_1.h"
#include "unitysdk/NPCCrowd/Chunk/ChunkView_1.h"
#include "unitysdk/NPCCrowd/Chunk/ReadOnlyChunkView2D_1.h"
#include "unitysdk/NPCCrowd/Chunk/ReadOnlyChunkView_1.h"
#include "unitysdk/Struct_2_4D1ACF3BA3E010AE.h"
#include "unitysdk/Struct_2_6402D4A3EAB8BDC8.h"
#include "unitysdk/Struct_2_85121BFD79A0E193.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Span_1.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NPCCrowd::Animation { class AnimationControllerInstanceConfig; }
namespace NPCCrowd::Animation { class AnimationSubManager_AnimationArchetypeData; }
namespace NPCCrowd::Animation { class NPCAnimationLib_AvatarAnimatorCache; }
namespace NPCCrowd::Animation { class NPCCPUAnimationGraphDataset; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Avatar; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_BUILDMASKLIST_OFFSET UNITYSDK_OFFSET(0xFC06B20)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_CLEARCOLLECTDATA_OFFSET UNITYSDK_OFFSET(0xFC07510)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_COLLECT_OFFSET UNITYSDK_OFFSET(0xFC07660)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xFC07BC0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GENERATEBLENDSHAPECURVEINDEX_OFFSET UNITYSDK_OFFSET(0xFC03E80)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GENERATEBONEADJUSTSETTING_OFFSET UNITYSDK_OFFSET(0xFC01D10)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GENERATEBONEINDEX_OFFSET UNITYSDK_OFFSET(0xFC02F90)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GENERATECURVEINDEX_OFFSET UNITYSDK_OFFSET(0xFC03510)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GENERATEFOOTSTEPSETTING_OFFSET UNITYSDK_OFFSET(0xFC01390)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GENERATELOOKATIKSETTING_OFFSET UNITYSDK_OFFSET(0xFC044E0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GENERATEMOTONRATIOCURVEINDEX_OFFSET UNITYSDK_OFFSET(0xFC03290)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GENERATEPELVISADJUSTSETTING_OFFSET UNITYSDK_OFFSET(0xFC01270)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GENERATETWOBONEIKSETTING_OFFSET UNITYSDK_OFFSET(0xFC00C80)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GETBLENDSHAPECURVEINDICES_OFFSET UNITYSDK_OFFSET(0xFC07400)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GETBONEINDEX_OFFSET UNITYSDK_OFFSET(0xFC07380)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GETCURVEINDEX_OFFSET UNITYSDK_OFFSET(0xFC073C0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GET_BONEADJUSTSETTING_OFFSET UNITYSDK_OFFSET(0xFC01350)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GET_BONEPARENTS_OFFSET UNITYSDK_OFFSET(0xFC01380)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GET_FOOTSTEPSETTING_OFFSET UNITYSDK_OFFSET(0xFC01330)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GET_ISCHUNKVALID_OFFSET UNITYSDK_OFFSET(0xFC07B60)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0xFC07980)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GET_LEFTFOOTIKCONFIG_OFFSET UNITYSDK_OFFSET(0xFC00EE0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GET_LEFTHANDIKCONFIG_OFFSET UNITYSDK_OFFSET(0xFC00B30)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GET_PELVISADJUSTCONFIG_OFFSET UNITYSDK_OFFSET(0xFC01180)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GET_RIGHTFOOTIKCONFIG_OFFSET UNITYSDK_OFFSET(0xFC01030)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GET_RIGHTHANDIKCONFIG_OFFSET UNITYSDK_OFFSET(0xFC00D80)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_POSTCOLLECT_OFFSET UNITYSDK_OFFSET(0xFC07700)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_REBUILDCURVEINDEX_OFFSET UNITYSDK_OFFSET(0xFC07280)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xFC04D50)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_AvatarArchetypeData_TypeDefinitionIndex = 70464;

	class AnimationSubManager_AvatarArchetypeData : public ::System::Object
	{
	public:
		// static const ::System::Int32 ChunkSizeBit = 0x4; // 0x0
		::Il2CppArray<::System::Int32>* _curveIndices; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Il2CppArray<::System::Int32>*>* _blendShapeCurveIndices; // 0x18
		::Il2CppArray<::Foundation::Container::NativeVector_1<::System::IntPtr>>* _chunkData; // 0x20
		::UnityEngine::Avatar* _avatar; // 0x28
		::Il2CppArray<::System::Int32>* _boneIndices; // 0x30
		::NPCCrowd::Animation::AnimationSubManager_FootStepSetting _footStepSetting; // 0x38
		::Foundation::Container::NativeVector_1<::System::Int32> _boneDimensions; // 0xE8
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> _drivenBoneScaleDelta; // 0xF8
		::Unity::Collections::NativeArray_1<::System::Int32> _triangleIndices; // 0x108
		::Unity::Collections::NativeArray_1<::UnityEngine::Quaternion> _coordRot; // 0x118
		::Unity::Collections::NativeArray_1<::System::Int32> _exteriorEdges; // 0x128
		::System::Int32 BlendShapeCount; // 0x138
		::ENPCAvatarGender Gender; // 0x13C
		::NPCCrowd::Animation::AnimationSubManager_BoneAdjustSetting _boneAdjustSetting; // 0x140
		::Unity::Collections::NativeArray_1<::NPCCrowd::Animation::AnimationSubManager_FootOnGroundSegment> _leftFootSegments; // 0x220
		::Unity::Collections::NativeArray_1<::Foundation::BitSet256> LayerMaskList; // 0x230
		::Unity::Collections::NativeArray_1<::Struct_2_6402D4A3EAB8BDC8> _drivenBone; // 0x240
		::Unity::Collections::NativeArray_1<::Struct_2_4D1ACF3BA3E010AE> _lookAtEyes; // 0x250
		::Foundation::Container::NativeVector_1<::System::Int32> _count; // 0x260
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> _dirVec; // 0x270
		::Unity::Collections::NativeArray_1<::System::Int32> _rightFootSegmentOffset; // 0x280
		::Foundation::Container::NativeVector_1<::System::Int32> _boneAdjustDrivenBoneDimensions; // 0x290
		::Unity::Collections::NativeArray_1<::System::Int32> _skeleton; // 0x2A0
		::Unity::Collections::NativeArray_1<::UnityEngine::Quaternion> _drivenBoneRotDelta; // 0x2B0
		::Unity::Collections::NativeArray_1<::System::Int32> _targetPoseCount; // 0x2C0
		::Unity::Collections::NativeArray_1<::Struct_2_85121BFD79A0E193> _lookAtSpines; // 0x2D0
		::Unity::Collections::NativeArray_1<::System::Int32> _leftFootSegmentOffset; // 0x2E0
		::Unity::Collections::NativeArray_1<::Struct_2_6402D4A3EAB8BDC8> _masterBone; // 0x2F0
		::Unity::Collections::NativeArray_1<::System::Int32> _animIdArray; // 0x300
		::ENPCAvatarSize Size; // 0x310
		::System::Single _maxStretchRatio; // 0x314
		::Foundation::Container::NativeVector_1<::System::Int32> _boneAdjustMasterBoneDimensions; // 0x318
		::NPCCrowd::Animation::AnimationSubManager_LookAtIKSetting LookAtIKConfig; // 0x328
		::System::Int64 VisibleCount; // 0x380
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> _masterForwardBoneBindPos; // 0x388
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> _drivenBonePosDelta; // 0x398
		::Unity::Collections::NativeArray_1<::NPCCrowd::Animation::AnimationSubManager_FootOnGroundSegment> _rightFootSegments; // 0x3A8
		::System::Int32 AvatarId; // 0x3B8
		::System::Int32 BoneAdjustMaxDrivenBoneCount; // 0x3BC
		::System::Int32 BoneAdjustMasterBoneCount; // 0x3C0
		::System::Single _startStretchRatio; // 0x3C4
		::System::Int32 BoneCount; // 0x3C8
		::Unity::Collections::NativeArray_1<::System::Int32> _drivenBoneCount; // 0x3D0
		::Foundation::Container::NativeVector_1<::System::Int32> _blendShapeDimensions; // 0x3E0

		::System::Void _ctor(::UnityEngine::Avatar* avatar, ::NPCCrowd::Animation::AnimationControllerInstanceConfig* config, ::ENPCAvatarGender gender, ::ENPCAvatarSize size)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Avatar*, ::NPCCrowd::Animation::AnimationControllerInstanceConfig*, ::ENPCAvatarGender, ::ENPCAvatarSize))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA__CTOR_OFFSET))(this, avatar, config, gender, size);
		}

		::NPCCrowd::Animation::AnimationSubManager_TwoBonesIKSetting get_LeftHandIKConfig()
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_TwoBonesIKSetting(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GET_LEFTHANDIKCONFIG_OFFSET))(this);
		}

		::NPCCrowd::Animation::AnimationSubManager_TwoBonesIKSetting get_RightHandIKConfig()
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_TwoBonesIKSetting(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GET_RIGHTHANDIKCONFIG_OFFSET))(this);
		}

		::NPCCrowd::Animation::AnimationSubManager_TwoBonesIKSetting get_LeftFootIKConfig()
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_TwoBonesIKSetting(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GET_LEFTFOOTIKCONFIG_OFFSET))(this);
		}

		::NPCCrowd::Animation::AnimationSubManager_TwoBonesIKSetting get_RightFootIKConfig()
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_TwoBonesIKSetting(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GET_RIGHTFOOTIKCONFIG_OFFSET))(this);
		}

		::NPCCrowd::Animation::AnimationSubManager_AdjustPelvisSetting get_PelvisAdjustConfig()
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_AdjustPelvisSetting(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GET_PELVISADJUSTCONFIG_OFFSET))(this);
		}

		::NPCCrowd::Animation::AnimationSubManager_FootStepSetting get_FootStepSetting()
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_FootStepSetting(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GET_FOOTSTEPSETTING_OFFSET))(this);
		}

		::NPCCrowd::Animation::AnimationSubManager_BoneAdjustSetting get_BoneAdjustSetting()
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_BoneAdjustSetting(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GET_BONEADJUSTSETTING_OFFSET))(this);
		}

		::Unity::Collections::NativeArray_1<::System::Int32> get_BoneParents()
		{
			return ((::Unity::Collections::NativeArray_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GET_BONEPARENTS_OFFSET))(this);
		}

		::NPCCrowd::Animation::AnimationSubManager_TwoBonesIKSetting GenerateTwoBoneIKSetting(::System::Int32 endBoneIndex)
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_TwoBonesIKSetting(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GENERATETWOBONEIKSETTING_OFFSET))(this, endBoneIndex);
		}

		::NPCCrowd::Animation::AnimationSubManager_AdjustPelvisSetting GeneratePelvisAdjustSetting(::System::Int32 leftFootIndex, ::System::Int32 rightFootIndex, ::System::Int32 pelvisIndex)
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_AdjustPelvisSetting(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GENERATEPELVISADJUSTSETTING_OFFSET))(this, leftFootIndex, rightFootIndex, pelvisIndex);
		}

		::NPCCrowd::Animation::AnimationSubManager_FootStepSetting GenerateFootStepSetting(::NPCCrowd::Animation::AnimationControllerInstanceConfig* config, ::Unity::Collections::NativeArray_1<::System::Int32>& animIdArray, ::Unity::Collections::NativeArray_1<::System::Int32>& leftFootSegmentOffset, ::Unity::Collections::NativeArray_1<::System::Int32>& rightFootSegmentOffset, ::Unity::Collections::NativeArray_1<::NPCCrowd::Animation::AnimationSubManager_FootOnGroundSegment>& leftFootSegments, ::Unity::Collections::NativeArray_1<::NPCCrowd::Animation::AnimationSubManager_FootOnGroundSegment>& rightFootSegments)
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_FootStepSetting(*)(::PVOID, ::NPCCrowd::Animation::AnimationControllerInstanceConfig*, ::Unity::Collections::NativeArray_1<::System::Int32>&, ::Unity::Collections::NativeArray_1<::System::Int32>&, ::Unity::Collections::NativeArray_1<::System::Int32>&, ::Unity::Collections::NativeArray_1<::NPCCrowd::Animation::AnimationSubManager_FootOnGroundSegment>&, ::Unity::Collections::NativeArray_1<::NPCCrowd::Animation::AnimationSubManager_FootOnGroundSegment>&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GENERATEFOOTSTEPSETTING_OFFSET))(this, config, animIdArray, leftFootSegmentOffset, rightFootSegmentOffset, leftFootSegments, rightFootSegments);
		}

		::NPCCrowd::Animation::AnimationSubManager_BoneAdjustSetting GenerateBoneAdjustSetting(::NPCCrowd::Animation::NPCAnimationLib_AvatarAnimatorCache* cache, ::NPCCrowd::Animation::AnimationControllerInstanceConfig* config, ::Unity::Collections::NativeArray_1<::Struct_2_6402D4A3EAB8BDC8>& masterBone, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>& masterForwardBoneBindPos, ::Unity::Collections::NativeArray_1<::UnityEngine::Quaternion>& coordRot, ::Unity::Collections::NativeArray_1<::System::Int32>& drivenBoneCount, ::Unity::Collections::NativeArray_1<::System::Int32>& targetPoseCount, ::Unity::Collections::NativeArray_1<::Struct_2_6402D4A3EAB8BDC8>& drivenBone, ::Unity::Collections::NativeArray_1<::System::Int32>& triangleIndices, ::Unity::Collections::NativeArray_1<::System::Int32>& exteriorEdges, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>& dirVecs, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>& drivenBonePosDelta, ::Unity::Collections::NativeArray_1<::UnityEngine::Quaternion>& drivenBoneRotDelta, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>& drivenBoneScaleDelta)
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_BoneAdjustSetting(*)(::PVOID, ::NPCCrowd::Animation::NPCAnimationLib_AvatarAnimatorCache*, ::NPCCrowd::Animation::AnimationControllerInstanceConfig*, ::Unity::Collections::NativeArray_1<::Struct_2_6402D4A3EAB8BDC8>&, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>&, ::Unity::Collections::NativeArray_1<::UnityEngine::Quaternion>&, ::Unity::Collections::NativeArray_1<::System::Int32>&, ::Unity::Collections::NativeArray_1<::System::Int32>&, ::Unity::Collections::NativeArray_1<::Struct_2_6402D4A3EAB8BDC8>&, ::Unity::Collections::NativeArray_1<::System::Int32>&, ::Unity::Collections::NativeArray_1<::System::Int32>&, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>&, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>&, ::Unity::Collections::NativeArray_1<::UnityEngine::Quaternion>&, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GENERATEBONEADJUSTSETTING_OFFSET))(this, cache, config, masterBone, masterForwardBoneBindPos, coordRot, drivenBoneCount, targetPoseCount, drivenBone, triangleIndices, exteriorEdges, dirVecs, drivenBonePosDelta, drivenBoneRotDelta, drivenBoneScaleDelta);
		}

		static ::Il2CppArray<::System::Int32>* GenerateBoneIndex(::NPCCrowd::Animation::NPCAnimationLib_AvatarAnimatorCache* cache, ::NPCCrowd::Animation::AnimationControllerInstanceConfig* config)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::NPCCrowd::Animation::NPCAnimationLib_AvatarAnimatorCache*, ::NPCCrowd::Animation::AnimationControllerInstanceConfig*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GENERATEBONEINDEX_OFFSET))(cache, config);
		}

		static ::System::Void GenerateMotonRatioCurveIndex(::System::Int32 index, ::System::Span_1<::System::Int32> result, ::System::String* boneName, ::NPCCrowd::Animation::NPCAnimationLib_AvatarAnimatorCache* cache)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Span_1<::System::Int32>, ::System::String*, ::NPCCrowd::Animation::NPCAnimationLib_AvatarAnimatorCache*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GENERATEMOTONRATIOCURVEINDEX_OFFSET))(index, result, boneName, cache);
		}

		static ::Il2CppArray<::System::Int32>* GenerateCurveIndex(::NPCCrowd::Animation::NPCAnimationLib_AvatarAnimatorCache* cache, ::NPCCrowd::Animation::AnimationControllerInstanceConfig* config)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::NPCCrowd::Animation::NPCAnimationLib_AvatarAnimatorCache*, ::NPCCrowd::Animation::AnimationControllerInstanceConfig*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GENERATECURVEINDEX_OFFSET))(cache, config);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Il2CppArray<::System::Int32>*>* GenerateBlendShapeCurveIndex(::NPCCrowd::Animation::NPCAnimationLib_AvatarAnimatorCache* cache, ::NPCCrowd::Animation::NPCCPUAnimationGraphDataset* config)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::Il2CppArray<::System::Int32>*>*(*)(::NPCCrowd::Animation::NPCAnimationLib_AvatarAnimatorCache*, ::NPCCrowd::Animation::NPCCPUAnimationGraphDataset*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GENERATEBLENDSHAPECURVEINDEX_OFFSET))(cache, config);
		}

		static ::NPCCrowd::Animation::AnimationSubManager_LookAtIKSetting GenerateLookAtIKSetting(::NPCCrowd::Animation::AnimationControllerInstanceConfig* config, ::NPCCrowd::Animation::NPCAnimationLib_AvatarAnimatorCache* cache, ::Unity::Collections::NativeArray_1<::Struct_2_85121BFD79A0E193>& spines, ::Unity::Collections::NativeArray_1<::Struct_2_4D1ACF3BA3E010AE>& eyes)
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_LookAtIKSetting(*)(::NPCCrowd::Animation::AnimationControllerInstanceConfig*, ::NPCCrowd::Animation::NPCAnimationLib_AvatarAnimatorCache*, ::Unity::Collections::NativeArray_1<::Struct_2_85121BFD79A0E193>&, ::Unity::Collections::NativeArray_1<::Struct_2_4D1ACF3BA3E010AE>&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GENERATELOOKATIKSETTING_OFFSET))(config, cache, spines, eyes);
		}

		::System::Void RebuildCurveIndex(::NPCCrowd::Animation::AnimationControllerInstanceConfig* config)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationControllerInstanceConfig*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_REBUILDCURVEINDEX_OFFSET))(this, config);
		}

		static ::Unity::Collections::NativeArray_1<::Foundation::BitSet256> BuildMaskList(::NPCCrowd::Animation::AnimationControllerInstanceConfig* config, ::NPCCrowd::Animation::NPCAnimationLib_AvatarAnimatorCache* cache)
		{
			return ((::Unity::Collections::NativeArray_1<::Foundation::BitSet256>(*)(::NPCCrowd::Animation::AnimationControllerInstanceConfig*, ::NPCCrowd::Animation::NPCAnimationLib_AvatarAnimatorCache*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_BUILDMASKLIST_OFFSET))(config, cache);
		}

		::System::Int32 GetBoneIndex(::NPCCrowd::Animation::AnimationSubManager_AvatarSkeletonBoneIndex boneIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager_AvatarSkeletonBoneIndex))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GETBONEINDEX_OFFSET))(this, boneIndex);
		}

		::System::Int32 GetCurveIndex(::NPCCrowd::Animation::AnimationSubManager_AvatarAnimationCurve curve)
		{
			return ((::System::Int32(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager_AvatarAnimationCurve))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GETCURVEINDEX_OFFSET))(this, curve);
		}

		::System::Boolean GetBlendShapeCurveIndices(::System::Int32 pathHash, ::Il2CppArray<::System::Int32>*& curveIds)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Int32>*&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GETBLENDSHAPECURVEINDICES_OFFSET))(this, pathHash, curveIds);
		}

		::System::Void ClearCollectData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_CLEARCOLLECTDATA_OFFSET))(this);
		}

		::System::Boolean Collect(::System::Int32 frameCount, ::NPCCrowd::Animation::AnimationSubManager_AnimationArchetypeData* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NPCCrowd::Animation::AnimationSubManager_AnimationArchetypeData*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_COLLECT_OFFSET))(this, frameCount, data);
		}

		::System::Void PostCollect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_POSTCOLLECT_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GET_ISVALID_OFFSET))(this);
		}

		::System::Boolean get_IsChunkValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GET_ISCHUNKVALID_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_DISPOSE_OFFSET))(this);
		}
	};
}
