#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIG_CONFIGSHOOTINGGROUNDSPREAD__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD61260)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigShootingGroundSpread_TypeDefinitionIndex = 86024;

	class ConfigShootingGroundSpread : public ::System::Object
	{
	public:
		::System::Single MaxValue; // 0x10
		::System::Single RecoverSpeed; // 0x14
		::System::Single CrosshairScaleMin; // 0x18
		::System::Single CrosshairScaleMax; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSHOOTINGGROUNDSPREAD__CTOR_OFFSET))(this);
		}
	};
}
