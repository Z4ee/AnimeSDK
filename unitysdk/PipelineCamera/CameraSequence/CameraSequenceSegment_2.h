#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/Foundation/Unreal/Interval_1.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceEnvironmentPath.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceEventOperation.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceTimeTransform.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"
#include "unitysdk/PipelineCamera/Method_LoopInterval.h"
#include "unitysdk/PipelineCamera/SerializableGuid.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Span_1.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }
namespace PipelineCamera::CameraSequence { template <typename T> class CameraSequence_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Reflection { class FieldInfo; }
namespace System::Threading { template <typename T> class ThreadLocal_1; }

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceSegment_2_TypeDefinitionIndex = 37867;

	template <typename TSequence, typename T>
	class CameraSequenceSegment_2 : public ::System::Object
	{
	public:
		::System::Single startPos; // 0x0
		::System::Single startTime; // 0x0
		::System::Single endTime; // 0x0
		::System::Single playRate; // 0x0
		::System::Int32 loopingCount; // 0x0
		TSequence cameraSequence; // 0x0
		::System::Boolean disableSequenceContextDependent; // 0x0
		::System::Boolean disableSequence; // 0x0
		static ::Foundation::Unreal::FName* StaticGet_disableSequenceName()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceSegment_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Reflection::FieldInfo** StaticGet_disableSequenceFieldInfo()
		{
			return (::System::Reflection::FieldInfo**)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceSegment_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::PipelineCamera::SerializableGuid segmentId; // 0x0
		// static const ::System::Int32 MaxLoopIntervalCount = 0x10; // 0x0
		static ::System::Threading::ThreadLocal_1<::Il2CppArray<::PipelineCamera::Method_LoopInterval>*>** StaticGet_IntervalBuffer()
		{
			return (::System::Threading::ThreadLocal_1<::Il2CppArray<::PipelineCamera::Method_LoopInterval>*>**)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceSegment_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Threading::ThreadLocal_1<::Il2CppArray<::PipelineCamera::CameraSequence::CameraSequenceTimeTransform>*>** StaticGet_TimeTransformBuffer()
		{
			return (::System::Threading::ThreadLocal_1<::Il2CppArray<::PipelineCamera::CameraSequence::CameraSequenceTimeTransform>*>**)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceSegment_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
