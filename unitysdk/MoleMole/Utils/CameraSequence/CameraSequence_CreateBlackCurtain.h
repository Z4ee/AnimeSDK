#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceNotifyStateEvent.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_CREATEBLACKCURTAIN_BUILDDATAPATHINTERNAL_OFFSET UNITYSDK_OFFSET(0x10D8CFE0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_CREATEBLACKCURTAIN_COLLECTVARIABLEINTERNAL_OFFSET UNITYSDK_OFFSET(0x10D8D030)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_CREATEBLACKCURTAIN_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x10D8CFA0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_CREATEBLACKCURTAIN_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x10D8D020)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_CREATEBLACKCURTAIN_RECEIVENOTIFYBEGIN_OFFSET UNITYSDK_OFFSET(0x10D8D190)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_CREATEBLACKCURTAIN_RECEIVENOTIFYEND_OFFSET UNITYSDK_OFFSET(0x10D8D4C0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_CREATEBLACKCURTAIN_RECEIVENOTIFYTICK_OFFSET UNITYSDK_OFFSET(0x10D8D460)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_CREATEBLACKCURTAIN__CTOR_OFFSET UNITYSDK_OFFSET(0x10D8D510)

namespace MoleMole::Utils::CameraSequence
{
	inline static constexpr unsigned int CameraSequence_CreateBlackCurtain_TypeDefinitionIndex = 46116;

	class CameraSequence_CreateBlackCurtain : public ::PipelineCamera::CameraSequence::CameraSequenceNotifyStateEvent
	{
	public:
		// static const ::System::String* KEY_Curtain; // 0x0
		// static const ::System::Int32 KEY_Priority = 0x63; // 0x0
		::System::Boolean IsHideBlackCurtain; // 0x50
		::UnityEngine::AnimationCurve* curtainCurve; // 0x58
		::System::Single curtainDuration; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_CREATEBLACKCURTAIN__CTOR_OFFSET))(this);
		}

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_CREATEBLACKCURTAIN_GET_EVENTNAME_OFFSET))(this);
		}

		::System::Void BuildDataPathInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_CREATEBLACKCURTAIN_BUILDDATAPATHINTERNAL_OFFSET))(this);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_CREATEBLACKCURTAIN_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::System::Void CollectVariableInternal(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector collector)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_CREATEBLACKCURTAIN_COLLECTVARIABLEINTERNAL_OFFSET))(this, collector);
		}

		::System::Void ReceiveNotifyBegin(::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_CREATEBLACKCURTAIN_RECEIVENOTIFYBEGIN_OFFSET))(this, context);
		}

		::System::Void ReceiveNotifyTick(::PipelineCamera::CameraSequence::CameraSequenceContext*& context, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_CREATEBLACKCURTAIN_RECEIVENOTIFYTICK_OFFSET))(this, context, deltaTime);
		}

		::System::Void ReceiveNotifyEnd(::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_CREATEBLACKCURTAIN_RECEIVENOTIFYEND_OFFSET))(this, context);
		}
	};
}
