#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_DEVICESETTINGPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B502B90)

namespace MoleMole
{
	inline static constexpr unsigned int DeviceSettingProfile_TypeDefinitionIndex = 63001;

	class DeviceSettingProfile : public ::System::Object
	{
	public:
		::System::String* PerformanceSettingKey; // 0x10
		::System::String* DefaultGraphicSettingKey; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DEVICESETTINGPROFILE__CTOR_OFFSET))(this);
		}
	};
}
