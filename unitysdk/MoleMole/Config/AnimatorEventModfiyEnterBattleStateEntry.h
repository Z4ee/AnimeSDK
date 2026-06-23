#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"
#include "unitysdk/MoleMole/Config/EnterBattleState.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTMODFIYENTERBATTLESTATEENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x170317A0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTMODFIYENTERBATTLESTATEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x17031820)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventModfiyEnterBattleStateEntry_TypeDefinitionIndex = 77697;

	class AnimatorEventModfiyEnterBattleStateEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::String* Tag; // 0x58
		::System::Boolean IsPush; // 0x60
		::MoleMole::Config::EnterBattleState State; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTMODFIYENTERBATTLESTATEENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTMODFIYENTERBATTLESTATEENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}
