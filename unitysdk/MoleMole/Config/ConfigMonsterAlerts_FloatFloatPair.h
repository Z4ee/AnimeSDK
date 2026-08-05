#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIG_CONFIGMONSTERALERTS_FLOATFLOATPAIR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B7ED930)
#define MOLEMOLE_CONFIG_CONFIGMONSTERALERTS_FLOATFLOATPAIR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7ED920)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMonsterAlerts_FloatFloatPair_TypeDefinitionIndex = 89848;

	class ConfigMonsterAlerts_FloatFloatPair : public ::System::Object
	{
	public:
		::System::Single key; // 0x10
		::System::Single value; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERALERTS_FLOATFLOATPAIR__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Single k, ::System::Single v)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERALERTS_FLOATFLOATPAIR__CTOR_1_OFFSET))(this, k, v);
		}
	};
}
