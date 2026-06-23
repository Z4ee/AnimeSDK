#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTANIMPATTERNENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x106B92D0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTANIMPATTERNENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x106B9360)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventAnimPatternEntry_TypeDefinitionIndex = 47879;

	class AnimatorEventAnimPatternEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::Il2CppArray<::System::String*>* tagMask; // 0x58
		::System::String* AnimEventID; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTANIMPATTERNENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTANIMPATTERNENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}
