#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/MoleMole/Utils/CameraSequence/RestoreMotionBlurPolicy.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceNotifyStateEvent.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }
namespace System { class String; }

#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_DISABLEMOTIONBLUR_BUILDDATAPATHINTERNAL_OFFSET UNITYSDK_OFFSET(0xF966960)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_DISABLEMOTIONBLUR_COLLECTVARIABLEINTERNAL_OFFSET UNITYSDK_OFFSET(0xF9669E0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_DISABLEMOTIONBLUR_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0xF966920)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_DISABLEMOTIONBLUR_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0xF9669D0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_DISABLEMOTIONBLUR_RECEIVENOTIFYBEGIN_OFFSET UNITYSDK_OFFSET(0xF966B40)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_DISABLEMOTIONBLUR_RECEIVENOTIFYEND_OFFSET UNITYSDK_OFFSET(0xF966DD0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_DISABLEMOTIONBLUR_RECEIVENOTIFYTICK_OFFSET UNITYSDK_OFFSET(0xF966D70)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_DISABLEMOTIONBLUR__CCTOR_OFFSET UNITYSDK_OFFSET(0xF9670A0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_DISABLEMOTIONBLUR__CTOR_OFFSET UNITYSDK_OFFSET(0xF967050)

namespace MoleMole::Utils::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceStateEvent_DisableMotionBlur_TypeDefinitionIndex = 64622;

	class CameraSequenceStateEvent_DisableMotionBlur : public ::PipelineCamera::CameraSequence::CameraSequenceNotifyStateEvent
	{
	public:
		static ::Foundation::Unreal::FName* StaticGet_EnterValue()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceStateEvent_DisableMotionBlur_TypeDefinitionIndex)->GetStaticField(0x11630);
		}
		::MoleMole::Utils::CameraSequence::RestoreMotionBlurPolicy restorePolicy; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_DISABLEMOTIONBLUR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_DISABLEMOTIONBLUR__CCTOR_OFFSET))();
		}

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_DISABLEMOTIONBLUR_GET_EVENTNAME_OFFSET))(this);
		}

		::System::Void BuildDataPathInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_DISABLEMOTIONBLUR_BUILDDATAPATHINTERNAL_OFFSET))(this);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_DISABLEMOTIONBLUR_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::System::Void CollectVariableInternal(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector collector)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_DISABLEMOTIONBLUR_COLLECTVARIABLEINTERNAL_OFFSET))(this, collector);
		}

		::System::Void ReceiveNotifyBegin(::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_DISABLEMOTIONBLUR_RECEIVENOTIFYBEGIN_OFFSET))(this, context);
		}

		::System::Void ReceiveNotifyTick(::PipelineCamera::CameraSequence::CameraSequenceContext*& context, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_DISABLEMOTIONBLUR_RECEIVENOTIFYTICK_OFFSET))(this, context, deltaTime);
		}

		::System::Void ReceiveNotifyEnd(::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_DISABLEMOTIONBLUR_RECEIVENOTIFYEND_OFFSET))(this, context);
		}
	};
}
