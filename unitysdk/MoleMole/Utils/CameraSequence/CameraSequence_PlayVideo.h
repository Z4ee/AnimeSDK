#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceNotifyStateEvent.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"

namespace MoleMole::Utils::CameraSequence { class CameraSequence_VideoItem_ComposeObject; }
namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class CanvasGroup; }

#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_PLAYVIDEO_BUILDDATAPATHINTERNAL_OFFSET UNITYSDK_OFFSET(0x112E6A30)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_PLAYVIDEO_COLLECTVARIABLEINTERNAL_OFFSET UNITYSDK_OFFSET(0x112E6AD0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_PLAYVIDEO_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x112E69F0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_PLAYVIDEO_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x112E6AC0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_PLAYVIDEO_RECEIVENOTIFYBEGIN_OFFSET UNITYSDK_OFFSET(0x112E6C30)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_PLAYVIDEO_RECEIVENOTIFYEND_OFFSET UNITYSDK_OFFSET(0x112E7620)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_PLAYVIDEO_RECEIVENOTIFYTICK_OFFSET UNITYSDK_OFFSET(0x112E75C0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_PLAYVIDEO__AUTOCHECK_OFFSET UNITYSDK_OFFSET(0x112E6A70)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_PLAYVIDEO__CTOR_OFFSET UNITYSDK_OFFSET(0x112E7670)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_PLAYVIDEO__ONFINISHED_OFFSET UNITYSDK_OFFSET(0x112E7490)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_PLAYVIDEO__RECEIVENOTIFYBEGIN_G___UPDATESETALPHA_13_0_OFFSET UNITYSDK_OFFSET(0x112E7440)

namespace MoleMole::Utils::CameraSequence
{
	inline static constexpr unsigned int CameraSequence_PlayVideo_TypeDefinitionIndex = 41847;

	class CameraSequence_PlayVideo : public ::PipelineCamera::CameraSequence::CameraSequenceNotifyStateEvent
	{
	public:
		::MoleMole::Utils::CameraSequence::CameraSequence_VideoItem_ComposeObject* composeConfig; // 0x50
		::System::String* composeConfigKey; // 0x58
		::System::Boolean openBlackCurtainAfterFinished; // 0x60
		::System::Boolean openTriggerPerformEnd; // 0x61
		::System::Boolean openAlphaSetting; // 0x62
		::UnityEngine::AnimationCurve* alphaCurve; // 0x68
		::System::Int32 _finishRefCount; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_PLAYVIDEO__CTOR_OFFSET))(this);
		}

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_PLAYVIDEO_GET_EVENTNAME_OFFSET))(this);
		}

		::System::Void BuildDataPathInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_PLAYVIDEO_BUILDDATAPATHINTERNAL_OFFSET))(this);
		}

		::System::Void _Autocheck()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_PLAYVIDEO__AUTOCHECK_OFFSET))(this);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_PLAYVIDEO_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::System::Void CollectVariableInternal(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector collector)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_PLAYVIDEO_COLLECTVARIABLEINTERNAL_OFFSET))(this, collector);
		}

		::System::Void ReceiveNotifyBegin(::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_PLAYVIDEO_RECEIVENOTIFYBEGIN_OFFSET))(this, context);
		}

		::System::Void _OnFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_PLAYVIDEO__ONFINISHED_OFFSET))(this);
		}

		::System::Void ReceiveNotifyTick(::PipelineCamera::CameraSequence::CameraSequenceContext*& context, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_PLAYVIDEO_RECEIVENOTIFYTICK_OFFSET))(this, context, deltaTime);
		}

		::System::Void ReceiveNotifyEnd(::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_PLAYVIDEO_RECEIVENOTIFYEND_OFFSET))(this, context);
		}

		static ::System::Collections::IEnumerator* _ReceiveNotifyBegin_g___UpdateSetAlpha_13_0(::UnityEngine::CanvasGroup* cg, ::UnityEngine::AnimationCurve* curve)
		{
			return ((::System::Collections::IEnumerator*(*)(::UnityEngine::CanvasGroup*, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_PLAYVIDEO__RECEIVENOTIFYBEGIN_G___UPDATESETALPHA_13_0_OFFSET))(cg, curve);
		}
	};
}
