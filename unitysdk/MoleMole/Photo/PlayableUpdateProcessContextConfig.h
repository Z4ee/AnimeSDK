#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/NativeMemoryRequestHandle.h"
#include "unitysdk/MoleMole/Photo/NapPlayableBehaviourConfig_1.h"
#include "unitysdk/Struct_2_ACD0EF80A5330786.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/Span_1.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

class Class_2_7F95F273DDBFD8DA;
namespace Foundation { class NativeMemory; }
namespace Foundation { class NativeMemoryBuilder; }
namespace MoleMole::Photo { class Skeleton; }
namespace UnityEngine { class Animator; }

#define MOLEMOLE_PHOTO_PLAYABLEUPDATEPROCESSCONTEXTCONFIG_CREATEPLAYABLEBEHAVIOUR_OFFSET UNITYSDK_OFFSET(0x1870C890)
#define MOLEMOLE_PHOTO_PLAYABLEUPDATEPROCESSCONTEXTCONFIG_GET_DYNAMICMEMORYCOUNT_OFFSET UNITYSDK_OFFSET(0x1870C880)
#define MOLEMOLE_PHOTO_PLAYABLEUPDATEPROCESSCONTEXTCONFIG_REQUESTMEMORY_OFFSET UNITYSDK_OFFSET(0x1870CA50)
#define MOLEMOLE_PHOTO_PLAYABLEUPDATEPROCESSCONTEXTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1870CAD0)

namespace MoleMole::Photo
{
	inline static constexpr unsigned int PlayableUpdateProcessContextConfig_TypeDefinitionIndex = 61944;

	class PlayableUpdateProcessContextConfig : public ::MoleMole::Photo::NapPlayableBehaviourConfig_1<::Class_2_7F95F273DDBFD8DA*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_PLAYABLEUPDATEPROCESSCONTEXTCONFIG__CTOR_OFFSET))(this);
		}

		::System::Int32 get_DynamicMemoryCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_PLAYABLEUPDATEPROCESSCONTEXTCONFIG_GET_DYNAMICMEMORYCOUNT_OFFSET))(this);
		}

		::Class_2_7F95F273DDBFD8DA* CreatePlayableBehaviour(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Animator* animator, ::Struct_2_ACD0EF80A5330786& context, ::Foundation::NativeMemory* memory, ::System::ReadOnlySpan_1<::Foundation::NativeMemoryRequestHandle> variables)
		{
			return ((::Class_2_7F95F273DDBFD8DA*(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Animator*, ::Struct_2_ACD0EF80A5330786&, ::Foundation::NativeMemory*, ::System::ReadOnlySpan_1<::Foundation::NativeMemoryRequestHandle>))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_PLAYABLEUPDATEPROCESSCONTEXTCONFIG_CREATEPLAYABLEBEHAVIOUR_OFFSET))(this, graph, animator, context, memory, variables);
		}

		::System::Void RequestMemory(::UnityEngine::Animator* animator, ::MoleMole::Photo::Skeleton* skeleton, ::Foundation::NativeMemoryBuilder* builder, ::System::Span_1<::Foundation::NativeMemoryRequestHandle> output)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::MoleMole::Photo::Skeleton*, ::Foundation::NativeMemoryBuilder*, ::System::Span_1<::Foundation::NativeMemoryRequestHandle>))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_PLAYABLEUPDATEPROCESSCONTEXTCONFIG_REQUESTMEMORY_OFFSET))(this, animator, skeleton, builder, output);
		}
	};
}
