#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/NativeMemoryRequestHandle.h"
#include "unitysdk/MoleMole/Photo/NapAnimationJobConfig_1.h"
#include "unitysdk/Struct_2_ACD0EF80A5330786.h"
#include "unitysdk/Struct_2_BF5775DA40138049_1.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/Span_1.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace Foundation { class NativeMemory; }
namespace Foundation { class NativeMemoryBuilder; }
namespace MoleMole::Photo { class Skeleton; }
namespace System { class String; }
namespace UnityEngine { class Animator; }

#define MOLEMOLE_PHOTO_ANIMATIONSAVECACHEDPOSECONFIG_CREATEJOBDATA_OFFSET UNITYSDK_OFFSET(0x18CF2890)
#define MOLEMOLE_PHOTO_ANIMATIONSAVECACHEDPOSECONFIG_GET_DYNAMICMEMORYCOUNT_OFFSET UNITYSDK_OFFSET(0x18CF2880)
#define MOLEMOLE_PHOTO_ANIMATIONSAVECACHEDPOSECONFIG_REQUESTMEMORY_OFFSET UNITYSDK_OFFSET(0x18CF2FC0)
#define MOLEMOLE_PHOTO_ANIMATIONSAVECACHEDPOSECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18CF32A0)

namespace MoleMole::Photo
{
	inline static constexpr unsigned int AnimationSaveCachedPoseConfig_TypeDefinitionIndex = 62868;

	class AnimationSaveCachedPoseConfig : public ::MoleMole::Photo::NapAnimationJobConfig_1<::Struct_2_BF5775DA40138049_1>
	{
	public:
		::System::String* cachedPoseName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_ANIMATIONSAVECACHEDPOSECONFIG__CTOR_OFFSET))(this);
		}

		::System::Int32 get_DynamicMemoryCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_ANIMATIONSAVECACHEDPOSECONFIG_GET_DYNAMICMEMORYCOUNT_OFFSET))(this);
		}

		::Struct_2_BF5775DA40138049_1 CreateJobData(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Animator* animator, ::Struct_2_ACD0EF80A5330786& context, ::Foundation::NativeMemory* memory, ::System::ReadOnlySpan_1<::Foundation::NativeMemoryRequestHandle> variables)
		{
			return ((::Struct_2_BF5775DA40138049_1(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Animator*, ::Struct_2_ACD0EF80A5330786&, ::Foundation::NativeMemory*, ::System::ReadOnlySpan_1<::Foundation::NativeMemoryRequestHandle>))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_ANIMATIONSAVECACHEDPOSECONFIG_CREATEJOBDATA_OFFSET))(this, graph, animator, context, memory, variables);
		}

		::System::Void RequestMemory(::UnityEngine::Animator* animator, ::MoleMole::Photo::Skeleton* skeleton, ::Foundation::NativeMemoryBuilder* builder, ::System::Span_1<::Foundation::NativeMemoryRequestHandle> output)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::MoleMole::Photo::Skeleton*, ::Foundation::NativeMemoryBuilder*, ::System::Span_1<::Foundation::NativeMemoryRequestHandle>))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_ANIMATIONSAVECACHEDPOSECONFIG_REQUESTMEMORY_OFFSET))(this, animator, skeleton, builder, output);
		}
	};
}
