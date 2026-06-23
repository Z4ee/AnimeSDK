#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceNotifyStateEvent.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }
namespace System { class String; }

#define MOLEMOLE_UTILS_CAMERASEQUENCE_STOPLEVELCOLORCORRECTION_BUILDDATAPATHINTERNAL_OFFSET UNITYSDK_OFFSET(0xE86E940)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_STOPLEVELCOLORCORRECTION_COLLECTVARIABLEINTERNAL_OFFSET UNITYSDK_OFFSET(0xE86E7A0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_STOPLEVELCOLORCORRECTION_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0xE86E900)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_STOPLEVELCOLORCORRECTION_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0xE86E790)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_STOPLEVELCOLORCORRECTION_RECEIVENOTIFYBEGIN_OFFSET UNITYSDK_OFFSET(0xE86E980)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_STOPLEVELCOLORCORRECTION_RECEIVENOTIFYEND_OFFSET UNITYSDK_OFFSET(0xE86EA70)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_STOPLEVELCOLORCORRECTION_RECEIVENOTIFYTICK_OFFSET UNITYSDK_OFFSET(0xE86EA10)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_STOPLEVELCOLORCORRECTION__CTOR_OFFSET UNITYSDK_OFFSET(0xE86EAC0)

namespace MoleMole::Utils::CameraSequence
{
	inline static constexpr unsigned int StopLevelColorCorrection_TypeDefinitionIndex = 69225;

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
