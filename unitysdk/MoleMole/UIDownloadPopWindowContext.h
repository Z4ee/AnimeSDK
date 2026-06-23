#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/LanguageVoiceType.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIDOWNLOADPOPWINDOWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16776850)

namespace MoleMole
{
	inline static constexpr unsigned int UIDownloadPopWindowContext_TypeDefinitionIndex = 48552;

	class UIDownloadPopWindowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* AudioShowName; // 0x28
		::System::Action* SuccessCallback; // 0x30
		::MoleMole::LanguageVoiceType LanguageVoiceType; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOWNLOADPOPWINDOWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
