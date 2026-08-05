#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/MoleMole/Utils/CameraSequence/CameraCustomEffectOperation.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceNotifyStateEvent.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_CREATECUSTOMEFFECBYTIMELINE_BUILDDATAPATHINTERNAL_OFFSET UNITYSDK_OFFSET(0x112E4CD0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_CREATECUSTOMEFFECBYTIMELINE_COLLECTVARIABLEINTERNAL_OFFSET UNITYSDK_OFFSET(0x112E4D50)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_CREATECUSTOMEFFECBYTIMELINE_CREATECUSTOMEFFECT_OFFSET UNITYSDK_OFFSET(0x112E4930)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_CREATECUSTOMEFFECBYTIMELINE_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x112E48F0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_CREATECUSTOMEFFECBYTIMELINE_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x112E4D40)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_CREATECUSTOMEFFECBYTIMELINE_RECEIVENOTIFYBEGIN_OFFSET UNITYSDK_OFFSET(0x112E4EB0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_CREATECUSTOMEFFECBYTIMELINE_RECEIVENOTIFYEND_OFFSET UNITYSDK_OFFSET(0x112E51B0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_CREATECUSTOMEFFECBYTIMELINE_RECEIVENOTIFYTICK_OFFSET UNITYSDK_OFFSET(0x112E4F20)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_CREATECUSTOMEFFECBYTIMELINE__CTOR_OFFSET UNITYSDK_OFFSET(0x112E5200)

namespace MoleMole::Utils::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceStateEvent_CreateCustomEffecByTimeLine_TypeDefinitionIndex = 48214;

	class CameraSequenceStateEvent_CreateCustomEffecByTimeLine : public ::PipelineCamera::CameraSequence::CameraSequenceNotifyStateEvent
	{
	public:
		// static const ::System::String* CUSTOM_EFFECT_KEY; // 0x0
		::Foundation::Unreal::FName _timestampId; // 0x50
		::System::Collections::Generic::List_1<::MoleMole::Utils::CameraSequence::CameraCustomEffectOperation>* EffectOnTimeline; // 0x58
		::System::Boolean IsDisabled; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_CREATECUSTOMEFFECBYTIMELINE__CTOR_OFFSET))(this);
		}

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_CREATECUSTOMEFFECBYTIMELINE_GET_EVENTNAME_OFFSET))(this);
		}

		::System::Void CreateCustomEffect(::System::String* effectKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_CREATECUSTOMEFFECBYTIMELINE_CREATECUSTOMEFFECT_OFFSET))(this, effectKey);
		}

		::System::Void BuildDataPathInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_CREATECUSTOMEFFECBYTIMELINE_BUILDDATAPATHINTERNAL_OFFSET))(this);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_CREATECUSTOMEFFECBYTIMELINE_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::System::Void CollectVariableInternal(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector collector)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_CREATECUSTOMEFFECBYTIMELINE_COLLECTVARIABLEINTERNAL_OFFSET))(this, collector);
		}

		::System::Void ReceiveNotifyBegin(::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_CREATECUSTOMEFFECBYTIMELINE_RECEIVENOTIFYBEGIN_OFFSET))(this, context);
		}

		::System::Void ReceiveNotifyTick(::PipelineCamera::CameraSequence::CameraSequenceContext*& context, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_CREATECUSTOMEFFECBYTIMELINE_RECEIVENOTIFYTICK_OFFSET))(this, context, deltaTime);
		}

		::System::Void ReceiveNotifyEnd(::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_CREATECUSTOMEFFECBYTIMELINE_RECEIVENOTIFYEND_OFFSET))(this, context);
		}
	};
}
