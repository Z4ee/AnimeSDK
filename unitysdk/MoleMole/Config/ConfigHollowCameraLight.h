#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCAMERALIGHT__CTOR_OFFSET UNITYSDK_OFFSET(0x1230BC60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowCameraLight_TypeDefinitionIndex = 70601;

	class ConfigHollowCameraLight : public ::System::Object
	{
	public:
		::System::Single lightHeight; // 0x10
		::System::Single lightWidth; // 0x14
		::System::Single lightIntensity; // 0x18
		::System::Single lightRange; // 0x1C
		::System::Single lightDist; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCAMERALIGHT__CTOR_OFFSET))(this);
		}
	};
}
