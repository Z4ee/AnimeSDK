#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_FootOnGroundSegment.h"
#include "unitysdk/Struct_2_6402D4A3EAB8BDC8.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeSlice_1.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPSETTING_GETFOOTINDEX_OFFSET UNITYSDK_OFFSET(0x72EFB0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPSETTING_GETTOEINDEX_OFFSET UNITYSDK_OFFSET(0x72EFC0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPSETTING__CCTOR_OFFSET UNITYSDK_OFFSET(0x11B25140)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_FootStepSetting_TypeDefinitionIndex = 70420;

	struct alignas(8) AnimationSubManager_FootStepSetting
	{
		static ::NPCCrowd::Animation::AnimationSubManager_FootStepSetting* StaticGet_Default()
		{
			return (::NPCCrowd::Animation::AnimationSubManager_FootStepSetting*)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_FootStepSetting_TypeDefinitionIndex)->GetStaticField(0xF690);
		}
		::System::Single BlendTime; // 0x10
		::Struct_2_6402D4A3EAB8BDC8 LeftFootIndex; // 0x14
		::Struct_2_6402D4A3EAB8BDC8 RightFootIndex; // 0x18
		::Struct_2_6402D4A3EAB8BDC8 LeftToeIndex; // 0x1C
		::Struct_2_6402D4A3EAB8BDC8 RightToeIndex; // 0x20
		::Struct_2_6402D4A3EAB8BDC8 PelvisIndex; // 0x24
		::System::Single MaxCastDistance; // 0x28
		::System::Single LegLength; // 0x2C
		::System::Single FootHeight; // 0x30
		::System::Single AnimUpStairHeight; // 0x34
		::System::Single AnimDownStairHeight; // 0x38
		::System::Single MaxIkVelocity; // 0x3C
		::System::Single MaxAngularVelocity; // 0x40
		::UnityEngine::Vector3 ToeOffset; // 0x44
		::UnityEngine::Vector3 HeelOffset; // 0x50
		::UnityEngine::LayerMask IKLayerMask; // 0x5C
		::System::Single PelvisVelocity; // 0x60
		::System::Single PelvisThreshold; // 0x64
		::System::Single PelvisStiffness; // 0x68
		::System::Single PelvisDamping; // 0x6C
		::Unity::Collections::NativeSlice_1<::System::Int32> AnimIdArray; // 0x70
		::Unity::Collections::NativeSlice_1<::System::Int32> LeftFootSegmentOffset; // 0x80
		::Unity::Collections::NativeSlice_1<::System::Int32> RightFootSegmentOffset; // 0x90
		::Unity::Collections::NativeSlice_1<::NPCCrowd::Animation::AnimationSubManager_FootOnGroundSegment> LeftFootOnGroundSegments; // 0xA0
		::Unity::Collections::NativeSlice_1<::NPCCrowd::Animation::AnimationSubManager_FootOnGroundSegment> RightFootOnGroundSegments; // 0xB0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPSETTING__CCTOR_OFFSET))();
		}

		::Struct_2_6402D4A3EAB8BDC8 GetFootIndex(::System::Int32 i)
		{
			return ((::Struct_2_6402D4A3EAB8BDC8(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPSETTING_GETFOOTINDEX_OFFSET))(this, i);
		}

		::Struct_2_6402D4A3EAB8BDC8 GetToeIndex(::System::Int32 i)
		{
			return ((::Struct_2_6402D4A3EAB8BDC8(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPSETTING_GETTOEINDEX_OFFSET))(this, i);
		}
	};
}
