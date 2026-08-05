#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTEXITAVATARLAYOUTCAMERAENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x17289030)
#define MOLEMOLE_CONFIG_ANIMATOREVENTEXITAVATARLAYOUTCAMERAENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x172890B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventExitAvatarLayoutCameraEntry_TypeDefinitionIndex = 59015;

	class AnimatorEventExitAvatarLayoutCameraEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::String* CameraKey; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTEXITAVATARLAYOUTCAMERAENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTEXITAVATARLAYOUTCAMERAENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}
