#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/NativeMemoryRequestHandle.h"
#include "unitysdk/Struct_2_ACD0EF80A5330786.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/Span_1.h"
#include "unitysdk/UnityEngine/Animations/AnimationClipPlayable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace Foundation { class NativeMemory; }
namespace Foundation { class NativeMemoryBuilder; }
namespace MoleMole::Photo { class Skeleton; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Animator; }

#define MOLEMOLE_PHOTO_PLAYABLEGRAPHCLIPCONFIG_CREATE_OFFSET UNITYSDK_OFFSET(0x17037E20)
#define MOLEMOLE_PHOTO_PLAYABLEGRAPHCLIPCONFIG_GET_DYNAMICMEMORYCOUNT_OFFSET UNITYSDK_OFFSET(0x17038020)
#define MOLEMOLE_PHOTO_PLAYABLEGRAPHCLIPCONFIG_REQUEST_OFFSET UNITYSDK_OFFSET(0x17038030)
#define MOLEMOLE_PHOTO_PLAYABLEGRAPHCLIPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x170380B0)

namespace MoleMole::Photo
{
	inline static constexpr unsigned int PlayableGraphClipConfig_TypeDefinitionIndex = 78727;

	class PlayableGraphClipConfig : public ::System::Object
	{
	public:
		::UnityEngine::AnimationClip* clip; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_PLAYABLEGRAPHCLIPCONFIG__CTOR_OFFSET))(this);
		}

		::UnityEngine::Animations::AnimationClipPlayable Create(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Animator* animator, ::Struct_2_ACD0EF80A5330786& context, ::Foundation::NativeMemory* memory, ::System::ReadOnlySpan_1<::Foundation::NativeMemoryRequestHandle> variables)
		{
			return ((::UnityEngine::Animations::AnimationClipPlayable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Animator*, ::Struct_2_ACD0EF80A5330786&, ::Foundation::NativeMemory*, ::System::ReadOnlySpan_1<::Foundation::NativeMemoryRequestHandle>))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_PLAYABLEGRAPHCLIPCONFIG_CREATE_OFFSET))(this, graph, animator, context, memory, variables);
		}

		::System::Int32 get_DynamicMemoryCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_PLAYABLEGRAPHCLIPCONFIG_GET_DYNAMICMEMORYCOUNT_OFFSET))(this);
		}

		::System::Void Request(::UnityEngine::Animator* animator, ::MoleMole::Photo::Skeleton* skeleton, ::Foundation::NativeMemoryBuilder* builder, ::System::Span_1<::Foundation::NativeMemoryRequestHandle> output)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::MoleMole::Photo::Skeleton*, ::Foundation::NativeMemoryBuilder*, ::System::Span_1<::Foundation::NativeMemoryRequestHandle>))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_PLAYABLEGRAPHCLIPCONFIG_REQUEST_OFFSET))(this, animator, skeleton, builder, output);
		}
	};
}
