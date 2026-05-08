#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/NativeMemoryRequestHandle.h"
#include "unitysdk/MoleMole/Photo/NapAnimationJobConfig_1.h"
#include "unitysdk/Struct_2_6D9F6D9B6BD853BD.h"
#include "unitysdk/Struct_2_ACD0EF80A5330786.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/Span_1.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace Foundation { class NativeMemory; }
namespace Foundation { class NativeMemoryBuilder; }
namespace MoleMole::Photo { class AnimationModifyCurveValueConfig; }
namespace MoleMole::Photo { class Skeleton; }
namespace UnityEngine { class Animator; }

#define MOLEMOLE_PHOTO_ANIMATIONMODIFYCURVECONFIG_CREATEJOBDATA_OFFSET UNITYSDK_OFFSET(0x12FAC770)
#define MOLEMOLE_PHOTO_ANIMATIONMODIFYCURVECONFIG_GET_DYNAMICMEMORYCOUNT_OFFSET UNITYSDK_OFFSET(0x12FAC750)
#define MOLEMOLE_PHOTO_ANIMATIONMODIFYCURVECONFIG_REQUESTMEMORY_OFFSET UNITYSDK_OFFSET(0x12FACFE0)
#define MOLEMOLE_PHOTO_ANIMATIONMODIFYCURVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x12FAD290)

namespace MoleMole::Photo
{
	inline static constexpr unsigned int AnimationModifyCurveConfig_TypeDefinitionIndex = 49186;

	class AnimationModifyCurveConfig : public ::MoleMole::Photo::NapAnimationJobConfig_1<::Struct_2_6D9F6D9B6BD853BD>
	{
	public:
		::MoleMole::Photo::AnimationModifyCurveValueConfig* valueConfig; // 0x10
		::System::Double duration; // 0x18
		::System::Boolean normalized; // 0x20
		::System::Boolean looping; // 0x21

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_ANIMATIONMODIFYCURVECONFIG__CTOR_OFFSET))(this);
		}

		::System::Int32 get_DynamicMemoryCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_ANIMATIONMODIFYCURVECONFIG_GET_DYNAMICMEMORYCOUNT_OFFSET))(this);
		}

		::Struct_2_6D9F6D9B6BD853BD CreateJobData(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Animator* animator, ::Struct_2_ACD0EF80A5330786& context, ::Foundation::NativeMemory* memory, ::System::ReadOnlySpan_1<::Foundation::NativeMemoryRequestHandle> variables)
		{
			return ((::Struct_2_6D9F6D9B6BD853BD(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Animator*, ::Struct_2_ACD0EF80A5330786&, ::Foundation::NativeMemory*, ::System::ReadOnlySpan_1<::Foundation::NativeMemoryRequestHandle>))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_ANIMATIONMODIFYCURVECONFIG_CREATEJOBDATA_OFFSET))(this, graph, animator, context, memory, variables);
		}

		::System::Void RequestMemory(::UnityEngine::Animator* animator, ::MoleMole::Photo::Skeleton* skeleton, ::Foundation::NativeMemoryBuilder* builder, ::System::Span_1<::Foundation::NativeMemoryRequestHandle> output)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::MoleMole::Photo::Skeleton*, ::Foundation::NativeMemoryBuilder*, ::System::Span_1<::Foundation::NativeMemoryRequestHandle>))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_ANIMATIONMODIFYCURVECONFIG_REQUESTMEMORY_OFFSET))(this, animator, skeleton, builder, output);
		}
	};
}
