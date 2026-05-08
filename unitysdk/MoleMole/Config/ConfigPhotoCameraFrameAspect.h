#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigPhotoCameraFrameAspect_Enum_3_B392488917E335A2.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGPHOTOCAMERAFRAMEASPECT__CTOR_OFFSET UNITYSDK_OFFSET(0x123130A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPhotoCameraFrameAspect_TypeDefinitionIndex = 45555;

	class ConfigPhotoCameraFrameAspect : public ::System::Object
	{
	public:
		::System::String* ObjectName; // 0x10
		::System::Single AspectRatio; // 0x18
		::MoleMole::Config::ConfigPhotoCameraFrameAspect_Enum_3_B392488917E335A2 aspectMode; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPHOTOCAMERAFRAMEASPECT__CTOR_OFFSET))(this);
		}
	};
}
