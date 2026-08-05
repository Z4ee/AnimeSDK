#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/NativeMemoryRequestHandle.h"
#include "unitysdk/MoleMole/Photo/NapAnimationJobConfig_1.h"
#include "unitysdk/Struct_2_ACD0EF80A5330786.h"
#include "unitysdk/Struct_2_BF5775DA40138049.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/Span_1.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace Foundation { class NativeMemory; }
namespace Foundation { class NativeMemoryBuilder; }
namespace MoleMole::Photo { class Skeleton; }
namespace System { class String; }
namespace UnityEngine { class Animator; }

#define MOLEMOLE_PHOTO_ANIMATIONUSECACHEDPOSECONFIG_CREATEJOBDATA_OFFSET UNITYSDK_OFFSET(0x168867C0)
#define MOLEMOLE_PHOTO_ANIMATIONUSECACHEDPOSECONFIG_GET_DYNAMICMEMORYCOUNT_OFFSET UNITYSDK_OFFSET(0x16886770)
#define MOLEMOLE_PHOTO_ANIMATIONUSECACHEDPOSECONFIG_REQUESTMEMORY_OFFSET UNITYSDK_OFFSET(0x16886FA0)
#define MOLEMOLE_PHOTO_ANIMATIONUSECACHEDPOSECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16887290)

namespace MoleMole::Photo
{
	inline static constexpr unsigned int AnimationUseCachedPoseConfig_TypeDefinitionIndex = 42913;

	class AnimationUseCachedPoseConfig : public ::MoleMole::Photo::NapAnimationJobConfig_1<::Struct_2_BF5775DA40138049>
	{
	public:
		::System::String* cachedPoseName; // 0x10
		::System::Boolean useExternalPose; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_ANIMATIONUSECACHEDPOSECONFIG__CTOR_OFFSET))(this);
		}

		::System::Int32 get_DynamicMemoryCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_ANIMATIONUSECACHEDPOSECONFIG_GET_DYNAMICMEMORYCOUNT_OFFSET))(this);
		}

		::Struct_2_BF5775DA40138049 CreateJobData(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Animator* animator, ::Struct_2_ACD0EF80A5330786& context, ::Foundation::NativeMemory* memory, ::System::ReadOnlySpan_1<::Foundation::NativeMemoryRequestHandle> variables)
		{
			return ((::Struct_2_BF5775DA40138049(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Animator*, ::Struct_2_ACD0EF80A5330786&, ::Foundation::NativeMemory*, ::System::ReadOnlySpan_1<::Foundation::NativeMemoryRequestHandle>))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_ANIMATIONUSECACHEDPOSECONFIG_CREATEJOBDATA_OFFSET))(this, graph, animator, context, memory, variables);
		}

		::System::Void RequestMemory(::UnityEngine::Animator* animator, ::MoleMole::Photo::Skeleton* skeleton, ::Foundation::NativeMemoryBuilder* builder, ::System::Span_1<::Foundation::NativeMemoryRequestHandle> output)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::MoleMole::Photo::Skeleton*, ::Foundation::NativeMemoryBuilder*, ::System::Span_1<::Foundation::NativeMemoryRequestHandle>))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_ANIMATIONUSECACHEDPOSECONFIG_REQUESTMEMORY_OFFSET))(this, animator, skeleton, builder, output);
		}
	};
}
