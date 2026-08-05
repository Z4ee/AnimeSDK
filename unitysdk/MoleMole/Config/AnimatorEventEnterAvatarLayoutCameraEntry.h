#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTENTERAVATARLAYOUTCAMERAENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x1145B600)
#define MOLEMOLE_CONFIG_ANIMATOREVENTENTERAVATARLAYOUTCAMERAENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1145B680)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventEnterAvatarLayoutCameraEntry_TypeDefinitionIndex = 50836;

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
