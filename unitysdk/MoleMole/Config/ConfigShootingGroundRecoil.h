#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIG_CONFIGSHOOTINGGROUNDRECOIL__CTOR_OFFSET UNITYSDK_OFFSET(0x19FEF8A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigShootingGroundRecoil_TypeDefinitionIndex = 68888;

	class ConfigShootingGroundRecoil : public ::System::Object
	{
	public:
		::System::Single MaxValue; // 0x10
		::System::Single RecoverSpeed; // 0x14
		::System::Single CrosshairOffsetRatio; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSHOOTINGGROUNDRECOIL__CTOR_OFFSET))(this);
		}
	};
}
