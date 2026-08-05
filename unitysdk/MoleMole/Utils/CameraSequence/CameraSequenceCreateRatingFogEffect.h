#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Utils/CameraSequence/CameraSequenceRatingEffect.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }
namespace System { class String; }

#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATERATINGFOGEFFECT_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x1149B4D0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATERATINGFOGEFFECT_RECEIVENOTIFYBEGIN_OFFSET UNITYSDK_OFFSET(0x1149B510)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATERATINGFOGEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1149B680)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATERATINGFOGEFFECT___BASE_RECEIVENOTIFYBEGIN_OFFSET UNITYSDK_OFFSET(0x1149B720)

namespace MoleMole::Utils::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceCreateRatingFogEffect_TypeDefinitionIndex = 52902;

	class CameraSequenceCreateRatingFogEffect : public ::MoleMole::Utils::CameraSequence::CameraSequenceRatingEffect
	{
	public:
		::System::String* CustomRatingConfgsKey; // 0x58
		::System::String* ExtraRatingFogEffectKey; // 0x60
		::System::Boolean IsOnlyExtra; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATERATINGFOGEFFECT__CTOR_OFFSET))(this);
		}

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATERATINGFOGEFFECT_GET_EVENTNAME_OFFSET))(this);
		}

		::System::Void ReceiveNotifyBegin(::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATERATINGFOGEFFECT_RECEIVENOTIFYBEGIN_OFFSET))(this, context);
		}

		::System::Void __base_ReceiveNotifyBegin(::PipelineCamera::CameraSequence::CameraSequenceContext*& P0)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATERATINGFOGEFFECT___BASE_RECEIVENOTIFYBEGIN_OFFSET))(this, P0);
		}
	};
}
