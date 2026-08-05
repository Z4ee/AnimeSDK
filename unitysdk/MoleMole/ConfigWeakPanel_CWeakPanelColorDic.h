#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7B49759BB8053593.h"
#include "unitysdk/MoleMole/DataStructures/Lists/EasySerializeDictionary_3.h"

namespace MoleMole { class ConfigWeakPanel_CWeakPanelColor; }
namespace MoleMole { class ConfigWeakPanel_CWeakPanelColorDicEntry; }

#define MOLEMOLE_CONFIGWEAKPANEL_CWEAKPANELCOLORDIC__CTOR_OFFSET UNITYSDK_OFFSET(0x1A94EA50)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigWeakPanel_CWeakPanelColorDic_TypeDefinitionIndex = 77979;

	class ConfigWeakPanel_CWeakPanelColorDic : public ::MoleMole::DataStructures::Lists::EasySerializeDictionary_3<::Enum_3_7B49759BB8053593, ::MoleMole::ConfigWeakPanel_CWeakPanelColor*, ::MoleMole::ConfigWeakPanel_CWeakPanelColorDicEntry*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGWEAKPANEL_CWEAKPANELCOLORDIC__CTOR_OFFSET))(this);
		}
	};
}
