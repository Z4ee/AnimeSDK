#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/NativeMemoryRequestHandle.h"
#include "unitysdk/MoleMole/Photo/NapAnimationJobConfig_1.h"
#include "unitysdk/PipelineCamera/SerializableHashString.h"
#include "unitysdk/Struct_2_ACD0EF80A5330786.h"
#include "unitysdk/Struct_2_B6937A9C521D32AC.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/Span_1.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace Foundation { class NativeMemory; }
namespace Foundation { class NativeMemoryBuilder; }
namespace MoleMole::Photo { class Skeleton; }
namespace UnityEngine { class Animator; }

#define MOLEMOLE_PHOTO_FRONTCAMERAPROCESSBLENDSPACEPOSECONFIG_CREATEJOBDATA_OFFSET UNITYSDK_OFFSET(0x16424420)
#define MOLEMOLE_PHOTO_FRONTCAMERAPROCESSBLENDSPACEPOSECONFIG_GET_DYNAMICMEMORYCOUNT_OFFSET UNITYSDK_OFFSET(0x16424410)
#define MOLEMOLE_PHOTO_FRONTCAMERAPROCESSBLENDSPACEPOSECONFIG_REQUESTMEMORY_OFFSET UNITYSDK_OFFSET(0x16424C70)
#define MOLEMOLE_PHOTO_FRONTCAMERAPROCESSBLENDSPACEPOSECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16424DE0)

namespace MoleMole::Photo
{
	inline static constexpr unsigned int FrontCameraProcessBlendSpacePoseConfig_TypeDefinitionIndex = 72277;

	class FrontCameraProcessBlendSpacePoseConfig : public ::MoleMole::Photo::NapAnimationJobConfig_1<::Struct_2_B6937A9C521D32AC>
	{
	public:
		// static const ::System::Int32 CameraAllocIndex = 0x0; // 0x0
		// static const ::System::Int32 LeftHandAllocIndex = 0x1; // 0x0
		// static const ::System::Int32 LeftArmAllocIndex = 0x2; // 0x0
		// static const ::System::Int32 AllocCount = 0x3; // 0x0
		::PipelineCamera::SerializableHashString cameraBone; // 0x10
		::PipelineCamera::SerializableHashString leftHandBone; // 0x20
		::PipelineCamera::SerializableHashString lookAtIKCurve; // 0x30
		::PipelineCamera::SerializableHashString armIKCurve; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_FRONTCAMERAPROCESSBLENDSPACEPOSECONFIG__CTOR_OFFSET))(this);
		}

		::System::Int32 get_DynamicMemoryCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_FRONTCAMERAPROCESSBLENDSPACEPOSECONFIG_GET_DYNAMICMEMORYCOUNT_OFFSET))(this);
		}

		::Struct_2_B6937A9C521D32AC CreateJobData(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Animator* animator, ::Struct_2_ACD0EF80A5330786& context, ::Foundation::NativeMemory* memory, ::System::ReadOnlySpan_1<::Foundation::NativeMemoryRequestHandle> variables)
		{
			return ((::Struct_2_B6937A9C521D32AC(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Animator*, ::Struct_2_ACD0EF80A5330786&, ::Foundation::NativeMemory*, ::System::ReadOnlySpan_1<::Foundation::NativeMemoryRequestHandle>))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_FRONTCAMERAPROCESSBLENDSPACEPOSECONFIG_CREATEJOBDATA_OFFSET))(this, graph, animator, context, memory, variables);
		}

		::System::Void RequestMemory(::UnityEngine::Animator* animator, ::MoleMole::Photo::Skeleton* skeleton, ::Foundation::NativeMemoryBuilder* builder, ::System::Span_1<::Foundation::NativeMemoryRequestHandle> output)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::MoleMole::Photo::Skeleton*, ::Foundation::NativeMemoryBuilder*, ::System::Span_1<::Foundation::NativeMemoryRequestHandle>))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_FRONTCAMERAPROCESSBLENDSPACEPOSECONFIG_REQUESTMEMORY_OFFSET))(this, animator, skeleton, builder, output);
		}
	};
}
