#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Utils/CameraSequence/CameraSequenceRatingEffect.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }
namespace System { class String; }

#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTOPRATINGFOGEFFECT_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x15B1FF00)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTOPRATINGFOGEFFECT_RECEIVENOTIFYBEGIN_OFFSET UNITYSDK_OFFSET(0x15B1FF40)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTOPRATINGFOGEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x15B20040)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTOPRATINGFOGEFFECT___BASE_RECEIVENOTIFYBEGIN_OFFSET UNITYSDK_OFFSET(0x15B20090)

namespace MoleMole::Utils::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceStopRatingFogEffect_TypeDefinitionIndex = 64062;

	class CameraSequenceStopRatingFogEffect : public ::MoleMole::Utils::CameraSequence::CameraSequenceRatingEffect
	{
	public:
		::System::Boolean IsStopAll; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTOPRATINGFOGEFFECT__CTOR_OFFSET))(this);
		}

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTOPRATINGFOGEFFECT_GET_EVENTNAME_OFFSET))(this);
		}

		::System::Void ReceiveNotifyBegin(::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTOPRATINGFOGEFFECT_RECEIVENOTIFYBEGIN_OFFSET))(this, context);
		}

		::System::Void __base_ReceiveNotifyBegin(::PipelineCamera::CameraSequence::CameraSequenceContext*& P0)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTOPRATINGFOGEFFECT___BASE_RECEIVENOTIFYBEGIN_OFFSET))(this, P0);
		}
	};
}
