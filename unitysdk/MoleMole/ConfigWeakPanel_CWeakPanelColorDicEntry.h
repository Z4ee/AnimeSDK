#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_6D8F67438AED9E06.h"
#include "unitysdk/MoleMole/DataStructures/Lists/EasySerializeDictionaryEntry_2.h"

namespace MoleMole { class ConfigWeakPanel_CWeakPanelColor; }

#define MOLEMOLE_CONFIGWEAKPANEL_CWEAKPANELCOLORDICENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x157D8B80)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigWeakPanel_CWeakPanelColorDicEntry_TypeDefinitionIndex = 59618;

	class ConfigWeakPanel_CWeakPanelColorDicEntry : public ::MoleMole::DataStructures::Lists::EasySerializeDictionaryEntry_2<::Enum_3_6D8F67438AED9E06, ::MoleMole::ConfigWeakPanel_CWeakPanelColor*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGWEAKPANEL_CWEAKPANELCOLORDICENTRY__CTOR_OFFSET))(this);
		}
	};
}
