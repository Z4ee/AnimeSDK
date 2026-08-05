#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/MoleMole/Utils/CameraSequence/CameraSequenceRatingEffect.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }
namespace System { class String; }

#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTOPSCREENEFFECT_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x10AFA600)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTOPSCREENEFFECT_RECEIVENOTIFYBEGIN_OFFSET UNITYSDK_OFFSET(0x10AFA640)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTOPSCREENEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x10AFA9B0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTOPSCREENEFFECT___BASE_RECEIVENOTIFYBEGIN_OFFSET UNITYSDK_OFFSET(0x10AFAA00)

namespace MoleMole::Utils::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceStopScreenEffect_TypeDefinitionIndex = 89777;

	class CameraSequenceStopScreenEffect : public ::MoleMole::Utils::CameraSequence::CameraSequenceRatingEffect
	{
	public:
		::Il2CppArray<::MoleMole::Config::ScreenEffectType>* StopScreenEffectTypes; // 0x58
		::System::Boolean IsStopAll; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTOPSCREENEFFECT__CTOR_OFFSET))(this);
		}

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTOPSCREENEFFECT_GET_EVENTNAME_OFFSET))(this);
		}

		::System::Void ReceiveNotifyBegin(::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTOPSCREENEFFECT_RECEIVENOTIFYBEGIN_OFFSET))(this, context);
		}

		::System::Void __base_ReceiveNotifyBegin(::PipelineCamera::CameraSequence::CameraSequenceContext*& P0)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTOPSCREENEFFECT___BASE_RECEIVENOTIFYBEGIN_OFFSET))(this, P0);
		}
	};
}
