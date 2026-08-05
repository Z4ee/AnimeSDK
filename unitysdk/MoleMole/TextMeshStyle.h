#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/LanguageType.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_TEXTMESHSTYLE__CTOR_OFFSET UNITYSDK_OFFSET(0x173A9E80)

namespace MoleMole
{
	inline static constexpr unsigned int TextMeshStyle_TypeDefinitionIndex = 44733;

	class TextMeshStyle : public ::System::Object
	{
	public:
		::MoleMole::LanguageType languageType; // 0x10
		::System::Int32 FontSize; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TEXTMESHSTYLE__CTOR_OFFSET))(this);
		}
	};
}
