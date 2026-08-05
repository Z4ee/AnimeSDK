#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AdjustmentBlendingTransformData_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPERBONECONTROLDATA_CLAMPANGLE_OFFSET UNITYSDK_OFFSET(0xF0D64B0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPERBONECONTROLDATA_GET_ISNOTNULL_OFFSET UNITYSDK_OFFSET(0x633BA0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPERBONECONTROLDATA_ISAPPLICABLE_OFFSET UNITYSDK_OFFSET(0x633C10)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPERBONECONTROLDATA_MAKE_OFFSET UNITYSDK_OFFSET(0xF0D6670)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPERBONECONTROLDATA_PROCESSCOMPENSATEROTATION_OFFSET UNITYSDK_OFFSET(0x633CF0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPERBONECONTROLDATA_PROCESS_OFFSET UNITYSDK_OFFSET(0x633C60)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPERBONECONTROLDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0xF0D7530)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPERBONECONTROLDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x633AD0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_AdjustmentBlendingPerBoneControlData_TypeDefinitionIndex = 88242;

	struct alignas(4) AnimationSubManager_AdjustmentBlendingPerBoneControlData
	{
		static ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingPerBoneControlData* StaticGet_Null()
		{
			return (::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingPerBoneControlData*)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_AdjustmentBlendingPerBoneControlData_TypeDefinitionIndex)->GetStaticField(0x13760);
		}
		// static const ::System::Single Epsilon; // 0x0
		// static const ::System::Single LargeEpsilon; // 0x0
		::UnityEngine::Vector3 _rotationAxis; // 0x10
		::System::Single _rotationAngle; // 0x1C
		::UnityEngine::Vector3 _translation; // 0x20
		::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingTransformData_1<::System::Single> _beginRatio; // 0x2C
		::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingTransformData_1<::System::Single> _totalRatioReciprocal; // 0x3C

		/*
		::System::Void _ctor(::UnityEngine::Quaternion deltaRotation, ::UnityEngine::Vector3 deltaTranslation, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingTransformData_1<::System::Single> beginRatio, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingTransformData_1<::System::Single> totalRatio)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingTransformData_1<::System::Single>, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingTransformData_1<::System::Single>))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPERBONECONTROLDATA__CTOR_OFFSET))(this, deltaRotation, deltaTranslation, beginRatio, totalRatio);
		}
		*/

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPERBONECONTROLDATA__CCTOR_OFFSET))();
		}

		static ::System::Void ClampAngle(::System::Single& rotationAngle, ::UnityEngine::Vector3& rotationAxis)
		{
			return ((::System::Void(*)(::System::Single&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPERBONECONTROLDATA_CLAMPANGLE_OFFSET))(rotationAngle, rotationAxis);
		}

		::System::Boolean get_IsNotNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPERBONECONTROLDATA_GET_ISNOTNULL_OFFSET))(this);
		}

		/*
		::System::Boolean IsApplicable(::UnityEngine::NapTransformData totalMeshTransform, ::System::Single threshold)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::NapTransformData, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPERBONECONTROLDATA_ISAPPLICABLE_OFFSET))(this, totalMeshTransform, threshold);
		}
		*/

		/*
		static ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingPerBoneControlData Make(::UnityEngine::NapTransformData animationMeshTransform, ::UnityEngine::NapTransformData actualMeshTransform, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingTransformData_1<::System::Single> beginRatio, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingTransformData_1<::System::Single> endRatio, ::System::Int32 loopCount)
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingPerBoneControlData(*)(::UnityEngine::NapTransformData, ::UnityEngine::NapTransformData, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingTransformData_1<::System::Single>, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingTransformData_1<::System::Single>, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPERBONECONTROLDATA_MAKE_OFFSET))(animationMeshTransform, actualMeshTransform, beginRatio, endRatio, loopCount);
		}
		*/

		/*
		::UnityEngine::NapTransformData Process(::UnityEngine::NapTransformData meshOrigin, ::UnityEngine::NapTransformData animationMeshTransform, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingTransformData_1<::System::Single> ratio)
		{
			return ((::UnityEngine::NapTransformData(*)(::PVOID, ::UnityEngine::NapTransformData, ::UnityEngine::NapTransformData, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingTransformData_1<::System::Single>))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPERBONECONTROLDATA_PROCESS_OFFSET))(this, meshOrigin, animationMeshTransform, ratio);
		}
		*/

		/*
		::UnityEngine::Quaternion ProcessCompensateRotation(::System::Single deltaRatio, ::System::Single compensateAngle)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPERBONECONTROLDATA_PROCESSCOMPENSATEROTATION_OFFSET))(this, deltaRatio, compensateAngle);
		}
		*/
	};
}
