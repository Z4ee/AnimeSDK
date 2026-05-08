#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGCHANGEBGDIFFUSION__CTOR_OFFSET UNITYSDK_OFFSET(0x159E5FD0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChangeBGDiffusion_TypeDefinitionIndex = 48769;

	class ConfigChangeBGDiffusion : public ::System::Object
	{
	public:
		::System::String* DiffusionInKey; // 0x10
		::System::String* DiffusionOutKey; // 0x18
		::System::Single FadeOutDuration; // 0x20
		::System::Single FadeInDuration; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHANGEBGDIFFUSION__CTOR_OFFSET))(this);
		}
	};
}
