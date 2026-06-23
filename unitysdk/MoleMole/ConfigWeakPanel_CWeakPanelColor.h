#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

#define MOLEMOLE_CONFIGWEAKPANEL_CWEAKPANELCOLOR__CTOR_OFFSET UNITYSDK_OFFSET(0x17E49A30)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigWeakPanel_CWeakPanelColor_TypeDefinitionIndex = 59620;

	class ConfigWeakPanel_CWeakPanelColor : public ::System::Object
	{
	public:
		::UnityEngine::Color color; // 0x10
		::UnityEngine::Color bgColor; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGWEAKPANEL_CWEAKPANELCOLOR__CTOR_OFFSET))(this);
		}
	};
}
