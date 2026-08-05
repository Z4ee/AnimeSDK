#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGMISC_INTERACTROTATE__CTOR_OFFSET UNITYSDK_OFFSET(0xF13CAC0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMisc_InteractRotate_TypeDefinitionIndex = 48036;

	class ConfigMisc_InteractRotate : public ::System::Object
	{
	public:
		::System::String* RotateAnimName; // 0x10
		::System::String* Curve; // 0x18
		::System::Single MinAngle; // 0x20
		::System::Single MaxAngle; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMISC_INTERACTROTATE__CTOR_OFFSET))(this);
		}
	};
}
