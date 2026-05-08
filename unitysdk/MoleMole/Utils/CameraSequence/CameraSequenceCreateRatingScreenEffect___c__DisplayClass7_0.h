#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Utils::CameraSequence { class CameraSequenceCreateRatingScreenEffect; }
namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }

#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATERATINGSCREENEFFECT___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE490050)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATERATINGSCREENEFFECT___C__DISPLAYCLASS7_0__RECEIVENOTIFYBEGIN_B__0_OFFSET UNITYSDK_OFFSET(0xE490060)

namespace MoleMole::Utils::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceCreateRatingScreenEffect___c__DisplayClass7_0_TypeDefinitionIndex = 68122;

	class CameraSequenceCreateRatingScreenEffect___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::PipelineCamera::CameraSequence::CameraSequenceContext* captureContext; // 0x10
		::MoleMole::Utils::CameraSequence::CameraSequenceCreateRatingScreenEffect* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATERATINGSCREENEFFECT___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Single _ReceiveNotifyBegin_b__0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATERATINGSCREENEFFECT___C__DISPLAYCLASS7_0__RECEIVENOTIFYBEGIN_B__0_OFFSET))(this);
		}
	};
}
