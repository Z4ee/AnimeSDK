#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTENTERAVATARLAYOUTCAMERAENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x124093F0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTENTERAVATARLAYOUTCAMERAENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x12409470)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventEnterAvatarLayoutCameraEntry_TypeDefinitionIndex = 47911;

	class AnimatorEventEnterAvatarLayoutCameraEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::String* CameraKey; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTENTERAVATARLAYOUTCAMERAENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTENTERAVATARLAYOUTCAMERAENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}
