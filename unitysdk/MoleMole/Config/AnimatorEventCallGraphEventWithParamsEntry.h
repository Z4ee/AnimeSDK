#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace MoleMole::Config { class ConfigDynamicValue; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTCALLGRAPHEVENTWITHPARAMSENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x159DA750)
#define MOLEMOLE_CONFIG_ANIMATOREVENTCALLGRAPHEVENTWITHPARAMSENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x159DA7D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventCallGraphEventWithParamsEntry_TypeDefinitionIndex = 56316;

	class AnimatorEventCallGraphEventWithParamsEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::String* AbilityName; // 0x58
		::System::String* EventName; // 0x60
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigDynamicValue*>* Params; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTCALLGRAPHEVENTWITHPARAMSENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTCALLGRAPHEVENTWITHPARAMSENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}
