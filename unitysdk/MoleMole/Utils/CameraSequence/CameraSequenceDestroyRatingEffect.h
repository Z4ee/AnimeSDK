#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Utils/CameraSequence/CameraSequenceRatingEffect.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }
namespace System { class String; }

#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEDESTROYRATINGEFFECT_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0xF3ACEA0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEDESTROYRATINGEFFECT_RECEIVENOTIFYBEGIN_OFFSET UNITYSDK_OFFSET(0xF3AD130)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEDESTROYRATINGEFFECT_RECEIVENOTIFYEND_OFFSET UNITYSDK_OFFSET(0xF3ACEE0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEDESTROYRATINGEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0xF3AD180)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEDESTROYRATINGEFFECT___BASE_RECEIVENOTIFYBEGIN_OFFSET UNITYSDK_OFFSET(0xF3AD1D0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEDESTROYRATINGEFFECT___BASE_RECEIVENOTIFYEND_OFFSET UNITYSDK_OFFSET(0xF3AD260)

namespace MoleMole::Utils::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceDestroyRatingEffect_TypeDefinitionIndex = 79220;

	class CameraSequenceDestroyRatingEffect : public ::MoleMole::Utils::CameraSequence::CameraSequenceRatingEffect
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEDESTROYRATINGEFFECT__CTOR_OFFSET))(this);
		}

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEDESTROYRATINGEFFECT_GET_EVENTNAME_OFFSET))(this);
		}

		::System::Void ReceiveNotifyEnd(::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEDESTROYRATINGEFFECT_RECEIVENOTIFYEND_OFFSET))(this, context);
		}

		::System::Void ReceiveNotifyBegin(::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEDESTROYRATINGEFFECT_RECEIVENOTIFYBEGIN_OFFSET))(this, context);
		}

		::System::Void __base_ReceiveNotifyBegin(::PipelineCamera::CameraSequence::CameraSequenceContext*& P0)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEDESTROYRATINGEFFECT___BASE_RECEIVENOTIFYBEGIN_OFFSET))(this, P0);
		}

		::System::Void __base_ReceiveNotifyEnd(::PipelineCamera::CameraSequence::CameraSequenceContext*& P0)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEDESTROYRATINGEFFECT___BASE_RECEIVENOTIFYEND_OFFSET))(this, P0);
		}
	};
}
