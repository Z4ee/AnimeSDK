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
#include "unitysdk/NPCCrowd/Animation/ENPCAnimationAvatarMaskType.h"
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
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Avatar; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_BUILDBLENDSHAPEMASKDATA_OFFSET UNITYSDK_OFFSET(0xFFB9120)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_BUILDBLENDSHAPENAMETOINDICES_OFFSET UNITYSDK_OFFSET(0xFFB93C0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_BUILDMASKLIST_OFFSET UNITYSDK_OFFSET(0xFFB8890)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_CLEARCOLLECTDATA_OFFSET UNITYSDK_OFFSET(0xFFB9F50)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_COLLECT_OFFSET UNITYSDK_OFFSET(0xFFBA0A0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xFFBA600)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_FILLBLENDSHAPEMASKSLICE_OFFSET UNITYSDK_OFFSET(0xFFB97E0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GENERATEBLENDSHAPECURVEINDEX_OFFSET UNITYSDK_OFFSET(0xFFB5BC0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GENERATEBONEADJUSTSETTING_OFFSET UNITYSDK_OFFSET(0xFFB3A50)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GENERATEBONEINDEX_OFFSET UNITYSDK_OFFSET(0xFFB4CD0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GENERATECURVEINDEX_OFFSET UNITYSDK_OFFSET(0xFFB5250)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GENERATEFOOTSTEPSETTING_OFFSET UNITYSDK_OFFSET(0xFFB30D0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GENERATELOOKATIKSETTING_OFFSET UNITYSDK_OFFSET(0xFFB6250)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GENERATEMOTONRATIOCURVEINDEX_OFFSET UNITYSDK_OFFSET(0xFFB4FD0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GENERATEPELVISADJUSTSETTING_OFFSET UNITYSDK_OFFSET(0xFFB2FA0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GENERATETWOBONEIKSETTING_OFFSET UNITYSDK_OFFSET(0xFFB29B0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GETBLENDSHAPECURVEINDICES_OFFSET UNITYSDK_OFFSET(0xFFB9E40)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GETBONEINDEX_OFFSET UNITYSDK_OFFSET(0xFFB9DC0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GETCURVEINDEX_OFFSET UNITYSDK_OFFSET(0xFFB9E00)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GET_BONEADJUSTSETTING_OFFSET UNITYSDK_OFFSET(0xFFB3090)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GET_BONEPARENTS_OFFSET UNITYSDK_OFFSET(0xFFB30C0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GET_CHUNKCOUNT_OFFSET UNITYSDK_OFFSET(0xFFB2800)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GET_FOOTSTEPSETTING_OFFSET UNITYSDK_OFFSET(0xFFB3060)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GET_ISCHUNKVALID_OFFSET UNITYSDK_OFFSET(0xFFBA5A0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0xFFBA3C0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GET_LEFTFOOTIKCONFIG_OFFSET UNITYSDK_OFFSET(0xFFB2C10)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GET_LEFTHANDIKCONFIG_OFFSET UNITYSDK_OFFSET(0xFFB2860)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GET_PELVISADJUSTCONFIG_OFFSET UNITYSDK_OFFSET(0xFFB2EB0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GET_RIGHTFOOTIKCONFIG_OFFSET UNITYSDK_OFFSET(0xFFB2D60)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GET_RIGHTHANDIKCONFIG_OFFSET UNITYSDK_OFFSET(0xFFB2AB0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_POSTCOLLECT_OFFSET UNITYSDK_OFFSET(0xFFBA140)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_REBUILDCURVEINDEX_OFFSET UNITYSDK_OFFSET(0xFFB9000)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xFFB6AC0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_AvatarArchetypeData_TypeDefinitionIndex = 57344;

	class AnimationSubManager_AvatarArchetypeData : public ::System::Object
	{
	public:
		// static const ::System::Int32 ChunkSizeBit = 0x4; // 0x0
		::UnityEngine::Avatar* _avatar; // 0x10
		::Il2CppArray<::Foundation::Container::NativeVector_1<::System::IntPtr>>* _chunkData; // 0x18
		::Il2CppArray<::System::Int32>* _curveIndices; // 0x20
		::Il2CppArray<::System::Int32>* _boneIndices; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Il2CppArray<::System::Int32>*>* _blendShapeCurveIndices; // 0x30
		::NPCCrowd::Animation::AnimationSubManager_LookAtIKSetting LookAtIKConfig; // 0x38
		::Unity::Collections::NativeArray_1<::System::Int32> _animIdArray; // 0x90
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> _dirVec; // 0xA0
		::Foundation::Container::NativeVector_1<::System::Int32> _count; // 0xB0
		::Unity::Collections::NativeArray_1<::System::Int32> _exteriorEdges; // 0xC0
		::Foundation::Container::NativeVector_1<::System::Int32> _blendShapeDimensions; // 0xD0
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> _masterForwardBoneBindPos; // 0xE0
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> _drivenBonePosDelta; // 0xF0
		::Unity::Collections::NativeArray_1<::System::Int32> _triangleIndices; // 0x100
		::System::Int32 BoneAdjustMasterBoneCount; // 0x110
		::System::Int32 BoneAdjustMaxDrivenBoneCount; // 0x114
		::Unity::Collections::NativeArray_1<::System::Int32> _targetPoseCount; // 0x118
		::Unity::Collections::NativeArray_1<::NPCCrowd::Animation::AnimationSubManager_FootOnGroundSegment> _rightFootSegments; // 0x128
		::Unity::Collections::NativeArray_1<::Struct_2_85121BFD79A0E193> _lookAtSpines; // 0x138
		::Foundation::Container::NativeVector_1<::System::Int32> _boneDimensions; // 0x148
		::System::Int32 AvatarId; // 0x158
		::ENPCAvatarSize Size; // 0x15C
		::Unity::Collections::NativeArray_1<::UnityEngine::Quaternion> _drivenBoneRotDelta; // 0x160
		::Unity::Collections::NativeArray_1<::Struct_2_6402D4A3EAB8BDC8> _masterBone; // 0x170
		::Unity::Collections::NativeArray_1<::Struct_2_4D1ACF3BA3E010AE> _lookAtEyes; // 0x180
		::System::Int64 VisibleCount; // 0x190
		::Unity::Collections::NativeArray_1<::Foundation::BitSet256> LayerMaskList; // 0x198
		::Unity::Collections::NativeArray_1<::System::Int32> _leftFootSegmentOffset; // 0x1A8
		::System::Int32 BlendShapeCount; // 0x1B8
		::System::Boolean HasStateMachineArchetype; // 0x1BC
		::Unity::Collections::NativeArray_1<::System::Byte> BlendShapeMaskValues; // 0x1C0
		::ENPCAvatarGender Gender; // 0x1D0
		::System::Single _startStretchRatio; // 0x1D4
		::Unity::Collections::NativeArray_1<::System::Byte> BlendShapeMaskFullFlags; // 0x1D8
		::Unity::Collections::NativeArray_1<::System::Int32> _drivenBoneCount; // 0x1E8
		::Unity::Collections::NativeArray_1<::NPCCrowd::Animation::AnimationSubManager_FootOnGroundSegment> _leftFootSegments; // 0x1F8
		::Unity::Collections::NativeArray_1<::UnityEngine::Quaternion> _coordRot; // 0x208
		::Foundation::Container::NativeVector_1<::System::Int32> _boneAdjustDrivenBoneDimensions; // 0x218
		::NPCCrowd::Animation::AnimationSubManager_BoneAdjustSetting _boneAdjustSetting; // 0x228
		::System::Single _maxStretchRatio; // 0x308
		::System::Int32 BoneCount; // 0x30C
		::Unity::Collections::NativeArray_1<::Struct_2_6402D4A3EAB8BDC8> _drivenBone; // 0x310
		::NPCCrowd::Animation::AnimationSubManager_FootStepSetting _footStepSetting; // 0x320
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> _drivenBoneScaleDelta; // 0x3D0
		::Foundation::Container::NativeVector_1<::System::Int32> _boneAdjustMasterBoneDimensions; // 0x3E0
		::Unity::Collections::NativeArray_1<::System::Int32> _rightFootSegmentOffset; // 0x3F0
		::Unity::Collections::NativeArray_1<::System::Int32> _skeleton; // 0x400

		::System::Void _ctor(::UnityEngine::Avatar* avatar, ::NPCCrowd::Animation::AnimationControllerInstanceConfig* config, ::ENPCAvatarGender gender, ::ENPCAvatarSize size)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Avatar*, ::NPCCrowd::Animation::AnimationControllerInstanceConfig*, ::ENPCAvatarGender, ::ENPCAvatarSize))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA__CTOR_OFFSET))(this, avatar, config, gender, size);
		}

		::System::Int32 get_ChunkCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GET_CHUNKCOUNT_OFFSET))(this);
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

		::System::Void BuildBlendShapeMaskData(::NPCCrowd::Animation::NPCCPUAnimationGraphDataset* dataset)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::NPCCPUAnimationGraphDataset*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_BUILDBLENDSHAPEMASKDATA_OFFSET))(this, dataset);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Int32>*>* BuildBlendShapeNameToIndices(::NPCCrowd::Animation::NPCCPUAnimationGraphDataset* dataset)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Int32>*>*(*)(::NPCCrowd::Animation::NPCCPUAnimationGraphDataset*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_BUILDBLENDSHAPENAMETOINDICES_OFFSET))(dataset);
		}

		static ::System::Boolean FillBlendShapeMaskSlice(::NPCCrowd::Animation::NPCCPUAnimationGraphDataset* dataset, ::NPCCrowd::Animation::ENPCAnimationAvatarMaskType maskType, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Int32>*>* nameToIndices, ::Unity::Collections::NativeArray_1<::System::Byte> maskValues, ::System::Int32 offset, ::System::Int32 blendShapeCount)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Animation::NPCCPUAnimationGraphDataset*, ::NPCCrowd::Animation::ENPCAnimationAvatarMaskType, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Int32>*>*, ::Unity::Collections::NativeArray_1<::System::Byte>, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_FILLBLENDSHAPEMASKSLICE_OFFSET))(dataset, maskType, nameToIndices, maskValues, offset, blendShapeCount);
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
