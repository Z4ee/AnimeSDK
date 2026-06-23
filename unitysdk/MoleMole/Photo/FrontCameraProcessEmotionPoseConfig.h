#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/NativeMemoryRequestHandle.h"
#include "unitysdk/MoleMole/Photo/NapAnimationJobConfig_1.h"
#include "unitysdk/PipelineCamera/SerializableHashString.h"
#include "unitysdk/Struct_2_0FFD957D5C10AA0F.h"
#include "unitysdk/Struct_2_ACD0EF80A5330786.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/Span_1.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace Foundation { class NativeMemory; }
namespace Foundation { class NativeMemoryBuilder; }
namespace MoleMole::Photo { class Skeleton; }
namespace UnityEngine { class Animator; }

#define MOLEMOLE_PHOTO_FRONTCAMERAPROCESSEMOTIONPOSECONFIG_CREATEJOBDATA_OFFSET UNITYSDK_OFFSET(0x160E6280)
#define MOLEMOLE_PHOTO_FRONTCAMERAPROCESSEMOTIONPOSECONFIG_GET_DYNAMICMEMORYCOUNT_OFFSET UNITYSDK_OFFSET(0x160E6270)
#define MOLEMOLE_PHOTO_FRONTCAMERAPROCESSEMOTIONPOSECONFIG_REQUESTMEMORY_OFFSET UNITYSDK_OFFSET(0x160E6850)
#define MOLEMOLE_PHOTO_FRONTCAMERAPROCESSEMOTIONPOSECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x160E6970)

namespace MoleMole::Photo
{
	inline static constexpr unsigned int FrontCameraProcessEmotionPoseConfig_TypeDefinitionIndex = 51182;

	class FrontCameraProcessEmotionPoseConfig : public ::MoleMole::Photo::NapAnimationJobConfig_1<::Struct_2_0FFD957D5C10AA0F>
	{
	public:
		// static const ::System::Int32 EffectorAllocIndex = 0x0; // 0x0
		// static const ::System::Int32 JointAllocIndex = 0x1; // 0x0
		// static const ::System::Int32 AllocCount = 0x2; // 0x0
		::PipelineCamera::SerializableHashString lookAtBone; // 0x10
		::PipelineCamera::SerializableHashString rightHandBone; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_FRONTCAMERAPROCESSEMOTIONPOSECONFIG__CTOR_OFFSET))(this);
		}

		::System::Int32 get_DynamicMemoryCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_FRONTCAMERAPROCESSEMOTIONPOSECONFIG_GET_DYNAMICMEMORYCOUNT_OFFSET))(this);
		}

		::Struct_2_0FFD957D5C10AA0F CreateJobData(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Animator* animator, ::Struct_2_ACD0EF80A5330786& context, ::Foundation::NativeMemory* memory, ::System::ReadOnlySpan_1<::Foundation::NativeMemoryRequestHandle> variables)
		{
			return ((::Struct_2_0FFD957D5C10AA0F(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Animator*, ::Struct_2_ACD0EF80A5330786&, ::Foundation::NativeMemory*, ::System::ReadOnlySpan_1<::Foundation::NativeMemoryRequestHandle>))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_FRONTCAMERAPROCESSEMOTIONPOSECONFIG_CREATEJOBDATA_OFFSET))(this, graph, animator, context, memory, variables);
		}

		::System::Void RequestMemory(::UnityEngine::Animator* animator, ::MoleMole::Photo::Skeleton* skeleton, ::Foundation::NativeMemoryBuilder* builder, ::System::Span_1<::Foundation::NativeMemoryRequestHandle> output)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::MoleMole::Photo::Skeleton*, ::Foundation::NativeMemoryBuilder*, ::System::Span_1<::Foundation::NativeMemoryRequestHandle>))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_FRONTCAMERAPROCESSEMOTIONPOSECONFIG_REQUESTMEMORY_OFFSET))(this, animator, skeleton, builder, output);
		}
	};
}
