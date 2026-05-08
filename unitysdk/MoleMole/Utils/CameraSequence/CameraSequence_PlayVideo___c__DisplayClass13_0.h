#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIFullScreenVideoV2PopInNormalWindowController; }
namespace MoleMole::Utils::CameraSequence { class CameraSequence_PlayVideo; }

#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_PLAYVIDEO___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11340700)

namespace MoleMole::Utils::CameraSequence
{
	inline static constexpr unsigned int CameraSequence_PlayVideo___c__DisplayClass13_0_TypeDefinitionIndex = 40066;

	class CameraSequence_PlayVideo___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::MoleMole::UIFullScreenVideoV2PopInNormalWindowController* ctrl; // 0x10
		::MoleMole::Utils::CameraSequence::CameraSequence_PlayVideo* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_PLAYVIDEO___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}
	};
}
