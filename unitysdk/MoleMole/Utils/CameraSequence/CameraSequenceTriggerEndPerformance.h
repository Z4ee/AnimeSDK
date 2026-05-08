#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceNotifyStateEvent.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }
namespace System { class String; }

#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCETRIGGERENDPERFORMANCE_BUILDDATAPATHINTERNAL_OFFSET UNITYSDK_OFFSET(0x10A22F70)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCETRIGGERENDPERFORMANCE_COLLECTVARIABLEINTERNAL_OFFSET UNITYSDK_OFFSET(0x10A22FC0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCETRIGGERENDPERFORMANCE_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x10A22F30)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCETRIGGERENDPERFORMANCE_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x10A22FB0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCETRIGGERENDPERFORMANCE_RECEIVENOTIFYBEGIN_OFFSET UNITYSDK_OFFSET(0x10A23030)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCETRIGGERENDPERFORMANCE_RECEIVENOTIFYEND_OFFSET UNITYSDK_OFFSET(0x10A23130)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCETRIGGERENDPERFORMANCE_RECEIVENOTIFYTICK_OFFSET UNITYSDK_OFFSET(0x10A230D0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCETRIGGERENDPERFORMANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x10A23180)

namespace MoleMole::Utils::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceTriggerEndPerformance_TypeDefinitionIndex = 56346;

	class CameraSequenceTriggerEndPerformance : public ::PipelineCamera::CameraSequence::CameraSequenceNotifyStateEvent
	{
	public:
		::System::Boolean IsDisable; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCETRIGGERENDPERFORMANCE__CTOR_OFFSET))(this);
		}

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCETRIGGERENDPERFORMANCE_GET_EVENTNAME_OFFSET))(this);
		}

		::System::Void BuildDataPathInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCETRIGGERENDPERFORMANCE_BUILDDATAPATHINTERNAL_OFFSET))(this);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCETRIGGERENDPERFORMANCE_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::System::Void CollectVariableInternal(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector collector)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCETRIGGERENDPERFORMANCE_COLLECTVARIABLEINTERNAL_OFFSET))(this, collector);
		}

		::System::Void ReceiveNotifyBegin(::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCETRIGGERENDPERFORMANCE_RECEIVENOTIFYBEGIN_OFFSET))(this, context);
		}

		::System::Void ReceiveNotifyTick(::PipelineCamera::CameraSequence::CameraSequenceContext*& context, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCETRIGGERENDPERFORMANCE_RECEIVENOTIFYTICK_OFFSET))(this, context, deltaTime);
		}

		::System::Void ReceiveNotifyEnd(::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCETRIGGERENDPERFORMANCE_RECEIVENOTIFYEND_OFFSET))(this, context);
		}
	};
}
