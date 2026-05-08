#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTEXECUTEENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0xF969B50)
#define MOLEMOLE_CONFIG_ANIMATOREVENTEXECUTEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0xF969BD0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventExecuteEntry_TypeDefinitionIndex = 54881;

	class AnimatorEventExecuteEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::String* TriggerParamName; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTEXECUTEENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTEXECUTEENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}
