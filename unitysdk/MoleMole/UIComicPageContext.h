#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace MoleMole { class ComicConfig; }
namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UICOMICPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16CA1980)

namespace MoleMole
{
	inline static constexpr unsigned int UIComicPageContext_TypeDefinitionIndex = 41015;

	class UIComicPageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* startOutsideFadeOutAction; // 0x28
		::System::String* FadeInParam; // 0x30
		::System::String* FadeOutParam; // 0x38
		::MoleMole::ComicConfig* ComicConfig; // 0x40
		::System::Action* executeWhenFadeOutStart; // 0x48
		::System::String* UIPlayMode; // 0x50
		::System::String* TitleKey; // 0x58
		::System::String* IntroKey; // 0x60
		::System::Boolean overrideFadeOutByOuside; // 0x68
		::System::Boolean connectExitHollow; // 0x69
		::System::Boolean ConnectCutScene; // 0x6A
		::System::Int32 PerformId; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
