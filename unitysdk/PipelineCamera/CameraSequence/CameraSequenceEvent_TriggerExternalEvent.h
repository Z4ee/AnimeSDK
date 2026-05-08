#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceNotifyEvent.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }
namespace System { class Action; }
namespace System { class String; }

#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENT_TRIGGEREXTERNALEVENT_BUILDDATAPATHINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B8A3340)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENT_TRIGGEREXTERNALEVENT_COLLECTVARIABLEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B8A33B0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENT_TRIGGEREXTERNALEVENT_FETCH_ONNOTIFY_OFFSET UNITYSDK_OFFSET(0x1B8A3510)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENT_TRIGGEREXTERNALEVENT_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x1B8A31F0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENT_TRIGGEREXTERNALEVENT_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x1B8A3230)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENT_TRIGGEREXTERNALEVENT_RECEIVENOTIFY_OFFSET UNITYSDK_OFFSET(0x1B8A3240)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENT_TRIGGEREXTERNALEVENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B8A3600)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENT_TRIGGEREXTERNALEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8A35C0)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceEvent_TriggerExternalEvent_TypeDefinitionIndex = 36282;

	class CameraSequenceEvent_TriggerExternalEvent : public ::PipelineCamera::CameraSequence::CameraSequenceNotifyEvent
	{
	public:
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_OnNotify()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceEvent_TriggerExternalEvent_TypeDefinitionIndex)->GetStaticField(0x87F0);
		}
		::System::Action* OnNotify; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENT_TRIGGEREXTERNALEVENT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENT_TRIGGEREXTERNALEVENT__CCTOR_OFFSET))();
		}

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENT_TRIGGEREXTERNALEVENT_GET_EVENTNAME_OFFSET))(this);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENT_TRIGGEREXTERNALEVENT_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::System::Void ReceiveNotify(::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENT_TRIGGEREXTERNALEVENT_RECEIVENOTIFY_OFFSET))(this, context);
		}

		::System::Void BuildDataPathInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENT_TRIGGEREXTERNALEVENT_BUILDDATAPATHINTERNAL_OFFSET))(this);
		}

		::System::Void CollectVariableInternal(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector collector)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENT_TRIGGEREXTERNALEVENT_COLLECTVARIABLEINTERNAL_OFFSET))(this, collector);
		}

		::System::Action* fetch_OnNotify(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::System::Action*(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENT_TRIGGEREXTERNALEVENT_FETCH_ONNOTIFY_OFFSET))(this, context);
		}
	};
}
