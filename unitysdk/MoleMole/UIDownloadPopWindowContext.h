#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/LanguageVoiceType.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIDOWNLOADPOPWINDOWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16488F70)

namespace MoleMole
{
	inline static constexpr unsigned int UIDownloadPopWindowContext_TypeDefinitionIndex = 65011;

	class UIDownloadPopWindowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* SuccessCallback; // 0x28
		::System::String* AudioShowName; // 0x30
		::MoleMole::LanguageVoiceType LanguageVoiceType; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOWNLOADPOPWINDOWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
