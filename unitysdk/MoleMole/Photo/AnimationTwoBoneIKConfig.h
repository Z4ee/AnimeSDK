#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/NativeMemoryRequestHandle.h"
#include "unitysdk/MoleMole/Photo/AnimationTwoBoneIKFlag.h"
#include "unitysdk/MoleMole/Photo/NapAnimationJobConfig_1.h"
#include "unitysdk/PipelineCamera/SerializableHashString.h"
#include "unitysdk/Struct_2_4CBDB11AAF13DED0.h"
#include "unitysdk/Struct_2_ACD0EF80A5330786.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/Span_1.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Foundation { class NativeMemory; }
namespace Foundation { class NativeMemoryBuilder; }
namespace MoleMole::Photo { class PlayableGraphFloatAttributeConfig; }
namespace MoleMole::Photo { class Skeleton; }
namespace UnityEngine { class Animator; }

#define MOLEMOLE_PHOTO_ANIMATIONTWOBONEIKCONFIG_CREATEJOBDATA_OFFSET UNITYSDK_OFFSET(0x13867DC0)
#define MOLEMOLE_PHOTO_ANIMATIONTWOBONEIKCONFIG_GET_DYNAMICMEMORYCOUNT_OFFSET UNITYSDK_OFFSET(0x13867DB0)
#define MOLEMOLE_PHOTO_ANIMATIONTWOBONEIKCONFIG_REQUESTMEMORY_OFFSET UNITYSDK_OFFSET(0x13868E60)
#define MOLEMOLE_PHOTO_ANIMATIONTWOBONEIKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x138692A0)

namespace MoleMole::Photo
{
	inline static constexpr unsigned int AnimationTwoBoneIKConfig_TypeDefinitionIndex = 65887;

	class AnimationTwoBoneIKConfig : public ::MoleMole::Photo::NapAnimationJobConfig_1<::Struct_2_4CBDB11AAF13DED0>
	{
	public:
		// static const ::System::Int32 WeightIndex = 0x0; // 0x0
		// static const ::System::Int32 SolverIndex = 0x1; // 0x0
		// static const ::System::Int32 EffectorIndex = 0x2; // 0x0
		// static const ::System::Int32 JointIndex = 0x3; // 0x0
		// static const ::System::Int32 Count = 0x4; // 0x0
		::PipelineCamera::SerializableHashString ikBoneName; // 0x10
		::MoleMole::Photo::AnimationTwoBoneIKFlag flag; // 0x20
		::System::Single startStretchRatio; // 0x24
		::System::Single maxStretchRatio; // 0x28
		::UnityEngine::Vector3 effectorOffset; // 0x2C
		::MoleMole::Photo::PlayableGraphFloatAttributeConfig* weight; // 0x38
		::System::Boolean allocateEffector; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_ANIMATIONTWOBONEIKCONFIG__CTOR_OFFSET))(this);
		}

		::System::Int32 get_DynamicMemoryCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_ANIMATIONTWOBONEIKCONFIG_GET_DYNAMICMEMORYCOUNT_OFFSET))(this);
		}

		::Struct_2_4CBDB11AAF13DED0 CreateJobData(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Animator* animator, ::Struct_2_ACD0EF80A5330786& context, ::Foundation::NativeMemory* memory, ::System::ReadOnlySpan_1<::Foundation::NativeMemoryRequestHandle> variables)
		{
			return ((::Struct_2_4CBDB11AAF13DED0(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Animator*, ::Struct_2_ACD0EF80A5330786&, ::Foundation::NativeMemory*, ::System::ReadOnlySpan_1<::Foundation::NativeMemoryRequestHandle>))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_ANIMATIONTWOBONEIKCONFIG_CREATEJOBDATA_OFFSET))(this, graph, animator, context, memory, variables);
		}

		::System::Void RequestMemory(::UnityEngine::Animator* animator, ::MoleMole::Photo::Skeleton* skeleton, ::Foundation::NativeMemoryBuilder* builder, ::System::Span_1<::Foundation::NativeMemoryRequestHandle> output)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::MoleMole::Photo::Skeleton*, ::Foundation::NativeMemoryBuilder*, ::System::Span_1<::Foundation::NativeMemoryRequestHandle>))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_ANIMATIONTWOBONEIKCONFIG_REQUESTMEMORY_OFFSET))(this, animator, skeleton, builder, output);
		}
	};
}
