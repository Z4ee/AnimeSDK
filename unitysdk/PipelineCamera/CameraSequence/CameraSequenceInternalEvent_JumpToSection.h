#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceInternalNotifyEvent.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"
#include "unitysdk/PipelineCamera/SerializableHashString.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceBlendSetting; }
namespace PipelineCamera::CameraSequence { class CameraSequenceCollectionInstance; }
namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }
namespace System { class String; }

#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEINTERNALEVENT_JUMPTOSECTION_BUILDDATAPATHINTERNAL_OFFSET UNITYSDK_OFFSET(0x1F620750)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEINTERNALEVENT_JUMPTOSECTION_COLLECTVARIABLEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1F6207C0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEINTERNALEVENT_JUMPTOSECTION_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x1F620700)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEINTERNALEVENT_JUMPTOSECTION_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x1F620740)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEINTERNALEVENT_JUMPTOSECTION_RECEIVENOTIFY_OFFSET UNITYSDK_OFFSET(0x1F620920)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEINTERNALEVENT_JUMPTOSECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1F620A10)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceInternalEvent_JumpToSection_TypeDefinitionIndex = 38636;

	class CameraSequenceInternalEvent_JumpToSection : public ::PipelineCamera::CameraSequence::CameraSequenceInternalNotifyEvent
	{
	public:
		::PipelineCamera::SerializableHashString sectionName; // 0x48
		::System::Boolean jumpToEnd; // 0x58
		::System::Boolean requestBlending; // 0x59
		::PipelineCamera::CameraSequence::CameraSequenceBlendSetting* blendSetting; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEINTERNALEVENT_JUMPTOSECTION__CTOR_OFFSET))(this);
		}

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEINTERNALEVENT_JUMPTOSECTION_GET_EVENTNAME_OFFSET))(this);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEINTERNALEVENT_JUMPTOSECTION_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::System::Void BuildDataPathInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEINTERNALEVENT_JUMPTOSECTION_BUILDDATAPATHINTERNAL_OFFSET))(this);
		}

		::System::Void CollectVariableInternal(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector collector)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEINTERNALEVENT_JUMPTOSECTION_COLLECTVARIABLEINTERNAL_OFFSET))(this, collector);
		}

		::System::Void ReceiveNotify(::PipelineCamera::CameraSequence::CameraSequenceContext*& context, ::PipelineCamera::CameraSequence::CameraSequenceCollectionInstance* instance)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&, ::PipelineCamera::CameraSequence::CameraSequenceCollectionInstance*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEINTERNALEVENT_JUMPTOSECTION_RECEIVENOTIFY_OFFSET))(this, context, instance);
		}
	};
}
