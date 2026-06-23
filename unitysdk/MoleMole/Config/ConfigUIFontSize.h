#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class LanguageFontSizeAdaptive; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGUIFONTSIZE__CTOR_OFFSET UNITYSDK_OFFSET(0x144EAA40)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigUIFontSize_TypeDefinitionIndex = 72466;

	class ConfigUIFontSize : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::LanguageFontSizeAdaptive*>* fontSizeAdaptations; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIFONTSIZE__CTOR_OFFSET))(this);
		}
	};
}
