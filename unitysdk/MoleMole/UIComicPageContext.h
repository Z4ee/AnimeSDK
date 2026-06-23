#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace MoleMole { class ComicConfig; }
namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UICOMICPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17F68CE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIComicPageContext_TypeDefinitionIndex = 51506;

	class UIComicPageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* TitleKey; // 0x28
		::System::Action* executeWhenFadeOutStart; // 0x30
		::System::String* IntroKey; // 0x38
		::System::String* FadeOutParam; // 0x40
		::MoleMole::ComicConfig* ComicConfig; // 0x48
		::System::String* FadeInParam; // 0x50
		::System::String* UIPlayMode; // 0x58
		::System::Action* startOutsideFadeOutAction; // 0x60
		::System::Int32 PerformId; // 0x68
		::System::Boolean UseWhiteMaskFadeIn; // 0x6C
		::System::Boolean UseWhiteMaskFadeOut; // 0x6D
		::System::Boolean ConnectCutScene; // 0x6E
		::System::Boolean overrideFadeOutByOuside; // 0x6F
		::System::Boolean connectExitHollow; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
