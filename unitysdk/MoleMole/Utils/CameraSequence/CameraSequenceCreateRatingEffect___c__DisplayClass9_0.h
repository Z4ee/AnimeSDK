#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Utils::CameraSequence { class CameraSequenceCreateRatingEffect; }
namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }

#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATERATINGEFFECT___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1133F890)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATERATINGEFFECT___C__DISPLAYCLASS9_0__RECEIVENOTIFYBEGIN_B__0_OFFSET UNITYSDK_OFFSET(0x1133F8A0)

namespace MoleMole::Utils::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceCreateRatingEffect___c__DisplayClass9_0_TypeDefinitionIndex = 62329;

	class CameraSequenceCreateRatingEffect___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::PipelineCamera::CameraSequence::CameraSequenceContext* captureContext; // 0x10
		::MoleMole::Utils::CameraSequence::CameraSequenceCreateRatingEffect* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATERATINGEFFECT___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Single _ReceiveNotifyBegin_b__0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATERATINGEFFECT___C__DISPLAYCLASS9_0__RECEIVENOTIFYBEGIN_B__0_OFFSET))(this);
		}
	};
}
