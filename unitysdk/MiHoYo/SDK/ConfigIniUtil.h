#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class ConfigIniModel; }

#define MIHOYO_SDK_CONFIGINIUTIL_LOADCONFIGINI_OFFSET UNITYSDK_OFFSET(0x15DFD860)
#define MIHOYO_SDK_CONFIGINIUTIL__CTOR_OFFSET UNITYSDK_OFFSET(0x15DFDDA0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConfigIniUtil_TypeDefinitionIndex = 6974;

	class ConfigIniUtil : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGINIUTIL__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::ConfigIniModel* LoadConfigIni()
		{
			return ((::MiHoYo::SDK::ConfigIniModel*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGINIUTIL_LOADCONFIGINI_OFFSET))();
		}
	};
}
