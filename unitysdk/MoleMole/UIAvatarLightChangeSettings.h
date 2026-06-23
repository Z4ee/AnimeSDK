#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EAvatarLightChangeType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define MOLEMOLE_UIAVATARLIGHTCHANGESETTINGS_ONCONFIGCHANGED_OFFSET UNITYSDK_OFFSET(0x84D9F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarLightChangeSettings_TypeDefinitionIndex = 49802;

	struct alignas(8) UIAvatarLightChangeSettings
	{
		::MoleMole::EAvatarLightChangeType changeType; // 0x10
		::System::String* curverKey; // 0x18
		::System::Single duration; // 0x20

		::System::Void OnConfigChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARLIGHTCHANGESETTINGS_ONCONFIGCHANGED_OFFSET))(this);
		}
	};
}
