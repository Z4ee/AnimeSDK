#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/NativeMemoryRequestHandle.h"
#include "unitysdk/Foundation/NativeVariableArray_1.h"
#include "unitysdk/MoleMole/Photo/AnimationBlendPosePerBoneFlag.h"
#include "unitysdk/MoleMole/Photo/NapAnimationJobConfig_1.h"
#include "unitysdk/Struct_2_996A8643ED0D59AD.h"
#include "unitysdk/Struct_2_ACD0EF80A5330786.h"
#include "unitysdk/Struct_2_D0A3658446FCD9A2.h"
#include "unitysdk/Struct_2_F0CFA50094D8FF32.h"
#include "unitysdk/Struct_2_F780BA94AF5E7E37_1.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/Span_1.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace Foundation { class NativeMemory; }
namespace Foundation { class NativeMemoryBuilder; }
namespace MoleMole::Photo { class BlendPosePerBonePoseSetting; }
namespace MoleMole::Photo { class Skeleton; }
namespace UnityEngine { class Animator; }

#define MOLEMOLE_PHOTO_ANIMATIONBLENDPOSEPERBONECONFIG_CREATEJOBDATA_OFFSET UNITYSDK_OFFSET(0x12365980)
#define MOLEMOLE_PHOTO_ANIMATIONBLENDPOSEPERBONECONFIG_GET_DYNAMICMEMORYCOUNT_OFFSET UNITYSDK_OFFSET(0x12366800)
#define MOLEMOLE_PHOTO_ANIMATIONBLENDPOSEPERBONECONFIG_INITIALIZEWEIGHT_OFFSET UNITYSDK_OFFSET(0x12366B20)
#define MOLEMOLE_PHOTO_ANIMATIONBLENDPOSEPERBONECONFIG_REQUESTMEMORY_OFFSET UNITYSDK_OFFSET(0x12366810)
#define MOLEMOLE_PHOTO_ANIMATIONBLENDPOSEPERBONECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x123672A0)

namespace MoleMole::Photo
{
	inline static constexpr unsigned int AnimationBlendPosePerBoneConfig_TypeDefinitionIndex = 55563;

	class AnimationBlendPosePerBoneConfig : public ::MoleMole::Photo::NapAnimationJobConfig_1<::Struct_2_996A8643ED0D59AD>
	{
	public:
		::Il2CppArray<::MoleMole::Photo::BlendPosePerBonePoseSetting*>* blendPose; // 0x10
		::MoleMole::Photo::AnimationBlendPosePerBoneFlag blendFlag; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_ANIMATIONBLENDPOSEPERBONECONFIG__CTOR_OFFSET))(this);
		}

		::Struct_2_996A8643ED0D59AD CreateJobData(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Animator* animator, ::Struct_2_ACD0EF80A5330786& context, ::Foundation::NativeMemory* memory, ::System::ReadOnlySpan_1<::Foundation::NativeMemoryRequestHandle> variables)
		{
			return ((::Struct_2_996A8643ED0D59AD(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Animator*, ::Struct_2_ACD0EF80A5330786&, ::Foundation::NativeMemory*, ::System::ReadOnlySpan_1<::Foundation::NativeMemoryRequestHandle>))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_ANIMATIONBLENDPOSEPERBONECONFIG_CREATEJOBDATA_OFFSET))(this, graph, animator, context, memory, variables);
		}

		::System::Int32 get_DynamicMemoryCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_ANIMATIONBLENDPOSEPERBONECONFIG_GET_DYNAMICMEMORYCOUNT_OFFSET))(this);
		}

		::System::Void RequestMemory(::UnityEngine::Animator* animator, ::MoleMole::Photo::Skeleton* skeleton, ::Foundation::NativeMemoryBuilder* builder, ::System::Span_1<::Foundation::NativeMemoryRequestHandle> output)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::MoleMole::Photo::Skeleton*, ::Foundation::NativeMemoryBuilder*, ::System::Span_1<::Foundation::NativeMemoryRequestHandle>))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_ANIMATIONBLENDPOSEPERBONECONFIG_REQUESTMEMORY_OFFSET))(this, animator, skeleton, builder, output);
		}

		::System::Void InitializeWeight(::Foundation::NativeVariableArray_1<::Struct_2_F780BA94AF5E7E37_1> boneWeights, ::Foundation::NativeVariableArray_1<::Struct_2_D0A3658446FCD9A2> poseWeights, ::Struct_2_F0CFA50094D8FF32 skeleton, ::UnityEngine::Animator* animator)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::NativeVariableArray_1<::Struct_2_F780BA94AF5E7E37_1>, ::Foundation::NativeVariableArray_1<::Struct_2_D0A3658446FCD9A2>, ::Struct_2_F0CFA50094D8FF32, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_ANIMATIONBLENDPOSEPERBONECONFIG_INITIALIZEWEIGHT_OFFSET))(this, boneWeights, poseWeights, skeleton, animator);
		}
	};
}
