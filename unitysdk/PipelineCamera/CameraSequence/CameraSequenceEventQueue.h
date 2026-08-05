#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceEnvironmentPath.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceEventOperation.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceEventQueue_Operation.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera { template <typename T> class ReferenceDoubleBuffer_1; }
namespace PipelineCamera::CameraSequence { class CameraSequenceCollectionInstance; }
namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }
namespace PipelineCamera::CameraSequence { class CameraSequenceEvent; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTQUEUE_ADDNOTIFYTRIGGEREVENT_OFFSET UNITYSDK_OFFSET(0x1C110D30)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTQUEUE_ADDSTATEBEGINEVENT_OFFSET UNITYSDK_OFFSET(0x1C110BF0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTQUEUE_ADDSTATEENDEVENT_OFFSET UNITYSDK_OFFSET(0x1C110C90)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTQUEUE_ADDSTATETICKEVENT_OFFSET UNITYSDK_OFFSET(0x1C110DD0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTQUEUE_CONSUMEACTIVESTATES_OFFSET UNITYSDK_OFFSET(0x1C10DB30)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTQUEUE_HANDLEEXPIREOPERATION_OFFSET UNITYSDK_OFFSET(0x1C1106C0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTQUEUE_HANDLETRIGGEROPERATION_OFFSET UNITYSDK_OFFSET(0x1C110840)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTQUEUE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C110410)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTQUEUE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1C10C100)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTQUEUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C110220)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceEventQueue_TypeDefinitionIndex = 38498;

	class CameraSequenceEventQueue : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::PipelineCamera::CameraSequence::CameraSequenceEventQueue_Operation>* _buffer; // 0x10
		::System::Collections::Generic::List_1<::PipelineCamera::CameraSequence::CameraSequenceEventQueue_Operation>* _operation; // 0x18
		::PipelineCamera::ReferenceDoubleBuffer_1<::System::Collections::Generic::Dictionary_2<::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath, ::PipelineCamera::CameraSequence::CameraSequenceEvent*>*>* _activeStateEvents; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTQUEUE__CTOR_OFFSET))(this);
		}

		::System::Void Update(::System::Collections::Generic::List_1<::PipelineCamera::CameraSequence::CameraSequenceEventOperation>* operations, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::PipelineCamera::CameraSequence::CameraSequenceEventOperation>*, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTQUEUE_UPDATE_OFFSET))(this, operations, deltaTime);
		}

		::System::Void Invoke(::PipelineCamera::CameraSequence::CameraSequenceContext* context, ::PipelineCamera::CameraSequence::CameraSequenceCollectionInstance* instance)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*, ::PipelineCamera::CameraSequence::CameraSequenceCollectionInstance*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTQUEUE_INVOKE_OFFSET))(this, context, instance);
		}

		::System::Action* ConsumeActiveStates(::PipelineCamera::CameraSequence::CameraSequenceContext* context, ::PipelineCamera::CameraSequence::CameraSequenceCollectionInstance* instance)
		{
			return ((::System::Action*(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*, ::PipelineCamera::CameraSequence::CameraSequenceCollectionInstance*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTQUEUE_CONSUMEACTIVESTATES_OFFSET))(this, context, instance);
		}

		::System::Void HandleExpireOperation(::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath workspace, ::PipelineCamera::CameraSequence::CameraSequenceEvent* sequenceEvent, ::System::Collections::Generic::Dictionary_2<::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath, ::PipelineCamera::CameraSequence::CameraSequenceEvent*>* newActiveStates)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath, ::PipelineCamera::CameraSequence::CameraSequenceEvent*, ::System::Collections::Generic::Dictionary_2<::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath, ::PipelineCamera::CameraSequence::CameraSequenceEvent*>*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTQUEUE_HANDLEEXPIREOPERATION_OFFSET))(this, workspace, sequenceEvent, newActiveStates);
		}

		::System::Void HandleTriggerOperation(::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath workspace, ::PipelineCamera::CameraSequence::CameraSequenceEvent* evt, ::System::Collections::Generic::Dictionary_2<::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath, ::PipelineCamera::CameraSequence::CameraSequenceEvent*>* activeStates, ::System::Collections::Generic::Dictionary_2<::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath, ::PipelineCamera::CameraSequence::CameraSequenceEvent*>* newActiveStates)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath, ::PipelineCamera::CameraSequence::CameraSequenceEvent*, ::System::Collections::Generic::Dictionary_2<::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath, ::PipelineCamera::CameraSequence::CameraSequenceEvent*>*, ::System::Collections::Generic::Dictionary_2<::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath, ::PipelineCamera::CameraSequence::CameraSequenceEvent*>*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTQUEUE_HANDLETRIGGEROPERATION_OFFSET))(this, workspace, evt, activeStates, newActiveStates);
		}

		static ::System::Void AddStateBeginEvent(::System::Collections::Generic::List_1<::PipelineCamera::CameraSequence::CameraSequenceEventQueue_Operation>* buffer, ::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath& workspace, ::PipelineCamera::CameraSequence::CameraSequenceEvent* stateEvent)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::PipelineCamera::CameraSequence::CameraSequenceEventQueue_Operation>*, ::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath&, ::PipelineCamera::CameraSequence::CameraSequenceEvent*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTQUEUE_ADDSTATEBEGINEVENT_OFFSET))(buffer, workspace, stateEvent);
		}

		static ::System::Void AddStateEndEvent(::System::Collections::Generic::List_1<::PipelineCamera::CameraSequence::CameraSequenceEventQueue_Operation>* buffer, ::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath& workspace, ::PipelineCamera::CameraSequence::CameraSequenceEvent* stateEvent)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::PipelineCamera::CameraSequence::CameraSequenceEventQueue_Operation>*, ::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath&, ::PipelineCamera::CameraSequence::CameraSequenceEvent*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTQUEUE_ADDSTATEENDEVENT_OFFSET))(buffer, workspace, stateEvent);
		}

		static ::System::Void AddNotifyTriggerEvent(::System::Collections::Generic::List_1<::PipelineCamera::CameraSequence::CameraSequenceEventQueue_Operation>* buffer, ::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath& workspace, ::PipelineCamera::CameraSequence::CameraSequenceEvent* notifyEvent)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::PipelineCamera::CameraSequence::CameraSequenceEventQueue_Operation>*, ::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath&, ::PipelineCamera::CameraSequence::CameraSequenceEvent*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTQUEUE_ADDNOTIFYTRIGGEREVENT_OFFSET))(buffer, workspace, notifyEvent);
		}

		static ::System::Void AddStateTickEvent(::System::Collections::Generic::List_1<::PipelineCamera::CameraSequence::CameraSequenceEventQueue_Operation>* buffer, ::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath& workspace, ::PipelineCamera::CameraSequence::CameraSequenceEvent* stateEvent, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::PipelineCamera::CameraSequence::CameraSequenceEventQueue_Operation>*, ::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath&, ::PipelineCamera::CameraSequence::CameraSequenceEvent*, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTQUEUE_ADDSTATETICKEVENT_OFFSET))(buffer, workspace, stateEvent, deltaTime);
		}
	};
}
