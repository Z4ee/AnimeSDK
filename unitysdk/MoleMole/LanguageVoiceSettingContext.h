#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/LanguageVoiceType.h"
#include "unitysdk/MoleMole/SystemSettingContextBase.h"

#define MOLEMOLE_LANGUAGEVOICESETTINGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x13A95060)

namespace MoleMole
{
	inline static constexpr unsigned int LanguageVoiceSettingContext_TypeDefinitionIndex = 53576;

	class LanguageVoiceSettingContext : public ::MoleMole::SystemSettingContextBase
	{
	public:
		::MoleMole::LanguageVoiceType languageVoiceType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LANGUAGEVOICESETTINGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
