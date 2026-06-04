#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PropSelectionStateConfig; }

#define RPG_CLIENT_PROPSELECTIONEFFECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xC668670)

namespace RPG::Client
{
	inline static constexpr unsigned int PropSelectionEffectConfig_TypeDefinitionIndex = 56312;

	class PropSelectionEffectConfig : public ::System::Object
	{
	public:
		::RPG::Client::PropSelectionStateConfig* HoverState; // 0x10
		::RPG::Client::PropSelectionStateConfig* SelectState; // 0x18
		::RPG::Client::PropSelectionStateConfig* DisableState; // 0x20
		::System::Single FadeInTime; // 0x28
		::System::Single FadeOutTime; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPSELECTIONEFFECTCONFIG__CTOR_OFFSET))(this);
		}
	};
}
