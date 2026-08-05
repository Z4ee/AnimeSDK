#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Utils/CameraSequence/CameraSequenceRatingEffect.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }
namespace System { class String; }

#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATECUSTOMFOGEFFECT_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x141050A0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATECUSTOMFOGEFFECT_RECEIVENOTIFYBEGIN_OFFSET UNITYSDK_OFFSET(0x141050E0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATECUSTOMFOGEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x14105210)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATECUSTOMFOGEFFECT___BASE_RECEIVENOTIFYBEGIN_OFFSET UNITYSDK_OFFSET(0x14105260)

namespace MoleMole::Utils::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceCreateCustomFogEffect_TypeDefinitionIndex = 58733;

	class CameraSequenceCreateCustomFogEffect : public ::MoleMole::Utils::CameraSequence::CameraSequenceRatingEffect
	{
	public:
		::System::String* CustomFogEffectKey; // 0x58
		::System::Boolean IsDisabled; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATECUSTOMFOGEFFECT__CTOR_OFFSET))(this);
		}

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATECUSTOMFOGEFFECT_GET_EVENTNAME_OFFSET))(this);
		}

		::System::Void ReceiveNotifyBegin(::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATECUSTOMFOGEFFECT_RECEIVENOTIFYBEGIN_OFFSET))(this, context);
		}

		::System::Void __base_ReceiveNotifyBegin(::PipelineCamera::CameraSequence::CameraSequenceContext*& P0)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATECUSTOMFOGEFFECT___BASE_RECEIVENOTIFYBEGIN_OFFSET))(this, P0);
		}
	};
}
