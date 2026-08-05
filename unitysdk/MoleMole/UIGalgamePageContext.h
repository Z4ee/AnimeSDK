#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_12F6163CF7119BC1.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGALGAMEPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19ABB750)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageContext_TypeDefinitionIndex = 88633;

	class UIGalgamePageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* FadeOutParam; // 0x28
		::System::String* TitleKey; // 0x30
		::System::Action* startOutsideFadeOutAction; // 0x38
		::System::Action* executeWhenFadeOutStartAction; // 0x40
		::System::Collections::Generic::List_1<::System::String*>* ExitSoundActionList; // 0x48
		::System::String* UIPlayMode; // 0x50
		::System::String* IntroKey; // 0x58
		::System::String* FadeInParam; // 0x60
		::Enum_3_12F6163CF7119BC1 SwitchSceneOnStart; // 0x68
		::System::Boolean useProtectTime; // 0x6C
		::System::Boolean UseWhiteMaskFadeOut; // 0x6D
		::System::Boolean UseWhiteMaskFadeIn; // 0x6E
		::System::Boolean overrideFadeOutByOuside; // 0x6F
		::System::Int32 PerformId; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
