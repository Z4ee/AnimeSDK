#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/UINavigation/UINavigation_Rule.h"
#include "unitysdk/System/Object.h"

namespace RPG::UINavigation { class UINavigation; }

#define RPG_UINAVIGATION_UINAVIGATIONBOUNDARYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xCFC1040)

namespace RPG::UINavigation
{
	inline static constexpr unsigned int UINavigationBoundaryConfig_TypeDefinitionIndex = 48412;

	class UINavigationBoundaryConfig : public ::System::Object
	{
	public:
		::RPG::UINavigation::UINavigation_Rule Rule; // 0x10
		::RPG::UINavigation::UINavigation* Recipient; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONBOUNDARYCONFIG__CTOR_OFFSET))(this);
		}
	};
}
