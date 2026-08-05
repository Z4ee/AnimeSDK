#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Utils::CameraSequence { class CameraSequenceCreateRatingScreenEffect; }
namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }

#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATERATINGSCREENEFFECT___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11C2DFF0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATERATINGSCREENEFFECT___C__DISPLAYCLASS7_0__RECEIVENOTIFYBEGIN_B__0_OFFSET UNITYSDK_OFFSET(0x11C2E000)

namespace MoleMole::Utils::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceCreateRatingScreenEffect___c__DisplayClass7_0_TypeDefinitionIndex = 45408;

	class CameraSequenceCreateRatingScreenEffect___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::MoleMole::Utils::CameraSequence::CameraSequenceCreateRatingScreenEffect* __4__this; // 0x10
		::PipelineCamera::CameraSequence::CameraSequenceContext* captureContext; // 0x18

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
