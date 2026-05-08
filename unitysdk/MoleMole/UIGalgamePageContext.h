#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_97716B758EE03609.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGALGAMEPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16EFA310)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageContext_TypeDefinitionIndex = 51748;

	class UIGalgamePageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* FadeOutParam; // 0x28
		::System::String* IntroKey; // 0x30
		::System::Collections::Generic::List_1<::System::String*>* ExitSoundActionList; // 0x38
		::System::Action* executeWhenFadeOutStartAction; // 0x40
		::System::String* TitleKey; // 0x48
		::System::Action* startOutsideFadeOutAction; // 0x50
		::System::String* UIPlayMode; // 0x58
		::System::String* FadeInParam; // 0x60
		::Enum_3_97716B758EE03609 SwitchSceneOnStart; // 0x68
		::System::Int32 PerformId; // 0x6C
		::System::Boolean overrideFadeOutByOuside; // 0x70
		::System::Boolean useProtectTime; // 0x71

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
