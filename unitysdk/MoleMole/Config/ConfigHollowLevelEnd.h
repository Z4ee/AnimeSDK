#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWLEVELEND__CTOR_OFFSET UNITYSDK_OFFSET(0x18F36060)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowLevelEnd_TypeDefinitionIndex = 51988;

	class ConfigHollowLevelEnd : public ::System::Object
	{
	public:
		::System::String* onTriggerBattleGlitchKey; // 0x10
		::System::String* cameraZoomKey; // 0x18
		::System::String* onEnterBattleGlitchKey; // 0x20
		::System::String* cameraStretchKey; // 0x28
		::System::String* cameraShakeKey; // 0x30
		::System::String* onExitBattleGlitchKey; // 0x38
		::System::String* timeSlowKey; // 0x40
		::System::Single delayTimeSeconds; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWLEVELEND__CTOR_OFFSET))(this);
		}
	};
}
