#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGENTITYCAMERASTRETCH__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4AC3A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityCameraStretch_TypeDefinitionIndex = 83857;

	class ConfigEntityCameraStretch : public ::System::Object
	{
	public:
		::System::String* StretchConfigKey; // 0x10
		::System::Boolean StretchOnNotHit; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCAMERASTRETCH__CTOR_OFFSET))(this);
		}
	};
}
