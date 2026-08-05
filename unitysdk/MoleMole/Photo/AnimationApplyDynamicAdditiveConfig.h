#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/NativeMemoryRequestHandle.h"
#include "unitysdk/MoleMole/Photo/NapAnimationJobConfig_1.h"
#include "unitysdk/Struct_2_ACD0EF80A5330786.h"
#include "unitysdk/Struct_2_B83E4BEE65ED8440.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/Span_1.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace Foundation { class NativeMemory; }
namespace Foundation { class NativeMemoryBuilder; }
namespace MoleMole::Photo { class PlayableGraphFloatAttributeConfig; }
namespace MoleMole::Photo { class Skeleton; }
namespace UnityEngine { class Animator; }

#define MOLEMOLE_PHOTO_ANIMATIONAPPLYDYNAMICADDITIVECONFIG_CREATEJOBDATA_OFFSET UNITYSDK_OFFSET(0x129D76E0)
#define MOLEMOLE_PHOTO_ANIMATIONAPPLYDYNAMICADDITIVECONFIG_GET_DYNAMICMEMORYCOUNT_OFFSET UNITYSDK_OFFSET(0x129D7B00)
#define MOLEMOLE_PHOTO_ANIMATIONAPPLYDYNAMICADDITIVECONFIG_REQUESTMEMORY_OFFSET UNITYSDK_OFFSET(0x129D7B10)
#define MOLEMOLE_PHOTO_ANIMATIONAPPLYDYNAMICADDITIVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x129D7BF0)

namespace MoleMole::Photo
{
	inline static constexpr unsigned int AnimationApplyDynamicAdditiveConfig_TypeDefinitionIndex = 58922;

	class AnimationApplyDynamicAdditiveConfig : public ::MoleMole::Photo::NapAnimationJobConfig_1<::Struct_2_B83E4BEE65ED8440>
	{
	public:
		::MoleMole::Photo::PlayableGraphFloatAttributeConfig* weight; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_ANIMATIONAPPLYDYNAMICADDITIVECONFIG__CTOR_OFFSET))(this);
		}

		::Struct_2_B83E4BEE65ED8440 CreateJobData(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Animator* animator, ::Struct_2_ACD0EF80A5330786& context, ::Foundation::NativeMemory* memory, ::System::ReadOnlySpan_1<::Foundation::NativeMemoryRequestHandle> variables)
		{
			return ((::Struct_2_B83E4BEE65ED8440(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Animator*, ::Struct_2_ACD0EF80A5330786&, ::Foundation::NativeMemory*, ::System::ReadOnlySpan_1<::Foundation::NativeMemoryRequestHandle>))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_ANIMATIONAPPLYDYNAMICADDITIVECONFIG_CREATEJOBDATA_OFFSET))(this, graph, animator, context, memory, variables);
		}

		::System::Int32 get_DynamicMemoryCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_ANIMATIONAPPLYDYNAMICADDITIVECONFIG_GET_DYNAMICMEMORYCOUNT_OFFSET))(this);
		}

		::System::Void RequestMemory(::UnityEngine::Animator* animator, ::MoleMole::Photo::Skeleton* skeleton, ::Foundation::NativeMemoryBuilder* builder, ::System::Span_1<::Foundation::NativeMemoryRequestHandle> output)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::MoleMole::Photo::Skeleton*, ::Foundation::NativeMemoryBuilder*, ::System::Span_1<::Foundation::NativeMemoryRequestHandle>))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_ANIMATIONAPPLYDYNAMICADDITIVECONFIG_REQUESTMEMORY_OFFSET))(this, animator, skeleton, builder, output);
		}
	};
}
