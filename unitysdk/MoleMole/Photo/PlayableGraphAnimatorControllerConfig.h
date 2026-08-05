#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/NativeMemoryRequestHandle.h"
#include "unitysdk/Struct_2_ACD0EF80A5330786.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/Span_1.h"
#include "unitysdk/UnityEngine/Animations/AnimatorControllerPlayable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace Foundation { class NativeMemory; }
namespace Foundation { class NativeMemoryBuilder; }
namespace MoleMole::Photo { class Skeleton; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class RuntimeAnimatorController; }

#define MOLEMOLE_PHOTO_PLAYABLEGRAPHANIMATORCONTROLLERCONFIG_CREATE_OFFSET UNITYSDK_OFFSET(0x138597F0)
#define MOLEMOLE_PHOTO_PLAYABLEGRAPHANIMATORCONTROLLERCONFIG_GET_DYNAMICMEMORYCOUNT_OFFSET UNITYSDK_OFFSET(0x13859A80)
#define MOLEMOLE_PHOTO_PLAYABLEGRAPHANIMATORCONTROLLERCONFIG_REQUEST_OFFSET UNITYSDK_OFFSET(0x13859A90)
#define MOLEMOLE_PHOTO_PLAYABLEGRAPHANIMATORCONTROLLERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x13859B10)

namespace MoleMole::Photo
{
	inline static constexpr unsigned int PlayableGraphAnimatorControllerConfig_TypeDefinitionIndex = 74432;

	class PlayableGraphAnimatorControllerConfig : public ::System::Object
	{
	public:
		::UnityEngine::RuntimeAnimatorController* controller; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_PLAYABLEGRAPHANIMATORCONTROLLERCONFIG__CTOR_OFFSET))(this);
		}

		::UnityEngine::Animations::AnimatorControllerPlayable Create(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Animator* animator, ::Struct_2_ACD0EF80A5330786& context, ::Foundation::NativeMemory* memory, ::System::ReadOnlySpan_1<::Foundation::NativeMemoryRequestHandle> variables)
		{
			return ((::UnityEngine::Animations::AnimatorControllerPlayable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Animator*, ::Struct_2_ACD0EF80A5330786&, ::Foundation::NativeMemory*, ::System::ReadOnlySpan_1<::Foundation::NativeMemoryRequestHandle>))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_PLAYABLEGRAPHANIMATORCONTROLLERCONFIG_CREATE_OFFSET))(this, graph, animator, context, memory, variables);
		}

		::System::Int32 get_DynamicMemoryCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_PLAYABLEGRAPHANIMATORCONTROLLERCONFIG_GET_DYNAMICMEMORYCOUNT_OFFSET))(this);
		}

		::System::Void Request(::UnityEngine::Animator* animator, ::MoleMole::Photo::Skeleton* skeleton, ::Foundation::NativeMemoryBuilder* builder, ::System::Span_1<::Foundation::NativeMemoryRequestHandle> output)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::MoleMole::Photo::Skeleton*, ::Foundation::NativeMemoryBuilder*, ::System::Span_1<::Foundation::NativeMemoryRequestHandle>))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_PLAYABLEGRAPHANIMATORCONTROLLERCONFIG_REQUEST_OFFSET))(this, animator, skeleton, builder, output);
		}
	};
}
