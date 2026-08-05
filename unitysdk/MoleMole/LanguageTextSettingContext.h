#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/LanguageType.h"
#include "unitysdk/MoleMole/SystemSettingContextBase.h"

#define MOLEMOLE_LANGUAGETEXTSETTINGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19BF6D00)

namespace MoleMole
{
	inline static constexpr unsigned int LanguageTextSettingContext_TypeDefinitionIndex = 73284;

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
