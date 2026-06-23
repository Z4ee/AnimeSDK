#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Utils/CameraSequence/CameraSequenceRatingEffect.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }
namespace System { class String; }

#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATECUSTOMSCREENEFFECT_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x139E0BB0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATECUSTOMSCREENEFFECT_RECEIVENOTIFYBEGIN_OFFSET UNITYSDK_OFFSET(0x139E0BF0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATECUSTOMSCREENEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x139E0FC0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATECUSTOMSCREENEFFECT___BASE_RECEIVENOTIFYBEGIN_OFFSET UNITYSDK_OFFSET(0x139E1010)

namespace MoleMole::Utils::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceCreateCustomScreenEffect_TypeDefinitionIndex = 64945;

	class CameraSequenceCreateCustomScreenEffect : public ::MoleMole::Utils::CameraSequence::CameraSequenceRatingEffect
	{
	public:
		::System::String* CustomScreenEffectKey; // 0x58
		::System::Boolean IsDisabled; // 0x60
		::System::Boolean IsAudioDisabled; // 0x61

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATECUSTOMSCREENEFFECT__CTOR_OFFSET))(this);
		}

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATECUSTOMSCREENEFFECT_GET_EVENTNAME_OFFSET))(this);
		}

		::System::Void ReceiveNotifyBegin(::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATECUSTOMSCREENEFFECT_RECEIVENOTIFYBEGIN_OFFSET))(this, context);
		}

		::System::Void __base_ReceiveNotifyBegin(::PipelineCamera::CameraSequence::CameraSequenceContext*& P0)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATECUSTOMSCREENEFFECT___BASE_RECEIVENOTIFYBEGIN_OFFSET))(this, P0);
		}
	};
}
