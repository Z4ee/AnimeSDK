#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigWeakPanel_CWeakPanelColor; }
namespace MoleMole { class ConfigWeakPanel_CWeakPanelColorDic; }

#define MOLEMOLE_CONFIGWEAKPANEL__CTOR_OFFSET UNITYSDK_OFFSET(0x14882870)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigWeakPanel_TypeDefinitionIndex = 77978;

	class ConfigWeakPanel : public ::System::Object
	{
	public:
		::MoleMole::ConfigWeakPanel_CWeakPanelColorDic* ColorDic; // 0x10
		::MoleMole::ConfigWeakPanel_CWeakPanelColor* DefaultColor; // 0x18
		::MoleMole::ConfigWeakPanel_CWeakPanelColor* LockColor; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGWEAKPANEL__CTOR_OFFSET))(this);
		}
	};
}
