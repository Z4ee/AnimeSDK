#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceNotifyStateEvent.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }
namespace System { class String; }

#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCERATINGEFFECT_BUILDDATAPATHINTERNAL_OFFSET UNITYSDK_OFFSET(0x1149B800)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCERATINGEFFECT_COLLECTVARIABLEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1149B850)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCERATINGEFFECT_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x1149B7C0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCERATINGEFFECT_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x1149B840)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCERATINGEFFECT_RECEIVENOTIFYBEGIN_OFFSET UNITYSDK_OFFSET(0x1149B770)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCERATINGEFFECT_RECEIVENOTIFYEND_OFFSET UNITYSDK_OFFSET(0x1149BA10)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCERATINGEFFECT_RECEIVENOTIFYTICK_OFFSET UNITYSDK_OFFSET(0x1149B9B0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCERATINGEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1149B6D0)

namespace MoleMole::Utils::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceRatingEffect_TypeDefinitionIndex = 58346;

	class CameraSequenceRatingEffect : public ::PipelineCamera::CameraSequence::CameraSequenceNotifyStateEvent
	{
	public:
		::System::UInt32 PlayerID; // 0x50
		::System::UInt32 TargetID; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCERATINGEFFECT__CTOR_OFFSET))(this);
		}

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCERATINGEFFECT_GET_EVENTNAME_OFFSET))(this);
		}

		::System::Void BuildDataPathInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCERATINGEFFECT_BUILDDATAPATHINTERNAL_OFFSET))(this);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCERATINGEFFECT_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::System::Void CollectVariableInternal(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector collector)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCERATINGEFFECT_COLLECTVARIABLEINTERNAL_OFFSET))(this, collector);
		}

		::System::Void ReceiveNotifyBegin(::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCERATINGEFFECT_RECEIVENOTIFYBEGIN_OFFSET))(this, context);
		}

		::System::Void ReceiveNotifyTick(::PipelineCamera::CameraSequence::CameraSequenceContext*& context, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCERATINGEFFECT_RECEIVENOTIFYTICK_OFFSET))(this, context, deltaTime);
		}

		::System::Void ReceiveNotifyEnd(::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCERATINGEFFECT_RECEIVENOTIFYEND_OFFSET))(this, context);
		}
	};
}
