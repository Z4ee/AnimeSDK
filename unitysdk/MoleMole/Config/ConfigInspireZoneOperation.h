#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGINSPIREZONEOPERATION__CTOR_OFFSET UNITYSDK_OFFSET(0x183C2E60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigInspireZoneOperation_TypeDefinitionIndex = 41047;

	class ConfigInspireZoneOperation : public ::System::Object
	{
	public:
		::System::String* Name; // 0x10
		::System::String* UIShowTextKey; // 0x18
		::System::String* IconResPath; // 0x20
		::System::Single HoldTime; // 0x28
		::System::Int32 Priority; // 0x2C
		::System::Single FeverRecovery; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINSPIREZONEOPERATION__CTOR_OFFSET))(this);
		}
	};
}
