#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonoInControlButton; }

#define RPG_UINAVIGATION_UINAVIGATIONZONECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19D606D0)

namespace RPG::UINavigation
{
	inline static constexpr unsigned int UINavigationZoneConfig_TypeDefinitionIndex = 49413;

	class UINavigationZoneConfig : public ::System::Object
	{
	public:
		::System::Boolean EnterOnEnable; // 0x10
		::RPG::Client::MonoInControlButton* EnterOnInControlButtonClick; // 0x18
		::System::Boolean GamepadZone; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONECONFIG__CTOR_OFFSET))(this);
		}
	};
}
