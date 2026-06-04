#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FuncUnlockHint; }

#define CLASS_1_870112F37A57C86F___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE484990)
#define CLASS_1_870112F37A57C86F___C__DISPLAYCLASS0_0__HANDLENOTIFYUNLOCKHINT_B__0_OFFSET UNITYSDK_OFFSET(0xE4849A0)

inline static constexpr unsigned int Class_1_870112F37A57C86F___c__DisplayClass0_0_TypeDefinitionIndex = 63639;

class Class_1_870112F37A57C86F___c__DisplayClass0_0 : public ::System::Object
{
public:
	::RPG::Client::FuncUnlockHint* unlockHint; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_870112F37A57C86F___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
	}

	::System::Void _HandleNotifyUnlockHint_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_870112F37A57C86F___C__DISPLAYCLASS0_0__HANDLENOTIFYUNLOCKHINT_B__0_OFFSET))(this);
	}
};
