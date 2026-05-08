#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/LanguageFontSizeConfig.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_LANGUAGEFONTSIZEADAPTIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x11CB77B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int LanguageFontSizeAdaptive_TypeDefinitionIndex = 54230;

	class LanguageFontSizeAdaptive : public ::System::Object
	{
	public:
		::System::String* usageName; // 0x10
		::System::Boolean forceBestFit; // 0x18
		::System::Collections::Generic::List_1<::MoleMole::Config::LanguageFontSizeConfig>* configs; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LANGUAGEFONTSIZEADAPTIVE__CTOR_OFFSET))(this);
		}
	};
}
