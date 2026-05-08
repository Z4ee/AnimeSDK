#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIGUICOMMON_DAMAGETEXT_CONFIGSPECIALDAMAGETEXTEXTRA__CTOR_OFFSET UNITYSDK_OFFSET(0x1103F020)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUICommon_DamageText_ConfigSpecialDamageTextExtra_TypeDefinitionIndex = 44768;

	class ConfigUICommon_DamageText_ConfigSpecialDamageTextExtra : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_DAMAGETEXT_CONFIGSPECIALDAMAGETEXTEXTRA__CTOR_OFFSET))(this);
		}
	};
}
