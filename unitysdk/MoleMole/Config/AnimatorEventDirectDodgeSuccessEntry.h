#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTDIRECTDODGESUCCESSENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0xF12DA70)
#define MOLEMOLE_CONFIG_ANIMATOREVENTDIRECTDODGESUCCESSENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0xF12DAF0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventDirectDodgeSuccessEntry_TypeDefinitionIndex = 85841;

	class AnimatorEventDirectDodgeSuccessEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTDIRECTDODGESUCCESSENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTDIRECTDODGESUCCESSENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}
