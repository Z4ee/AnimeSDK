#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceNotifyEvent.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }
namespace System { class String; }

#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEEVENT_CREATECUSTOMEFFECT_BUILDDATAPATHINTERNAL_OFFSET UNITYSDK_OFFSET(0x11C2E0F0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEEVENT_CREATECUSTOMEFFECT_COLLECTVARIABLEINTERNAL_OFFSET UNITYSDK_OFFSET(0x11C2E170)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEEVENT_CREATECUSTOMEFFECT_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x11C2E0B0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEEVENT_CREATECUSTOMEFFECT_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x11C2E160)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEEVENT_CREATECUSTOMEFFECT_RECEIVENOTIFY_OFFSET UNITYSDK_OFFSET(0x11C2E2D0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEEVENT_CREATECUSTOMEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x11C2E6E0)

namespace MoleMole::Utils::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceEvent_CreateCustomEffect_TypeDefinitionIndex = 41023;

	class CameraSequenceEvent_CreateCustomEffect : public ::PipelineCamera::CameraSequence::CameraSequenceNotifyEvent
	{
	public:
		// static const ::System::String* CUSTOM_EFFECT_KEY; // 0x0
		::System::String* customEffectKey; // 0x48
		::System::Boolean isDisabled; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEEVENT_CREATECUSTOMEFFECT__CTOR_OFFSET))(this);
		}

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEEVENT_CREATECUSTOMEFFECT_GET_EVENTNAME_OFFSET))(this);
		}

		::System::Void BuildDataPathInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEEVENT_CREATECUSTOMEFFECT_BUILDDATAPATHINTERNAL_OFFSET))(this);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEEVENT_CREATECUSTOMEFFECT_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::System::Void CollectVariableInternal(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector collector)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEEVENT_CREATECUSTOMEFFECT_COLLECTVARIABLEINTERNAL_OFFSET))(this, collector);
		}

		::System::Void ReceiveNotify(::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEEVENT_CREATECUSTOMEFFECT_RECEIVENOTIFY_OFFSET))(this, context);
		}
	};
}
