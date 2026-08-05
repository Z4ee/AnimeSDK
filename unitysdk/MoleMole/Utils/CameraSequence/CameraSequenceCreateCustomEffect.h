#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceNotifyStateEvent.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }
namespace System { class String; }

#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATECUSTOMEFFECT_BUILDDATAPATHINTERNAL_OFFSET UNITYSDK_OFFSET(0x10AF9F40)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATECUSTOMEFFECT_COLLECTVARIABLEINTERNAL_OFFSET UNITYSDK_OFFSET(0x10AF9F90)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATECUSTOMEFFECT_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x10AF9F00)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATECUSTOMEFFECT_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x10AF9F80)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATECUSTOMEFFECT_RECEIVENOTIFYBEGIN_OFFSET UNITYSDK_OFFSET(0x10AFA0F0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATECUSTOMEFFECT_RECEIVENOTIFYEND_OFFSET UNITYSDK_OFFSET(0x10AFA560)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATECUSTOMEFFECT_RECEIVENOTIFYTICK_OFFSET UNITYSDK_OFFSET(0x10AFA500)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATECUSTOMEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x10AFA5B0)

namespace MoleMole::Utils::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceCreateCustomEffect_TypeDefinitionIndex = 50278;

	class CameraSequenceCreateCustomEffect : public ::PipelineCamera::CameraSequence::CameraSequenceNotifyStateEvent
	{
	public:
		// static const ::System::String* CUSTOM_EFFECT_KEY; // 0x0
		::System::String* CustomEffectKey; // 0x50
		::System::Boolean IsDisabled; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATECUSTOMEFFECT__CTOR_OFFSET))(this);
		}

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATECUSTOMEFFECT_GET_EVENTNAME_OFFSET))(this);
		}

		::System::Void BuildDataPathInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATECUSTOMEFFECT_BUILDDATAPATHINTERNAL_OFFSET))(this);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATECUSTOMEFFECT_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::System::Void CollectVariableInternal(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector collector)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATECUSTOMEFFECT_COLLECTVARIABLEINTERNAL_OFFSET))(this, collector);
		}

		::System::Void ReceiveNotifyBegin(::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATECUSTOMEFFECT_RECEIVENOTIFYBEGIN_OFFSET))(this, context);
		}

		::System::Void ReceiveNotifyTick(::PipelineCamera::CameraSequence::CameraSequenceContext*& context, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATECUSTOMEFFECT_RECEIVENOTIFYTICK_OFFSET))(this, context, deltaTime);
		}

		::System::Void ReceiveNotifyEnd(::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATECUSTOMEFFECT_RECEIVENOTIFYEND_OFFSET))(this, context);
		}
	};
}
