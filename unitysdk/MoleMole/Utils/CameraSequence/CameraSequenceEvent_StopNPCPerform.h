#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceNotifyEvent.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }
namespace System { class String; }

#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEEVENT_STOPNPCPERFORM_BUILDDATAPATHINTERNAL_OFFSET UNITYSDK_OFFSET(0x11665600)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEEVENT_STOPNPCPERFORM_COLLECTVARIABLEINTERNAL_OFFSET UNITYSDK_OFFSET(0x11665680)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEEVENT_STOPNPCPERFORM_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x116655C0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEEVENT_STOPNPCPERFORM_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x11665670)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEEVENT_STOPNPCPERFORM_RECEIVENOTIFY_OFFSET UNITYSDK_OFFSET(0x116657E0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEEVENT_STOPNPCPERFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x116658E0)

namespace MoleMole::Utils::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceEvent_StopNPCPerform_TypeDefinitionIndex = 67223;

	class CameraSequenceEvent_StopNPCPerform : public ::PipelineCamera::CameraSequence::CameraSequenceNotifyEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEEVENT_STOPNPCPERFORM__CTOR_OFFSET))(this);
		}

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEEVENT_STOPNPCPERFORM_GET_EVENTNAME_OFFSET))(this);
		}

		::System::Void BuildDataPathInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEEVENT_STOPNPCPERFORM_BUILDDATAPATHINTERNAL_OFFSET))(this);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEEVENT_STOPNPCPERFORM_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::System::Void CollectVariableInternal(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector collector)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEEVENT_STOPNPCPERFORM_COLLECTVARIABLEINTERNAL_OFFSET))(this, collector);
		}

		::System::Void ReceiveNotify(::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEEVENT_STOPNPCPERFORM_RECEIVENOTIFY_OFFSET))(this, context);
		}
	};
}
