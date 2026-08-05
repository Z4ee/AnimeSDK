#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceNotifyStateEvent.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }
namespace System { class String; }

#define MOLEMOLE_UTILS_CAMERASEQUENCE_STOPLEVELCOLORCORRECTION_BUILDDATAPATHINTERNAL_OFFSET UNITYSDK_OFFSET(0x10F17840)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_STOPLEVELCOLORCORRECTION_COLLECTVARIABLEINTERNAL_OFFSET UNITYSDK_OFFSET(0x10F176A0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_STOPLEVELCOLORCORRECTION_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x10F17800)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_STOPLEVELCOLORCORRECTION_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x10F17690)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_STOPLEVELCOLORCORRECTION_RECEIVENOTIFYBEGIN_OFFSET UNITYSDK_OFFSET(0x10F17880)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_STOPLEVELCOLORCORRECTION_RECEIVENOTIFYEND_OFFSET UNITYSDK_OFFSET(0x10F17970)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_STOPLEVELCOLORCORRECTION_RECEIVENOTIFYTICK_OFFSET UNITYSDK_OFFSET(0x10F17910)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_STOPLEVELCOLORCORRECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x10F179C0)

namespace MoleMole::Utils::CameraSequence
{
	inline static constexpr unsigned int StopLevelColorCorrection_TypeDefinitionIndex = 70700;

	class StopLevelColorCorrection : public ::PipelineCamera::CameraSequence::CameraSequenceNotifyStateEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_STOPLEVELCOLORCORRECTION__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_STOPLEVELCOLORCORRECTION_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::System::Void CollectVariableInternal(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector collector)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_STOPLEVELCOLORCORRECTION_COLLECTVARIABLEINTERNAL_OFFSET))(this, collector);
		}

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_STOPLEVELCOLORCORRECTION_GET_EVENTNAME_OFFSET))(this);
		}

		::System::Void BuildDataPathInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_STOPLEVELCOLORCORRECTION_BUILDDATAPATHINTERNAL_OFFSET))(this);
		}

		::System::Void ReceiveNotifyBegin(::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_STOPLEVELCOLORCORRECTION_RECEIVENOTIFYBEGIN_OFFSET))(this, context);
		}

		::System::Void ReceiveNotifyTick(::PipelineCamera::CameraSequence::CameraSequenceContext*& context, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_STOPLEVELCOLORCORRECTION_RECEIVENOTIFYTICK_OFFSET))(this, context, deltaTime);
		}

		::System::Void ReceiveNotifyEnd(::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_STOPLEVELCOLORCORRECTION_RECEIVENOTIFYEND_OFFSET))(this, context);
		}
	};
}
