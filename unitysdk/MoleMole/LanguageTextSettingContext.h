#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/LanguageType.h"
#include "unitysdk/MoleMole/SystemSettingContextBase.h"

#define MOLEMOLE_LANGUAGETEXTSETTINGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16B92930)

namespace MoleMole
{
	inline static constexpr unsigned int LanguageTextSettingContext_TypeDefinitionIndex = 48291;

	class LanguageTextSettingContext : public ::MoleMole::SystemSettingContextBase
	{
	public:
		::MoleMole::LanguageType languageType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LANGUAGETEXTSETTINGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
