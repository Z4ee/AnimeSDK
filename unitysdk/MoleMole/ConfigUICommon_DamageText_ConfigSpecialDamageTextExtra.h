#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIGUICOMMON_DAMAGETEXT_CONFIGSPECIALDAMAGETEXTEXTRA__CTOR_OFFSET UNITYSDK_OFFSET(0x18F4D6E0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUICommon_DamageText_ConfigSpecialDamageTextExtra_TypeDefinitionIndex = 55543;

	class ConfigUICommon_DamageText_ConfigSpecialDamageTextExtra : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_DAMAGETEXT_CONFIGSPECIALDAMAGETEXTEXTRA__CTOR_OFFSET))(this);
		}
	};
}
